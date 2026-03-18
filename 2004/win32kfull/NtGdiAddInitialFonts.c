/*
 * XREFs of NtGdiAddInitialFonts @ 0x1C0009070
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00093D8 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 NtGdiAddInitialFonts()
{
  bool v0; // al

  if ( PsGetCurrentProcess() != gpepCSRSS )
    return 3221225506LL;
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  v0 = UmfdHostLifeTimeManager::AddInitialFonts();
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  return !v0 ? 0xC0000017 : 0;
}
