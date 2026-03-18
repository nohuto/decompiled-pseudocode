/*
 * XREFs of __GetDesktopWindow@4 @ 0x381A0
 * Callers:
 *     _SetHungFlag@8 @ 0x17252 (_SetHungFlag@8.c)
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     ?GetLastTopMostWindowNoIME@@YGPAUtagWND@@PAU1@@Z @ 0x1C38E (-GetLastTopMostWindowNoIME@@YGPAUtagWND@@PAU1@@Z.c)
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _ValidateParentDepth@8 @ 0x34CBA (_ValidateParentDepth@8.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _GetInheritedMonitor@4 @ 0x35826 (_GetInheritedMonitor@4.c)
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 *     ?ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z @ 0x38C50 (-ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _SetTiledRect@12 @ 0x6FF46 (_SetTiledRect@12.c)
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 *     _xxxPaintRect@20 @ 0x7215C (_xxxPaintRect@20.c)
 *     ?DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z @ 0x739C0 (-DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z.c)
 *     ?_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x7705E (-_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358 (-NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z.c)
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     _xxxMoveWindow@24 @ 0x9A1C4 (_xxxMoveWindow@24.c)
 *     _xxxGetUpdateRect@12 @ 0xA5AFE (_xxxGetUpdateRect@12.c)
 *     _xxxHandleWindowPosChanged@8 @ 0xAB7B6 (_xxxHandleWindowPosChanged@8.c)
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     _CkptUpdate@12 @ 0xB48F4 (_CkptUpdate@12.c)
 *     _xxxShowOwnedWindows@12 @ 0xB4B0A (_xxxShowOwnedWindows@12.c)
 *     __GetAncestor@8 @ 0xB52FC (__GetAncestor@8.c)
 *     ?_ShouldGhostWindow@@YGHPAUtagWND@@@Z @ 0xC25FC (-_ShouldGhostWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxGetUpdateRgn@12 @ 0xC3C20 (_xxxGetUpdateRgn@12.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _NtUserSetParent@8 @ 0xCB854 (_NtUserSetParent@8.c)
 *     _ImeCanDestroyDefIMEforChild@8 @ 0xCB942 (_ImeCanDestroyDefIMEforChild@8.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     _PowerOnGdi@12 @ 0xD37F0 (_PowerOnGdi@12.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 *     _EditionPointerParentNotify@112 @ 0xF1DE0 (_EditionPointerParentNotify@112.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     _GetTopMostInsertAfter@4 @ 0x140095 (_GetTopMostInsertAfter@4.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x141881 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 *     _xxxSetInternalWindowPos@16 @ 0x16F556 (_xxxSetInternalWindowPos@16.c)
 *     ?_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z @ 0x16FC5F (-_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z @ 0x16FD0E (-_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z.c)
 *     ?EvaluateArrangeState@@YG?AW4_WARR_STATES@@PAUtagWND@@@Z @ 0x1710C7 (-EvaluateArrangeState@@YG-AW4_WARR_STATES@@PAUtagWND@@@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 *     __ChildWindowFromPointEx@16 @ 0x17BE7F (__ChildWindowFromPointEx@16.c)
 *     _xxxBroadcastPaletteChanged@8 @ 0x196256 (_xxxBroadcastPaletteChanged@8.c)
 *     _xxxDrawAnimatedRects@16 @ 0x19E161 (_xxxDrawAnimatedRects@16.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 *     ?xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z @ 0x1A0F63 (-xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 *     _xxxActivateEnabledPopup@4 @ 0x1A1E3A (_xxxActivateEnabledPopup@4.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 *     __RealChildWindowFromPoint@12 @ 0x1A6C64 (__RealChildWindowFromPoint@12.c)
 * Callees:
 *     <none>
 */

int __thiscall _GetDesktopWindow(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax

  v1 = this[3];
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    if ( v3 )
      return *(_DWORD *)(v3 + 12);
  }
  return v2;
}
