/*
 * XREFs of __pow_default @ 0x4B2F5C8B
 * Callers:
 *     _pow @ 0x4B2F5C60 (_pow.c)
 * Callees:
 *     __fload_withFB @ 0x4B2FAFA5 (__fload_withFB.c)
 */

int __cdecl _pow_default(int a1, int a2, int a3, int a4)
{
  int v4; // ecx

  _fload_withFB(v4, &a3);
  return sub_4B2F5C94(a1, a2, a3, a4);
}
