/*
 * XREFs of __sin_default @ 0x4B2F5EB6
 * Callers:
 *     _sin @ 0x4B2F5E90 (_sin.c)
 * Callees:
 *     __fload_withFB @ 0x4B2FAFA5 (__fload_withFB.c)
 */

int __cdecl _sin_default(int a1)
{
  int v1; // ecx

  _fload_withFB(v1, &a1);
  return sub_4B2F5EBF(a1);
}
