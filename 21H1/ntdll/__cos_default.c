/*
 * XREFs of __cos_default @ 0x4B2F5AD6
 * Callers:
 *     _cos @ 0x4B2F5AB0 (_cos.c)
 * Callees:
 *     __fload_withFB @ 0x4B2FAFA5 (__fload_withFB.c)
 */

int __cdecl _cos_default(int a1)
{
  int v1; // ecx

  _fload_withFB(v1, &a1);
  return sub_4B2F5ADF(a1);
}
