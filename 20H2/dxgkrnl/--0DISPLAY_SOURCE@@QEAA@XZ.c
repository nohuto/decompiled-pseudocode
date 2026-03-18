/*
 * XREFs of ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x1C0192940
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027400 (memset.c)
 */

DISPLAY_SOURCE *__fastcall DISPLAY_SOURCE::DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = -1;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_BYTE *)this + 668) = 0;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 174) = 0;
  *((_QWORD *)this + 88) = 0LL;
  *((_DWORD *)this + 180) = 0;
  *((_WORD *)this + 362) = 0;
  *((_BYTE *)this + 726) = 0;
  *((_DWORD *)this + 194) = 0;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_DWORD *)this + 222) = 0;
  *((_DWORD *)this + 223) = -1;
  *((_DWORD *)this + 224) = 22;
  *((_DWORD *)this + 267) = -1;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_BYTE *)this + 952) = 0;
  *((_QWORD *)this + 134) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_DWORD *)this + 272) = 0;
  *((_BYTE *)this + 1092) = 0;
  *((_DWORD *)this + 276) = -1;
  *((_DWORD *)this + 277) = -1;
  *((_WORD *)this + 556) = 0;
  *((_BYTE *)this + 3696) = 0;
  *((_QWORD *)this + 467) = 0LL;
  *((_BYTE *)this + 3744) = 0;
  *((_DWORD *)this + 937) = -1;
  *((_DWORD *)this + 938) = -1;
  *((_DWORD *)this + 939) = 0;
  *((_QWORD *)this + 470) = 0LL;
  *((_QWORD *)this + 471) = 0LL;
  *((_QWORD *)this + 472) = 0LL;
  *((_DWORD *)this + 946) = 0;
  *((_DWORD *)this + 947) = -1;
  *((_DWORD *)this + 948) = 1;
  *((_DWORD *)this + 990) = 0;
  *(_OWORD *)((char *)this + 628) = 0LL;
  *(_OWORD *)((char *)this + 644) = 0LL;
  *(_QWORD *)((char *)this + 660) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *(_OWORD *)((char *)this + 968) = 0LL;
  *(_OWORD *)((char *)this + 984) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 252) = 0;
  *(_OWORD *)((char *)this + 1012) = 0LL;
  *(_OWORD *)((char *)this + 1028) = 0LL;
  *(_OWORD *)((char *)this + 1044) = 0LL;
  *(_QWORD *)((char *)this + 1060) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *((_OWORD *)this + 46) = 0LL;
  *((_OWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  memset((char *)this + 784, 0, 0x50uLL);
  memset((char *)this + 1120, 0, 0x690uLL);
  memset((char *)this + 2800, 0, 0x50uLL);
  *((_QWORD *)this + 360) = 0LL;
  *((_WORD *)this + 1444) = 0;
  memset((char *)this + 2896, 0, 0x320uLL);
  v2 = 10LL;
  *(_OWORD *)((char *)this + 3700) = 0LL;
  *(_OWORD *)((char *)this + 3716) = 0LL;
  *((_DWORD *)this + 933) = 0;
  v3 = (_DWORD *)((char *)this + 1124);
  do
  {
    *(v3 - 1) = -1;
    *v3 = -1;
    v3 += 42;
    --v2;
  }
  while ( v2 );
  *((_DWORD *)this + 700) = -1;
  *((_DWORD *)this + 701) = -1;
  *((_DWORD *)this + 175) = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 120);
  KeInitializeEvent((PRKEVENT)this + 38, NotificationEvent, 0);
  memset((char *)this + 3800, 0, 0xA0uLL);
  return this;
}
