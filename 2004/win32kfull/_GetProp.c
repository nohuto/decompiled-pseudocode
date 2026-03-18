/*
 * XREFs of _GetProp @ 0x1C0022FD8
 * Callers:
 *     xxxHandleHealthyWindow @ 0x1C0003700 (xxxHandleHealthyWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0003B90 (xxxRegisterGhostWindow.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0003DF0 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C00049D8 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0021474 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0022594 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     GetOldRedirectionBitmap @ 0x1C0022A4C (GetOldRedirectionBitmap.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C0022C94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     IsWindowContentProtected @ 0x1C0022F38 (IsWindowContentProtected.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C0022F60 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0022F98 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C002475C (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0024A64 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetRedirectionFlags @ 0x1C0024D40 (GetRedirectionFlags.c)
 *     CkptRestore @ 0x1C00256D4 (CkptRestore.c)
 *     _GetWindowPlacement @ 0x1C00278AC (_GetWindowPlacement.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     _GhostWindowFromHungWindow @ 0x1C002C5D0 (_GhostWindowFromHungWindow.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C002C7DC (xxxDeferWindowPosAndCheckPoint.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002FFBC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     NtUserSetWindowBand @ 0x1C003CAD0 (NtUserSetWindowBand.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C004B090 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C004B598 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C005B2A4 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ParkIcon @ 0x1C005B578 (ParkIcon.c)
 *     GetInheritedMonitor @ 0x1C006AB48 (GetInheritedMonitor.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0071CC0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IsWindowGhosted @ 0x1C008B128 (IsWindowGhosted.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00902A0 (NtUserGetWindowCompositionAttribute.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     NtUserSetBrokeredForeground @ 0x1C00BF7B0 (NtUserSetBrokeredForeground.c)
 *     _HungWindowFromGhostWindow @ 0x1C00E79E8 (_HungWindowFromGhostWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00E82D8 (ShouldProcessHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00E8350 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     CitGetWindowInfo @ 0x1C01112C0 (CitGetWindowInfo.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C011A7A0 (NtUserGetWindowMinimizeRect.c)
 *     SetOldRedirectionBitmap @ 0x1C011F144 (SetOldRedirectionBitmap.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C0124010 (NtUserShutdownBlockReasonQuery.c)
 *     xxxArrangeIconicWindows @ 0x1C01505E0 (xxxArrangeIconicWindows.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01D0528 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D0EBC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D7EF8 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D8204 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D862C (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01E0D54 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E82E0 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     InvalidateGDIWindows @ 0x1C01E8E70 (InvalidateGDIWindows.c)
 *     UserGetHwnd @ 0x1C01E903C (UserGetHwnd.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F6980 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     NtUserGetAppImeLevel @ 0x1C01F9BA0 (NtUserGetAppImeLevel.c)
 *     NtUserIsTouchWindow @ 0x1C01FEDC0 (NtUserIsTouchWindow.c)
 *     NtUserfnDDEINIT @ 0x1C02055D0 (NtUserfnDDEINIT.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C020A838 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C020A9A8 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxFrostCrashedWindow @ 0x1C020AC04 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C020AD30 (xxxRegisterSiblingFrostWindow.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020B8E8 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020E280 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020F734 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02103CC (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C02164A8 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02176F4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C021820C (xxxPerformTargetingWithinPwnd.c)
 *     xxxTouchTargetWindow @ 0x1C0218BC8 (xxxTouchTargetWindow.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C021B358 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021B698 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021BB78 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C021C34C (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendShutdownData @ 0x1C0234298 (xxxSendShutdownData.c)
 *     xxxCompositedPaint @ 0x1C023F3F0 (xxxCompositedPaint.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C02431FC (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     GetDisplayAffinity @ 0x1C02490DC (GetDisplayAffinity.c)
 * Callees:
 *     GetSharedPropForFilteredProcesses @ 0x1C00EB840 (GetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GetProp(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 Prop; // rdi
  __int64 result; // rax
  __int64 v8; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), a2, a3);
  result = 0LL;
  if ( Prop || v4 || (*(_DWORD *)(a1 + 328) & 0x40) == 0 )
    return Prop;
  if ( (_WORD)a2 != 0xA914 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v8 + 416), &ApcState);
    Prop = GetSharedPropForFilteredProcesses(a1, a2);
    KeUnstackDetachProcess(&ApcState);
    return Prop;
  }
  return result;
}
