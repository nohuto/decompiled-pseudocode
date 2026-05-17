/*
 * XREFs of __ctrandisp2 @ 0x4B2FD1B4
 * Callers:
 *     _atan2 @ 0x4B2F8140 (_atan2.c)
 * Callees:
 *     __trandisp2 @ 0x4B2FADB1 (__trandisp2.c)
 *     sub_4B2FD1EE @ 0x4B2FD1EE (sub_4B2FD1EE.c)
 *     __fload @ 0x4B2FD366 (__fload.c)
 */

int __usercall _ctrandisp2@<eax>(double a1@<st1>, double a2@<st0>, double a3, double a4)
{
  int v4; // edx
  __int16 v5; // fps
  int savedregs; // [esp+2A4h] [ebp+0h] BYREF

  _fload(a3);
  _fload(a4);
  _trandisp2(v4, (int)&savedregs, v5, a1, a2);
  return sub_4B2FD1EE();
}
