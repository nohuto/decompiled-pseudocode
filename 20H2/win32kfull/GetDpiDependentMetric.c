/*
 * XREFs of GetDpiDependentMetric @ 0x1C005BD0C
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C001B770 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C0033394 (GetWindowNCMetrics.c)
 *     xxxMNCompute @ 0x1C0034BC0 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00356B4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0036D3C (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     _SystemParametersInfoForDpi @ 0x1C003858C (_SystemParametersInfoForDpi.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D294 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C003DAB0 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     xxxCalcClientRect @ 0x1C004BFD0 (xxxCalcClientRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004C5DC (GetWindowBordersWithDpiAwareness.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C005B890 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     CalcSBStuff2 @ 0x1C005DCD8 (CalcSBStuff2.c)
 *     CalcSBStuff @ 0x1C005DF24 (CalcSBStuff.c)
 *     GetWindowNCMetricsForDpi @ 0x1C005E988 (GetWindowNCMetricsForDpi.c)
 *     SetTiledRect @ 0x1C006143C (SetTiledRect.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     xxxCreateWindowSmIcon @ 0x1C007A488 (xxxCreateWindowSmIcon.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C007B2C8 (xxxUpdateSystemIconsFromRegistry.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0098A34 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C00B2E88 (xxxGetMenuBarInfo.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00C7DC0 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00C966C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00CBE20 (_AdjustWindowRectExForDpi.c)
 *     xxxCheckFullScreen @ 0x1C00D3A38 (xxxCheckFullScreen.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C00FE930 (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     xxxCreateClassSmIcon @ 0x1C010449C (xxxCreateClassSmIcon.c)
 *     InternalGetRealClientRect @ 0x1C01093C8 (InternalGetRealClientRect.c)
 *     GetCaptionHeight @ 0x1C0109718 (GetCaptionHeight.c)
 *     FindNCHit @ 0x1C0119040 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C014AD98 (MNPositionSysMenu.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014CB44 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D6B64 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E9D80 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2964 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020E8B4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238210 (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E50C (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0243C78 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244D34 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0244FE0 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246ECC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxCalcCaptionButton @ 0x1C02471A8 (xxxCalcCaptionButton.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C005BD68 (GetDpiCacheSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01E9D00 (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall GetDpiDependentMetric(__int64 a1, unsigned int a2)
{
  int DpiCacheSlot; // eax
  __int64 v4; // r11
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 result; // rax

  DpiCacheSlot = GetDpiCacheSlot(a2);
  v5 = v4;
  v6 = 30LL * DpiCacheSlot;
  result = *(unsigned int *)(gpsi + 4 * (v6 + v4) + 2284);
  if ( (_DWORD)result == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(a2);
    result = *(unsigned int *)(gpsi + 4 * (v5 + v6) + 2284);
    if ( (_DWORD)result == -1 )
      return 0LL;
  }
  return result;
}
