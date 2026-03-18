/*
 * XREFs of ?bRemoteDriverNeedsDeviceBitmaps@@YGHAAVPDEVOBJ@@@Z @ 0xAEAAA
 * Callers:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?SpCreateSurface@@YG?AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z @ 0xF5BC4 (-SpCreateSurface@@YG-AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z.c)
 *     ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90 (-CreateCompatibleSurface@@YG-AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall bRemoteDriverNeedsDeviceBitmaps(void *this)
{
  int v1; // esi

  v1 = 0;
  if ( *(_DWORD *)(*(_DWORD *)this + 2276)
    && (*(_DWORD *)(*(_DWORD *)this + 1416) & 0x400) != 0
    && (!g_pDwmState || !UserIsRemoteAndNotDisconnectConnection()) )
  {
    return 1;
  }
  return v1;
}
