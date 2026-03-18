/*
 * XREFs of _GetMonitorRect@4 @ 0xB49BE
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     _GetPrimaryMonitorRect@0 @ 0xB3136 (_GetPrimaryMonitorRect@0.c)
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     ?FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z @ 0x13F7B7 (-FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z.c)
 *     ?IsRectBogus@@YGHHHHH@Z @ 0x13F8E6 (-IsRectBogus@@YGHHHHH@Z.c)
 *     ?PreventInterMonitorBlts@@YGXPAUtagCVR@@@Z @ 0x13F989 (-PreventInterMonitorBlts@@YGXPAUtagCVR@@@Z.c)
 *     _GetHimetricScaleForMonitor@12 @ 0x151143 (_GetHimetricScaleForMonitor@12.c)
 *     _RemapHimetricPointsForMultiMonDigitizers@28 @ 0x151698 (_RemapHimetricPointsForMultiMonDigitizers@28.c)
 *     __GetOwnerTransformedMonitorRect@16 @ 0x151D96 (__GetOwnerTransformedMonitorRect@16.c)
 *     _UserGetHipDeviceInfo@4 @ 0x159610 (_UserGetHipDeviceInfo@4.c)
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     _xxxSetInternalWindowPos@16 @ 0x16F556 (_xxxSetInternalWindowPos@16.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z @ 0x1A0DCF (-xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 * Callees:
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YGKXZ @ 0xB49EE (-GetCurrentThreadCompositedDpiContext@@YGKXZ.c)
 */

_DWORD *__thiscall GetMonitorRect(void *this, _DWORD *a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  INT *MonitorRectForDpiContext; // esi
  _DWORD *result; // eax
  INT v6[4]; // [esp+8h] [ebp-10h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  MonitorRectForDpiContext = GetMonitorRectForDpiContext((int)this, CurrentThreadCompositedDpiContext, v6);
  result = a2;
  *a2 = *MonitorRectForDpiContext++;
  a2[1] = *MonitorRectForDpiContext++;
  a2[2] = *MonitorRectForDpiContext;
  a2[3] = MonitorRectForDpiContext[1];
  return result;
}
