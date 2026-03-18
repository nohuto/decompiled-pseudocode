/*
 * XREFs of __IsTopLevelWindow@4 @ 0x38178
 * Callers:
 *     ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24 (-GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z.c)
 *     ?xxxUpdateTray@@YGXPAUtagWND@@@Z @ 0x19ED6 (-xxxUpdateTray@@YGXPAUtagWND@@@Z.c)
 *     _FVisCountable@4 @ 0x1CD18 (_FVisCountable@4.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     _InitializeDPIINFO@16 @ 0x24784 (_InitializeDPIINFO@16.c)
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 *     ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0 (-xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _ShouldUseLogPixelsForWindowMetrics@4 @ 0x2AC48 (_ShouldUseLogPixelsForWindowMetrics@4.c)
 *     _BuildWindowListWithDpiBoundaryInfo@16 @ 0x2AC94 (_BuildWindowListWithDpiBoundaryInfo@16.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _IsTopLevelOrLayeredChildWindow@4 @ 0x6DD1A (_IsTopLevelOrLayeredChildWindow@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z @ 0x9B656 (-GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     _IsWindowBroadcastingDpiToChildrenX@4 @ 0x9B752 (_IsWindowBroadcastingDpiToChildrenX@4.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _ShouldHaveShadow@4 @ 0xA9746 (_ShouldHaveShadow@4.c)
 *     _xxxEnableChildWindowDpiMessageX@8 @ 0xA9806 (_xxxEnableChildWindowDpiMessageX@8.c)
 *     _NtUserSetWindowCompositionTransition@28 @ 0xAB3DC (_NtUserSetWindowCompositionTransition@28.c)
 *     _NtUserBeginLayoutUpdate@4 @ 0xAD520 (_NtUserBeginLayoutUpdate@4.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _xxxRestoreWindowFromDeferredStateIfNeeded@8 @ 0xB4A52 (_xxxRestoreWindowFromDeferredStateIfNeeded@8.c)
 *     _NtUserUpdateLayeredWindow@40 @ 0xBA93E (_NtUserUpdateLayeredWindow@40.c)
 *     ?_ShouldGhostWindow@@YGHPAUtagWND@@@Z @ 0xC25FC (-_ShouldGhostWindow@@YGHPAUtagWND@@@Z.c)
 *     _NtUserGetWindowDisplayAffinity@8 @ 0xC49B8 (_NtUserGetWindowDisplayAffinity@8.c)
 *     _GetDisplayAffinity@8 @ 0xC4A42 (_GetDisplayAffinity@8.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     ?ShouldComposeWindow@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z @ 0xE0D4A (-ShouldComposeWindow@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 *     _NtUserSetBrokeredForeground@4 @ 0xE7570 (_NtUserSetBrokeredForeground@4.c)
 *     ?GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z @ 0xF4610 (-GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z.c)
 *     ?Update@CVisRgnTrackerProp@@QAEXXZ @ 0xF4974 (-Update@CVisRgnTrackerProp@@QAEXXZ.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     _FeedbackGetWindowSetting@16 @ 0x148DC2 (_FeedbackGetWindowSetting@16.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z @ 0x150504 (-xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z.c)
 *     _IsNonClientDpiScalingEnabledX@4 @ 0x1512C0 (_IsNonClientDpiScalingEnabledX@4.c)
 *     _xxxEnableNonClientDpiScaling@4 @ 0x1522FC (_xxxEnableNonClientDpiScaling@4.c)
 *     ?TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z @ 0x15F6FC (-TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z.c)
 *     _NtUserDisableImmersiveOwner@4 @ 0x160BAA (_NtUserDisableImmersiveOwner@4.c)
 *     _NtUserForceWindowToDpiForTest@8 @ 0x16182C (_NtUserForceWindowToDpiForTest@8.c)
 *     _NtUserSetBridgeWindowChild@8 @ 0x1687E3 (_NtUserSetBridgeWindowChild@8.c)
 *     _NtUserSetFallbackForeground@8 @ 0x1694A1 (_NtUserSetFallbackForeground@8.c)
 *     _NtUserSetWindowDisplayAffinity@8 @ 0x16A051 (_NtUserSetWindowDisplayAffinity@8.c)
 *     _NtUserSetWindowGroup@16 @ 0x16A0E5 (_NtUserSetWindowGroup@16.c)
 *     _NtUserUpdateDefaultDesktopThumbnail@20 @ 0x16AD14 (_NtUserUpdateDefaultDesktopThumbnail@20.c)
 *     ?_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z @ 0x16FC5F (-_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?DoesQualifyForResizeOptimization@@YGHPAU_MOVESIZEDATA@@@Z @ 0x171050 (-DoesQualifyForResizeOptimization@@YGHPAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YGHPAUtagWND@@@Z @ 0x17108E (-DoesRequireResizeLayoutSynchronization@@YGHPAUtagWND@@@Z.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     ?_LogLinkWindow@@YGXW4LogBeforeOrAfter@@PAUtagWND@@11@Z @ 0x185013 (-_LogLinkWindow@@YGXW4LogBeforeOrAfter@@PAUtagWND@@11@Z.c)
 *     _GetGestureConfigSettings@24 @ 0x1887F4 (_GetGestureConfigSettings@24.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z @ 0x19FE53 (-xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     <none>
 */

int __thiscall _IsTopLevelWindow(_DWORD *this)
{
  int v1; // esi
  int result; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // ecx

  v1 = this[14];
  result = 0;
  if ( v1 )
  {
    v3 = this[3];
    v4 = 0;
    if ( v3 )
    {
      v5 = *(_DWORD *)(v3 + 4);
      if ( v5 )
        v4 = *(_DWORD *)(v5 + 12);
    }
    if ( v1 == v4 )
      return 1;
  }
  return result;
}
