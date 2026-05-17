/*
 * XREFs of __log_default @ 0x4B2F5B96
 * Callers:
 *     _log @ 0x4B2F5B70 (_log.c)
 * Callees:
 *     __fload_withFB @ 0x4B2FAFA5 (__fload_withFB.c)
 */

int __cdecl _log_default(int a1, int a2)
{
  int v2; // ecx

  _fload_withFB(v2, &a1);
  return sub_4B2F5B9F(a1, a2);
}
