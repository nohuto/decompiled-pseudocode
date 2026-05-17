/*
 * XREFs of __cintrindisp1 @ 0x4B2FD17E
 * Callers:
 *     <none>
 * Callees:
 *     __trandisp1 @ 0x4B2FAD40 (__trandisp1.c)
 *     sub_4B2FD1F5 @ 0x4B2FD1F5 (sub_4B2FD1F5.c)
 */

int __usercall _cintrindisp1@<eax>(int a1@<edx>, __int16 a2@<cx>, __int16 a3@<fpstat>, double a4@<st0>)
{
  int savedregs; // [esp+2A4h] [ebp+0h] BYREF

  _trandisp1(a1, a2, (int)&savedregs, a3, a4);
  byte_4B3A40F8 = 1;
  return sub_4B2FD1F5();
}
