/*
 * XREFs of __ctrandisp1 @ 0x4B2FD33A
 * Callers:
 *     <none>
 * Callees:
 *     __trandisp1 @ 0x4B2FAD40 (__trandisp1.c)
 *     sub_4B2FD1EE @ 0x4B2FD1EE (sub_4B2FD1EE.c)
 *     __fload @ 0x4B2FD366 (__fload.c)
 */

int __usercall _ctrandisp1@<eax>(double a1@<st0>, double a2)
{
  int v2; // edx
  __int16 v3; // cx
  __int16 v4; // fps
  int savedregs; // [esp+2A4h] [ebp+0h] BYREF

  _fload(a2);
  _trandisp1(v2, v3, (int)&savedregs, v4, a1);
  return sub_4B2FD1EE();
}
