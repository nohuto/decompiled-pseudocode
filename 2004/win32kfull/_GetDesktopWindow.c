/*
 * XREFs of _GetDesktopWindow @ 0x1C006F290
 * Callers:
 *     xxxActivateEnabledPopup @ 0x1C000725C (xxxActivateEnabledPopup.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C000E8BC (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00225CC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0023BF8 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     CkptUpdate @ 0x1C00257AC (CkptUpdate.c)
 *     _GetWindowPlacement @ 0x1C00278AC (_GetWindowPlacement.c)
 *     SetHungFlag @ 0x1C003094C (SetHungFlag.c)
 *     zzzLockWindowUpdate2 @ 0x1C0031334 (zzzLockWindowUpdate2.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C0031764 (ImeCanDestroyDefIMEforChild.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0033334 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     GetLastTopMostWindow @ 0x1C003CA64 (GetLastTopMostWindow.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedWindows @ 0x1C005B430 (xxxShowOwnedWindows.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C005BCE4 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxGetUpdateRgn @ 0x1C005D7A8 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C005E00C (xxxGetUpdateRect.c)
 *     xxxPaintRect @ 0x1C0061E74 (xxxPaintRect.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C006491C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006DC54 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006E75C (BuildWindowListWithDpiBoundaryInfo.c)
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 *     UpdateWindowMonitor @ 0x1C006F040 (UpdateWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     InternalInvalidate3 @ 0x1C0073974 (InternalInvalidate3.c)
 *     UnlinkWindow @ 0x1C008A2D8 (UnlinkWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00ADDCC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00E8350 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserGetAncestor @ 0x1C00E9AE0 (NtUserGetAncestor.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00EFF54 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00F5DC8 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     SetTiledRect @ 0x1C0102C40 (SetTiledRect.c)
 *     xxxMoveWindow @ 0x1C0104A5C (xxxMoveWindow.c)
 *     SelectWindowRgn @ 0x1C0108600 (SelectWindowRgn.c)
 *     NtUserSetParent @ 0x1C010FE60 (NtUserSetParent.c)
 *     xxxSetWindowPlacement @ 0x1C0110D38 (xxxSetWindowPlacement.c)
 *     _GetAncestor @ 0x1C011B464 (_GetAncestor.c)
 *     xxxSoundSentry @ 0x1C014FB00 (xxxSoundSentry.c)
 *     _ChildWindowFromPointEx @ 0x1C0151590 (_ChildWindowFromPointEx.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 *     PowerOnGdi @ 0x1C0155930 (PowerOnGdi.c)
 *     GetTopMostInsertAfter @ 0x1C01D147C (GetTopMostInsertAfter.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D2F50 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     xxxMetricsRecalc @ 0x1C01D8204 (xxxMetricsRecalc.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2090 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPointerParentNotify @ 0x1C01F28A0 (EditionPointerParentNotify.c)
 *     xxxSetInternalWindowPos @ 0x1C0209D60 (xxxSetInternalWindowPos.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C020A8AC (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C020A9A8 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C020B87C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020E280 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0235B80 (xxxBroadcastPaletteChanged.c)
 *     xxxDrawAnimatedRects @ 0x1C023FE44 (xxxDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C023FFD0 (xxxMinimizeHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0243D10 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     _RealChildWindowFromPoint @ 0x1C024A33C (_RealChildWindowFromPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDesktopWindow(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      return *(_QWORD *)(v3 + 24);
  }
  return result;
}
