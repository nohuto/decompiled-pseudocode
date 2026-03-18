/*
 * XREFs of ?bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ @ 0x25308
 * Callers:
 *     _GreSetRedirectionSurfaceSignaling@24 @ 0x21A20 (_GreSetRedirectionSurfaceSignaling@24.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QAEJPAUtagDWMSURFACEDATA@@@Z @ 0x2335A (-GetSoSurfaceData@SFMLOGICALSURFACE@@QAEJPAUtagDWMSURFACEDATA@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z @ 0x25270 (-bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     _GreAddBitmapD3DDirtyRgn@12 @ 0xB93E6 (_GreAddBitmapD3DDirtyRgn@12.c)
 *     _GreGetHwndUpdateIds@12 @ 0x1CE24A (_GreGetHwndUpdateIds@12.c)
 *     _GreHLsurfSetUpdateId@16 @ 0x1CE54B (_GreHLsurfSetUpdateId@16.c)
 *     _GreWindowResizeComplete@8 @ 0x1CEAC5 (_GreWindowResizeComplete@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall SFMLOGICALSURFACE::bDeviceBitmap(SFMLOGICALSURFACE *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 28);
  return v1 && (*(_BYTE *)(v1 + 60) & 1) != 0;
}
