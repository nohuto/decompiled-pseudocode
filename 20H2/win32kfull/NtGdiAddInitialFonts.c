/*
 * XREFs of NtGdiAddInitialFonts @ 0x1C012AF90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012AFF0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall NtGdiAddInitialFonts(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // al

  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    return 3221225506LL;
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  v3 = UmfdHostLifeTimeManager::AddInitialFonts();
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  return !v3 ? 0xC0000017 : 0;
}
