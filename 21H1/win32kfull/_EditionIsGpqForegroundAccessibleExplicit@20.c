/*
 * XREFs of _EditionIsGpqForegroundAccessibleExplicit@20 @ 0xA496E
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0xA4996 (-IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

int __stdcall EditionIsGpqForegroundAccessibleExplicit(int a1, int a2, int a3, int a4, int a5)
{
  if ( IsGpqForegroundAccessibleExplicit(a1, a2, a5, a3, a4) )
    return 1;
  EtwTraceUIPIInputError(a2, 0, _gpqForeground, *(_DWORD *)(_gpqForeground + 316), *(_DWORD *)(_gpqForeground + 320), 1);
  return 0;
}
