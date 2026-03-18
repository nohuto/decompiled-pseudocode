/*
 * XREFs of GetMonitorRect @ 0x1C003AFE8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     _GetWindowPlacement @ 0x1C003A648 (_GetWindowPlacement.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     GetPrimaryMonitorRect @ 0x1C0106640 (GetPrimaryMonitorRect.c)
 *     xxxSetWindowPlacement @ 0x1C0112068 (xxxSetWindowPlacement.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C01561B8 (_GetOwnerTransformedMonitorRect.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CFB60 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01CFCCC (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01CFD8C (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E4FB4 (GetHimetricScaleForMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E547C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     UserGetHipDeviceInfo @ 0x1C01EE830 (UserGetHipDeviceInfo.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2964 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C0208ED8 (xxxSetInternalWindowPos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C024288C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     FindBestPos @ 0x1C024A110 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C003AF80 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorRectForDpiContext @ 0x1C003DDC8 (GetMonitorRectForDpiContext.c)
 */

_OWORD *__fastcall GetMonitorRect(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int128 v7; // xmm0
  _OWORD *result; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext((__int64)a1, a2, a3, a4);
  v7 = *(_OWORD *)GetMonitorRectForDpiContext(v9, a2, CurrentThreadCompositedDpiContext);
  result = a1;
  *a1 = v7;
  return result;
}
