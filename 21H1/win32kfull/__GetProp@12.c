/*
 * XREFs of __GetProp@12 @ 0x6E54C
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _GetRedirectionFlags@4 @ 0x20168 (_GetRedirectionFlags@4.c)
 *     _IsWindowContentProtected@4 @ 0x20BBA (_IsWindowContentProtected@4.c)
 *     ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E (-SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z.c)
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     _GreUpdateSpriteVisRgn@8 @ 0x363E0 (_GreUpdateSpriteVisRgn@8.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _GetOldRedirectionBitmap@4 @ 0x6E504 (_GetOldRedirectionBitmap@4.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z @ 0x6ECB4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     __HungWindowFromGhostWindow@4 @ 0x72334 (__HungWindowFromGhostWindow@4.c)
 *     _IsWindowGhosted@4 @ 0x72B34 (_IsWindowGhosted@4.c)
 *     __GhostWindowFromHungWindow@4 @ 0x72BC6 (__GhostWindowFromHungWindow@4.c)
 *     _NtUserGetWindowCompositionAttribute@8 @ 0x80AF0 (_NtUserGetWindowCompositionAttribute@8.c)
 *     _NtUserSetWindowBand@12 @ 0x9BCD0 (_NtUserSetWindowBand@12.c)
 *     _FeedbackSetWindowSetting@12 @ 0xA26BC (_FeedbackSetWindowSetting@12.c)
 *     _SetOldRedirectionBitmap@8 @ 0xA6D0A (_SetOldRedirectionBitmap@8.c)
 *     _CitGetWindowInfo@8 @ 0xA7234 (_CitGetWindowInfo@8.c)
 *     _NtUserGetWindowMinimizeRect@8 @ 0xA7B36 (_NtUserGetWindowMinimizeRect@8.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z @ 0xB2C26 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     _xxxRestoreWindowFromDeferredStateIfNeeded@8 @ 0xB4A52 (_xxxRestoreWindowFromDeferredStateIfNeeded@8.c)
 *     _ParkIcon@8 @ 0xB4C44 (_ParkIcon@8.c)
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 *     ?SetGhostProp@@YGHPAUtagWND@@PAUHWND__@@@Z @ 0xC229C (-SetGhostProp@@YGHPAUtagWND@@PAUHWND__@@@Z.c)
 *     _ShouldProcessHungWindow@4 @ 0xC25A4 (_ShouldProcessHungWindow@4.c)
 *     ?_ShouldGhostWindow@@YGHPAUtagWND@@@Z @ 0xC25FC (-_ShouldGhostWindow@@YGHPAUtagWND@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YGHPAUtagWND@@0@Z @ 0xC2790 (-_CopyWindowCheckpoint@@YGHPAUtagWND@@0@Z.c)
 *     _GetDisplayAffinity@8 @ 0xC4A42 (_GetDisplayAffinity@8.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCSwapChainProp@@@Z @ 0xCC5E2 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCSwapChainProp@@@Z.c)
 *     _NtUserShutdownBlockReasonQuery@12 @ 0xD31E4 (_NtUserShutdownBlockReasonQuery@12.c)
 *     _NtUserSetBrokeredForeground@4 @ 0xE7570 (_NtUserSetBrokeredForeground@4.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z @ 0xF457E (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z.c)
 *     ?CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z @ 0x13F438 (-CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     _SnapshotWindowRects@8 @ 0x145D44 (_SnapshotWindowRects@8.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 *     _xxxRestoreMonitorsAndWindowsRects@8 @ 0x146391 (_xxxRestoreMonitorsAndWindowsRects@8.c)
 *     _FeedbackClearWindowSetting@8 @ 0x148D82 (_FeedbackClearWindowSetting@8.c)
 *     _FeedbackGetWindowSetting@16 @ 0x148DC2 (_FeedbackGetWindowSetting@16.c)
 *     ?GetMiPWindowFlags@@YGKPAUtagWND@@@Z @ 0x14D15A (-GetMiPWindowFlags@@YGKPAUtagWND@@@Z.c)
 *     _PostMousePointerLeaveAndCleanup@8 @ 0x14E54F (_PostMousePointerLeaveAndCleanup@8.c)
 *     _FlushWEFCOMPOSITEDDCEBounds@4 @ 0x15375C (_FlushWEFCOMPOSITEDDCEBounds@4.c)
 *     _InvalidateGDIWindows@4 @ 0x1541C8 (_InvalidateGDIWindows@4.c)
 *     _UserGetHwnd@16 @ 0x1542EC (_UserGetHwnd@16.c)
 *     ?DDEImpDecRefInitWorker@@YGXPAUHWND__@@@Z @ 0x15EDF2 (-DDEImpDecRefInitWorker@@YGXPAUHWND__@@@Z.c)
 *     _NtUserGetAppImeLevel@4 @ 0x161BCA (_NtUserGetAppImeLevel@4.c)
 *     _NtUserIsTouchWindow@8 @ 0x165BA0 (_NtUserIsTouchWindow@8.c)
 *     _NtUserfnDDEINIT@28 @ 0x16B532 (_NtUserfnDDEINIT@28.c)
 *     ?SetFrostProp@@YGHPAUtagWND@@PAUHWND__@@@Z @ 0x16FC1D (-SetFrostProp@@YGHPAUtagWND@@PAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z @ 0x16FD0E (-_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxFrostCrashedWindow@8 @ 0x170644 (_xxxFrostCrashedWindow@8.c)
 *     _xxxHandleHealthyWindow@4 @ 0x170876 (_xxxHandleHealthyWindow@4.c)
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z @ 0x171112 (-GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PAU_MOVESIZEDATA@@PAJ@Z @ 0x174574 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES.c)
 *     ?xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1750AE (-xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@.c)
 *     ?_TTWindowPenalty@@YGIPAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x17A562 (-_TTWindowPenalty@@YGIPAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 *     _xxxPerformTargetingWithinPwnd@12 @ 0x17C0BC (_xxxPerformTargetingWithinPwnd@12.c)
 *     _xxxTouchTargetWindow@28 @ 0x17C92C (_xxxTouchTargetWindow@28.c)
 *     ?AddConvProp@@YGHPAUtagWND@@0KPAUtagDDECONV@@1@Z @ 0x17E7D5 (-AddConvProp@@YGHPAUtagWND@@0KPAUtagDDECONV@@1@Z.c)
 *     ?FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z @ 0x17E9C1 (-FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z.c)
 *     ?UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z @ 0x17ECA6 (-UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YGXPAUtagWND@@@Z @ 0x17F222 (-xxxCleanupDdeConv@@YGXPAUtagWND@@@Z.c)
 *     _xxxSendShutdownData@8 @ 0x194F33 (_xxxSendShutdownData@8.c)
 *     _xxxCompositedPaint@4 @ 0x19D911 (_xxxCompositedPaint@4.c)
 *     ?xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z @ 0x1A0652 (-xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 * Callees:
 *     _GetSharedPropForFilteredProcesses@8 @ 0x83DD4 (_GetSharedPropForFilteredProcesses@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall _GetProp(int a1, int a2, int a3)
{
  __int16 v4; // di
  int Prop; // esi
  struct _KAPC_STATE ApcState; // [esp+14h] [ebp-20h] BYREF

  v4 = a2;
  Prop = RealGetProp(*(_DWORD *)(a1 + 80), a2, a3);
  if ( !Prop && !a3 && (*(_BYTE *)(a1 + 200) & 0x40) != 0 )
  {
    if ( v4 == -22252 )
    {
      return 0;
    }
    else
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(*(_DWORD *)(a1 + 8) + 232), &ApcState);
      Prop = GetSharedPropForFilteredProcesses(a1, a2);
      KeUnstackDetachProcess(&ApcState);
    }
  }
  return Prop;
}
