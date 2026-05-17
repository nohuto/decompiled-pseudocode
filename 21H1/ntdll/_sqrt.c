/*
 * XREFs of _sqrt @ 0x4B2F5F84
 * Callers:
 *     <none>
 * Callees:
 *     __fload_withFB @ 0x4B2FAFA5 (__fload_withFB.c)
 */

double __cdecl sqrt(double X)
{
  int v1; // ecx

  _fload_withFB(v1);
  return sub_4B2F5F8D(LODWORD(X), HIDWORD(X));
}
