/*
 * XREFs of ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008C9E4
 * Callers:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C008C920 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00A76A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00C2848 (GreSetRedirectionSurfaceSignaling.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C00C301C (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     GreGetDxSharedSurface @ 0x1C0110710 (GreGetDxSharedSurface.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026E7FC (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C026EEE0 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetUpdateId @ 0x1C026F318 (GreHLsurfSetUpdateId.c)
 *     GreWindowResizeComplete @ 0x1C026FB10 (GreWindowResizeComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::bDeviceBitmap(SFMLOGICALSURFACE *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 23);
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 92) & 1) == 0 )
    return 0;
  return v2;
}
