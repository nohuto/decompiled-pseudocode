/*
 * XREFs of _GetMonitorWorkRect@4 @ 0xB498E
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?CheckPlacementBounds@@YGXPAUtagRECT@@PAUtagPOINT@@1PAUtagMONITOR@@@Z @ 0xB277C (-CheckPlacementBounds@@YGXPAUtagRECT@@PAUtagPOINT@@1PAUtagMONITOR@@@Z.c)
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     _xxxDesktopPaintCallback@16 @ 0xE9858 (_xxxDesktopPaintCallback@16.c)
 *     ?FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z @ 0x13F7B7 (-FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z.c)
 *     ?IsRectBogus@@YGHHHHH@Z @ 0x13F8E6 (-IsRectBogus@@YGHHHHH@Z.c)
 *     __GetOwnerTransformedMonitorRect@16 @ 0x151D96 (__GetOwnerTransformedMonitorRect@16.c)
 *     ?xxxShowSwitchWindow@@YGHPAUtagWND@@@Z @ 0x15CF04 (-xxxShowSwitchWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxSetInternalWindowPos@16 @ 0x16F556 (_xxxSetInternalWindowPos@16.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?TryRect@@YGHIHHHHPAUtagRECT@@PAUtagPOINT@@PAUtagMONITOR@@@Z @ 0x1A7C3C (-TryRect@@YGHIHHHHPAUtagRECT@@PAUtagPOINT@@PAUtagMONITOR@@@Z.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 * Callees:
 *     _GetMonitorWorkRectForDpiContext@8 @ 0x71F62 (_GetMonitorWorkRectForDpiContext@8.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YGKXZ @ 0xB49EE (-GetCurrentThreadCompositedDpiContext@@YGKXZ.c)
 */

_DWORD *__thiscall GetMonitorWorkRect(void *this, _DWORD *a2)
{
  int CurrentThreadCompositedDpiContext; // eax
  int *MonitorWorkRectForDpiContext; // esi
  _DWORD *result; // eax
  int v6[5]; // [esp+8h] [ebp-14h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  MonitorWorkRectForDpiContext = GetMonitorWorkRectForDpiContext((int)this, CurrentThreadCompositedDpiContext, v6);
  result = a2;
  *a2 = *MonitorWorkRectForDpiContext++;
  a2[1] = *MonitorWorkRectForDpiContext++;
  a2[2] = *MonitorWorkRectForDpiContext;
  a2[3] = MonitorWorkRectForDpiContext[1];
  return result;
}
