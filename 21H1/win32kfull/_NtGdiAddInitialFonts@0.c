/*
 * XREFs of _NtGdiAddInitialFonts@0 @ 0xD661E
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SG_NXZ @ 0xD6894 (-AddInitialFonts@UmfdHostLifeTimeManager@@SG_NXZ.c)
 */

int __stdcall NtGdiAddInitialFonts()
{
  int v0; // esi

  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return -1073741790;
  KeGetCurrentThread();
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  v0 = UmfdHostLifeTimeManager::AddInitialFonts() ? 0x3FFFFFE9 : 0;
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  return v0 - 1073741801;
}
