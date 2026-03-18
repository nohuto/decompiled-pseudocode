/*
 * XREFs of _IsTopLevelWindow @ 0x1C006EA50
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C000E8BC (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     InitializeDPIINFO @ 0x1C001FD54 (InitializeDPIINFO.c)
 *     FVisCountable @ 0x1C0020A90 (FVisCountable.c)
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00252C0 (NtUserUpdateLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C002CF34 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00328D0 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C004B038 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00510B4 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0051198 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C0051470 (UpdateMonitorForWindowAndChildren.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00516F4 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C005B2A4 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006A1D8 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C006E71C (IsTopLevelOrLayeredChildWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C006E9F0 (ShouldUseLogPixelsForWindowMetrics.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0071CC0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     DefSetText @ 0x1C00ADA20 (DefSetText.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     NtUserSetBrokeredForeground @ 0x1C00BF7B0 (NtUserSetBrokeredForeground.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00E8350 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0104724 (IsWindowBroadcastingDpiToChildrenX.c)
 *     SelectWindowRgn @ 0x1C0108600 (SelectWindowRgn.c)
 *     ShouldHaveShadow @ 0x1C011225C (ShouldHaveShadow.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0119500 (NtUserSetWindowCompositionTransition.c)
 *     NtUserBeginLayoutUpdate @ 0x1C0125960 (NtUserBeginLayoutUpdate.c)
 *     FeedbackGetWindowSetting @ 0x1C01DB630 (FeedbackGetWindowSetting.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E4E3C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01E5E04 (IsNonClientDpiScalingEnabledX.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01E690C (xxxEnableNonClientDpiScaling.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F7474 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01F8640 (NtUserDisableImmersiveOwner.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C01F9650 (NtUserForceWindowToDpiForTest.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1C01FD340 (NtUserGetWindowDisplayAffinity.c)
 *     NtUserSetBridgeWindowChild @ 0x1C02020A0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C0202980 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowDisplayAffinity @ 0x1C0203960 (NtUserSetWindowDisplayAffinity.c)
 *     NtUserSetWindowGroup @ 0x1C0203A40 (NtUserSetWindowGroup.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C0204AD0 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C020A8AC (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C020B784 (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C020B7E4 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C02239BC (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     GetGestureConfigSettings @ 0x1C0228028 (GetGestureConfigSettings.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0242B40 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 *     GetDisplayAffinity @ 0x1C02490DC (GetDisplayAffinity.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 104);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 24);
    }
    if ( v1 == v4 )
      return 1LL;
  }
  return result;
}
