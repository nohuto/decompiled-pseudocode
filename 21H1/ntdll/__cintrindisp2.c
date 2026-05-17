/*
 * XREFs of __cintrindisp2 @ 0x4B2FD140
 * Callers:
 *     __CIatan2 @ 0x4B2F814A (__CIatan2.c)
 * Callees:
 *     __trandisp2 @ 0x4B2FADB1 (__trandisp2.c)
 *     sub_4B2FD1F5 @ 0x4B2FD1F5 (sub_4B2FD1F5.c)
 */

int __usercall _cintrindisp2@<eax>(int a1@<edx>, __int16 a2@<fpstat>, double a3@<st1>, double a4@<st0>)
{
  int savedregs; // [esp+2A4h] [ebp+0h] BYREF

  _trandisp2(a1, (int)&savedregs, a2, a3, a4);
  byte_4B3A40F8 = 1;
  return sub_4B2FD1F5();
}
