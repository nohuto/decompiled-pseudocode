/*
 * XREFs of GetMonitorRect @ 0x1C002A734
 * Callers:
 *     _GetWindowPlacement @ 0x1C00278AC (_GetWindowPlacement.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     GetPrimaryMonitorRect @ 0x1C0105720 (GetPrimaryMonitorRect.c)
 *     xxxSetWindowPlacement @ 0x1C0110D38 (xxxSetWindowPlacement.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0153888 (_GetOwnerTransformedMonitorRect.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01D0970 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01D0ADC (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01D0B9C (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E5C74 (GetHimetricScaleForMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E613C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     UserGetHipDeviceInfo @ 0x1C01EF4A0 (UserGetHipDeviceInfo.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F35D0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C0209D60 (xxxSetInternalWindowPos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0243B2C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     FindBestPos @ 0x1C024B718 (FindBestPos.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C0023470 (GetMonitorRectForDpiContext.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C002A778 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

_OWORD *__fastcall GetMonitorRect(_OWORD *a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  v5 = *GetMonitorRectForDpiContext(&v7, a2, CurrentThreadCompositedDpiContext);
  result = a1;
  *a1 = v5;
  return result;
}
