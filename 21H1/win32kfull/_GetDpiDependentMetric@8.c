/*
 * XREFs of _GetDpiDependentMetric@8 @ 0x6E48A
 * Callers:
 *     _xxxCreateWindowSmIcon@12 @ 0x13138 (_xxxCreateWindowSmIcon@12.c)
 *     _xxxCreateClassSmIcon@4 @ 0x137DE (_xxxCreateClassSmIcon@4.c)
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     __AdjustWindowRectExForDpi@20 @ 0x313D6 (__AdjustWindowRectExForDpi@20.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     ?xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z @ 0x31656 (-xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z.c)
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     _CalcSBStuff2@16 @ 0x6DB64 (_CalcSBStuff2@16.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _SetTiledRect@12 @ 0x6FF46 (_SetTiledRect@12.c)
 *     ?ComputeMaxTrackSize@@YG?AUtagSIZE@@UtagRECT@@G@Z @ 0x7067C (-ComputeMaxTrackSize@@YG-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 *     _GetCaptionHeight@4 @ 0x8EDFE (_GetCaptionHeight@4.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     ?CreateDPIBitmapStrip@@YGHI@Z @ 0x90002 (-CreateDPIBitmapStrip@@YGHI@Z.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     ?UpdateFrameControlMetricsSize@@YGFPAUOEMBITMAPSET@@I@Z @ 0x9139A (-UpdateFrameControlMetricsSize@@YGFPAUOEMBITMAPSET@@I@Z.c)
 *     _GetWindowNCMetrics@4 @ 0x91522 (_GetWindowNCMetrics@4.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z @ 0x91676 (-GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z @ 0x916D2 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z.c)
 *     __SystemParametersInfoForDpi@20 @ 0x91804 (__SystemParametersInfoForDpi@20.c)
 *     _GetWindowNCMetricsForDpi@8 @ 0x9184C (_GetWindowNCMetricsForDpi@8.c)
 *     _InternalGetRealClientRect@20 @ 0xA23FA (_InternalGetRealClientRect@20.c)
 *     _FindNCHit@8 @ 0xA9F04 (_FindNCHit@8.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     _MNPositionSysMenu@8 @ 0xC069A (_MNPositionSysMenu@8.c)
 *     ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60 (-xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z.c)
 *     _xxxUpdateSystemIconsFromRegistry@4 @ 0xD8AEE (_xxxUpdateSystemIconsFromRegistry@4.c)
 *     ?xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z @ 0x145849 (-xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PAU_MOVESIZEDATA@@PAJ@Z @ 0x174574 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 *     ?xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z @ 0x19DBBC (-xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A26D0 (-CalcTrackDragRect@@YGXPAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360 (-zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z.c)
 *     _DrawSize@16 @ 0x1A3566 (_DrawSize@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 *     ?DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z @ 0x1A5106 (-DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z.c)
 *     _xxxCalcCaptionButton@24 @ 0x1A52FE (_xxxCalcCaptionButton@24.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     __EnsureDpiDepSysMetCacheForPlateau@4 @ 0x15534E (__EnsureDpiDepSysMetCacheForPlateau@4.c)
 */

int __fastcall GetDpiDependentMetric(int a1, INT a2)
{
  int v2; // esi
  int v3; // esi
  int result; // eax

  v2 = -1;
  if ( a2 == *(unsigned __int16 *)(_gpsi + 6242) )
  {
    v2 = 0;
  }
  else if ( a2 >= 96 && !(a2 % 24) )
  {
    v2 = (a2 - 72) / 24;
    if ( v2 >= 18 )
      v2 = -1;
  }
  v3 = a1 + 30 * v2;
  result = *(_DWORD *)(_gpsi + 4 * v3 + 1884);
  if ( result == -1 )
  {
    _EnsureDpiDepSysMetCacheForPlateau(a2);
    return *(_DWORD *)(_gpsi + 4 * v3 + 1884) != -1 ? *(_DWORD *)(_gpsi + 4 * v3 + 1884) : 0;
  }
  return result;
}
