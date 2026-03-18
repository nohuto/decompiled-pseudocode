/*
 * XREFs of _InternalBeginDeferWindowPos@4 @ 0x32DC2
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 *     _xxxProcessSetWindowPosEvent@4 @ 0x16FEA (_xxxProcessSetWindowPosEvent@4.c)
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 *     _xxxSetWindowRgn@12 @ 0x9CBE8 (_xxxSetWindowRgn@12.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _xxxRestoreMonitorsAndWindowsRects@8 @ 0x146391 (_xxxRestoreMonitorsAndWindowsRects@8.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 * Callees:
 *     _AllocateCvr@8 @ 0x9BF80 (_AllocateCvr@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall InternalBeginDeferWindowPos(int a1)
{
  int v2; // esi
  int v4; // eax

  if ( (_gdwPUDFlags & 0x40000000) == 0 && a1 <= _gSMWP[5] )
  {
    _gdwPUDFlags |= 0x40000000u;
    v2 = _gSMWP[0];
    _gSMWP[0] = 0;
    _gSMWP[1] = _gSMWP[0];
    _gSMWP[2] = 0;
    _gSMWP[3] = 0;
    _gSMWP[4] = 0;
    return v2;
  }
  v4 = Win32AllocPoolWithQuotaZInit(28, 2004054869);
  v2 = v4;
  if ( v4 )
  {
    if ( AllocateCvr(v4, a1) )
      return v2;
    Win32FreePool(v2);
  }
  return 0;
}
