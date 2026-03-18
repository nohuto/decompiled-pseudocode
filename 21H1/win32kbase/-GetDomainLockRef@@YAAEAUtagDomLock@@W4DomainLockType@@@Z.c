/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930
 * Callers:
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C000A878 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C000B814 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C000BB40 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C000BE2C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     xxxCreateSystemThreads @ 0x1C000CC90 (xxxCreateSystemThreads.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C000E750 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C000EA8C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     _HMObjectFromHandle @ 0x1C000F2B0 (_HMObjectFromHandle.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C000F894 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     ThreadUnlockWorker1 @ 0x1C000FE20 (ThreadUnlockWorker1.c)
 *     HMMarkObjectDestroy @ 0x1C0010180 (HMMarkObjectDestroy.c)
 *     W32kEtwEnableCallback @ 0x1C00123AC (W32kEtwEnableCallback.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0014D10 (-UserInitialize@@YAJXZ.c)
 *     ValidateHmonitorNoRip @ 0x1C0016AE0 (ValidateHmonitorNoRip.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C0029534 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     HMChangeOwnerThread @ 0x1C002D040 (HMChangeOwnerThread.c)
 *     NtMITSetInputDelegationMode @ 0x1C0031550 (NtMITSetInputDelegationMode.c)
 *     SetInputDelegationModeImpl @ 0x1C0031834 (SetInputDelegationModeImpl.c)
 *     ChangeAcquireResourceType @ 0x1C0033C90 (ChangeAcquireResourceType.c)
 *     ClearKeyboardToggleStates @ 0x1C00343E0 (ClearKeyboardToggleStates.c)
 *     InitSystemThread @ 0x1C00349E0 (InitSystemThread.c)
 *     NtUserSetInputServiceState @ 0x1C00351C0 (NtUserSetInputServiceState.c)
 *     NtMITSetInputCallbacks @ 0x1C003A6C0 (NtMITSetInputCallbacks.c)
 *     NtUserChangeDisplaySettings @ 0x1C003E7B0 (NtUserChangeDisplaySettings.c)
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C003F850 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C0040920 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtMITUpdateInputGlobals @ 0x1C00434E0 (NtMITUpdateInputGlobals.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0043B90 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     UserEnterUserCritSec @ 0x1C0044010 (UserEnterUserCritSec.c)
 *     NtUserEnableMouseInPointer @ 0x1C00444F0 (NtUserEnableMouseInPointer.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0044D30 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C0045F70 (NtUserRegisterTouchPadCapable.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0047760 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     NtUserRegisterManipulationThread @ 0x1C004F530 (NtUserRegisterManipulationThread.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0051DE0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00520FC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00523F4 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     NtUserRegisterSessionPort @ 0x1C00526F0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0052B6C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0058480 (NtUserActivateKeyboardLayout.c)
 *     HMUnlockObjectWorker @ 0x1C005ACF0 (HMUnlockObjectWorker.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserProcessThawCallout @ 0x1C005CC4C (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C005D71C (UserProcessFreezeCallout.c)
 *     W32CalloutDispatch @ 0x1C005D9C0 (W32CalloutDispatch.c)
 *     UserPowerInfoCallout @ 0x1C005E654 (UserPowerInfoCallout.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C00639EC (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0065004 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0066480 (UserSessionSwitchEnterCrit.c)
 *     xxxUserProcessCallout @ 0x1C0066B70 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C00672B0 (UserThreadCallout.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0067980 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0067E5C (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 *     HMValidateSharedHandle @ 0x1C006DE88 (HMValidateSharedHandle.c)
 *     NtUserGetKeyboardLayout @ 0x1C006EE80 (NtUserGetKeyboardLayout.c)
 *     ValidateHandleSecure @ 0x1C0070550 (ValidateHandleSecure.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0070614 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMFreeObject @ 0x1C0070730 (HMFreeObject.c)
 *     HMAllocObject @ 0x1C0070A30 (HMAllocObject.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0070FB0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C00710D0 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C0071190 (DestroyThreadsObjects.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMAssignmentUnlock @ 0x1C0073400 (HMAssignmentUnlock.c)
 *     HMUnlockObjectInternal @ 0x1C0073480 (HMUnlockObjectInternal.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00744E0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     ThreadUnlock1 @ 0x1C00828E0 (ThreadUnlock1.c)
 *     HMLockObject @ 0x1C0084240 (HMLockObject.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     HMPkheFromPhe @ 0x1C00848F0 (HMPkheFromPhe.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C00862E0 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     _HMPheFromObject @ 0x1C0086350 (_HMPheFromObject.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C009D130 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C009D9D0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C009DDE0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMOnPnpNotification @ 0x1C009EA60 (NtRIMOnPnpNotification.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00B26B0 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8320 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8888 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00C95B0 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00C98F0 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00C9E10 (xxxSendWinlogonPowerMessage.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D0DC0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1160 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0121270 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0121F10 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C01220B0 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0122C00 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C0125228 (--0-$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0125714 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0125DDC (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0126740 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C0127000 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 *     UserProcessTimerDelayCallout @ 0x1C01294E4 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01299C4 (UserProcessTimerStatisticsCallout.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C012AD20 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C012CC70 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C012D300 (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0133FA0 (NtMITAccessibilityTimerNotification.c)
 *     NtMITDeactivateInputProcessing @ 0x1C01344B0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C01349B0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0134ED0 (NtMITEnableMouseIntercept.c)
 *     NtMITMinuserWindowCreated @ 0x1C0135630 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C0135AE0 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C0136F30 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C0137460 (NtSetCursorInputSpace.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C0138150 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C0138A20 (NtUserEnableTouchPad.c)
 *     NtUserInjectGenericHidInput @ 0x1C013B390 (NtUserInjectGenericHidInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C013D420 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C013E720 (NtUserSetMouseInputRateLimitingTimer.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C013EDF0 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C013F300 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C01409F0 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C0140EA0 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C0143E44 (UserFindBaseWindowHandle.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C015C7B0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C015CE90 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C015D710 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C018A190 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C018A700 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C018AC70 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C01A5108 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01A5F10 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A6D30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01AAB3C (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01AC670 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01ACBB0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01AD348 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01ADD18 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01B3480 (ProcessKeyboardInputWorker.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BA440 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BAB30 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB7D0 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01BBF00 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01C209C (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C01D2CD0 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01FB684 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     Win32UserInitialize @ 0x1C0299728 (Win32UserInitialize.c)
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall GetDomainLockRef(__int64 a1)
{
  switch ( (_DWORD)a1 )
  {
    case 0:
      return &gDomainProcessInfoLock;
    case 1:
      return &gDomainThreadInfoLock;
    case 2:
      return &gDomainDesktopLock;
    case 4:
      return &gDomainPostLock;
    case 3:
      return &gDomainSmsLock;
    case 5:
      return &gDomainQueueLock;
    case 8:
      return &gDomainHookLock;
    case 9:
      return &gDomainWinEventLock;
    case 0xB:
      return &gDomainClientLibLock;
    case 0xA:
      return &gDomainWindowLock;
    case 0xD:
      return &gDomainPowerTransitionsStateLock;
    case 0xC:
      return &gDomainTlLock;
    case 0xE:
      return &gDomainHandleManagerLock;
    case 0xF:
      return &gDomainRawInputLock;
    case 0x10:
      return &gDomainAsyncKeyStateLock;
    case 0x11:
      return &gDomainJobLock;
    case 6:
      return &gDomainForegroundLock;
    case 7:
      return &gDomainActiveLock;
    case 0x12:
      return &gDomainInputDelegationLock;
    case 0x13:
      return &gDomainQueueMgmtLock;
    case 0x14:
      return &gDomainThreadRundownLock;
    case 0x15:
      return &gDomainEtwLock;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return &gDomainDummyLock;
}
