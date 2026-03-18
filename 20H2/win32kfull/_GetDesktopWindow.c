/*
 * XREFs of _GetDesktopWindow @ 0x1C0046F20
 * Callers:
 *     xxxActivateEnabledPopup @ 0x1C00070FC (xxxActivateEnabledPopup.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C000F768 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0012724 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     GetLastTopMostWindow @ 0x1C00141C4 (GetLastTopMostWindow.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     xxxShowOwnedWindows @ 0x1C00187F4 (xxxShowOwnedWindows.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C001AD10 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxPaintRect @ 0x1C0037958 (xxxPaintRect.c)
 *     _GetWindowPlacement @ 0x1C003A648 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C003AA98 (CkptUpdate.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D294 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     InternalInvalidate3 @ 0x1C0044D64 (InternalInvalidate3.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     LinkWindow @ 0x1C0046760 (LinkWindow.c)
 *     UpdateWindowMonitor @ 0x1C0046CD0 (UpdateWindowMonitor.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0047020 (BuildWindowListWithDpiBoundaryInfo.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0047C30 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C004A38C (xxxNotifyMonitorChanged.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     SetTiledRect @ 0x1C006143C (SetTiledRect.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00816D4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0092E4C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C009495C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C00BC434 (ImeCanDestroyDefIMEforChild.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     zzzLockWindowUpdate2 @ 0x1C00BF2BC (zzzLockWindowUpdate2.c)
 *     SetHungFlag @ 0x1C00BF4E0 (SetHungFlag.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C54E4 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SelectWindowRgn @ 0x1C00C7B7C (SelectWindowRgn.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00C8500 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     UnlinkWindow @ 0x1C00CEAA8 (UnlinkWindow.c)
 *     NtUserGetAncestor @ 0x1C00E5D40 (NtUserGetAncestor.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C01045E8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxMoveWindow @ 0x1C01056BC (xxxMoveWindow.c)
 *     xxxGetUpdateRgn @ 0x1C0105D24 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C010F7E0 (xxxGetUpdateRect.c)
 *     NtUserSetParent @ 0x1C0110E70 (NtUserSetParent.c)
 *     xxxSetWindowPlacement @ 0x1C0112068 (xxxSetWindowPlacement.c)
 *     _GetAncestor @ 0x1C011BE54 (_GetAncestor.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C011EC38 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSoundSentry @ 0x1C0152300 (xxxSoundSentry.c)
 *     _ChildWindowFromPointEx @ 0x1C0153EC0 (_ChildWindowFromPointEx.c)
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0156560 (CreateSpb.c)
 *     PowerOnGdi @ 0x1C0158290 (PowerOnGdi.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B4AC (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     GetTopMostInsertAfter @ 0x1C01D066C (GetTopMostInsertAfter.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D2140 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     xxxMetricsRecalc @ 0x1C01D7544 (xxxMetricsRecalc.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F1420 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPointerParentNotify @ 0x1C01F1C30 (EditionPointerParentNotify.c)
 *     xxxSetInternalWindowPos @ 0x1C0208ED8 (xxxSetInternalWindowPos.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209A2C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209B28 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C020A9FC (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D400 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0234CF0 (xxxBroadcastPaletteChanged.c)
 *     xxxDrawAnimatedRects @ 0x1C023EBA4 (xxxDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C023ED30 (xxxMinimizeHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C0240E74 (xxxRedrawHungWindow.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0242A70 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     _RealChildWindowFromPoint @ 0x1C0248D8C (_RealChildWindowFromPoint.c)
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
