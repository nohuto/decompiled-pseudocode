/*
 * XREFs of __tan_default @ 0x4B2FA486
 * Callers:
 *     _tan @ 0x4B2FA460 (_tan.c)
 * Callees:
 *     __fload_withFB @ 0x4B2FAFA5 (__fload_withFB.c)
 */

int __cdecl _tan_default(int a1)
{
  int v1; // ecx

  _fload_withFB(v1);
  return sub_4B2FA48F(a1);
}
