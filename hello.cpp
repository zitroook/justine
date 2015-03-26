#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int obfuscation()
{
	unsigned char* _=(unsigned char*)malloc(32*1024);/*32kB*/if(_==0){printf("MEMORY ERROR!\n");return 1;}
    *_ += -1;while(*_) {
        *_ += -7;_ += 1;*_ += 1;_ += -1;}
    _ += 1;*_ += 2;putchar(*_);
    *_ += 1;while(*_) {
        *_ += -6;_ += 1;*_ += 1;_ += -1;}
    _ += 1;*_ += -1;putchar(*_);
    *_ += -2;while(*_) {
        *_ += -3;_ += 1;*_ += 1;_ += -1;}
    _ += 1;*_ += -1;putchar(*_);
    *_ += -12;putchar(*_);
    while(*_) {
        *_ += -3;_ += 1;*_ += 1;_ += -1;}
    _ += 1;*_ += 1;putchar(*_);
    *_ += -1;while(*_) {
        *_ += -4;_ += 1;*_ += 1;_ += -1;}
    _ += 1;*_ += 2;putchar(*_);
    *_ += 3;while(*_) {
        *_ += -1;_ += 1;*_ += 2;_ += -1;}
    _ += 1;*_ += 1;putchar(*_);
    while(*_) {
        *_ += -1;_ += 1;*_ += 5;_ += -1;}
    _ += 1;*_ += 2;putchar(*_);
    while(*_) {
        *_ += -3;_ += 1;*_ += 1;_ += -1;}
    _ += 1;*_ += -3;putchar(*_);
    while(*_) {
        *_ += -4;_ += 1;*_ += 1;_ += -1;}
    _ += 1;*_ += 3;putchar(*_);
    while(*_) {
        *_ += -2;_ += 1;*_ += 5;_ += -1;}
    _ += 1;*_ += -1;putchar(*_);
    *_ += -2;while(*_) {
        *_ += -3;_ += 1;*_ += 1;_ += -1;}
    _ += 1;*_ += -1;putchar(*_);
    *_ += -2;putchar(*_);
    *_ += -3;putchar(*_);
    *_ += 5;putchar(*_);
    *_ += -9;putchar(*_);
    *_ += -2;while(*_) {
        *_ += -3;_ += 1;*_ += 1;_ += -1;}
    _ += 1;putchar(*_);
    while(*_) {
        *_ += -3;_ += 1;*_ += 1;_ += -1;}
    _ += 1;*_ += -1;putchar(*_);
    //free(_);

}


int main()
{
	char a = '0';
	
	std::cout << "Hello World!" << std::endl;
	obfuscation();
	return 0;
}
