/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40
 * Callers:
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C001707C (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     HMUnlockObjectWorker @ 0x1C0021290 (HMUnlockObjectWorker.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0024570 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0024DB0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00251C0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMOnPnpNotification @ 0x1C0025C30 (NtRIMOnPnpNotification.c)
 *     UserProcessThawCallout @ 0x1C0028FA4 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C002953C (UserProcessFreezeCallout.c)
 *     W32CalloutDispatch @ 0x1C00297E0 (W32CalloutDispatch.c)
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C002FAE0 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C002FE1C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     HMValidateSharedHandle @ 0x1C0032848 (HMValidateSharedHandle.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003385C (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0036394 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     ThreadUnlock1 @ 0x1C0044210 (ThreadUnlock1.c)
 *     HMLockObject @ 0x1C00445C0 (HMLockObject.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     HMPkheFromPhe @ 0x1C0045F00 (HMPkheFromPhe.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C00470F0 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     _HMPheFromObject @ 0x1C0047160 (_HMPheFromObject.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004CB60 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C004D618 (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     xxxUserProcessCallout @ 0x1C004E310 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C004EA50 (UserThreadCallout.c)
 *     NtUserGetKeyboardLayout @ 0x1C004F220 (NtUserGetKeyboardLayout.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00511E0 (UserSessionSwitchEnterCrit.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     HMUnlockObjectInternal @ 0x1C0054B50 (HMUnlockObjectInternal.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ValidateHandleSecure @ 0x1C00563A0 (ValidateHandleSecure.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0056464 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMAllocObject @ 0x1C0056580 (HMAllocObject.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0056B00 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C0056C20 (MarkThreadsObjects.c)
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C006B6D4 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C00746A0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074B1C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0075900 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0076B10 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C0076DF4 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     ChangeAcquireResourceType @ 0x1C0076F50 (ChangeAcquireResourceType.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0084168 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008445C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     xxxCreateSystemThreads @ 0x1C00852C0 (xxxCreateSystemThreads.c)
 *     _HMObjectFromHandle @ 0x1C00870D0 (_HMObjectFromHandle.c)
 *     ThreadUnlockWorker1 @ 0x1C00873E0 (ThreadUnlockWorker1.c)
 *     HMMarkObjectDestroy @ 0x1C00874E0 (HMMarkObjectDestroy.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0089000 (NtUserActivateKeyboardLayout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C008DFF4 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C008ED0C (W32kEtwEnableCallback.c)
 *     ValidateHmonitorNoRip @ 0x1C0090040 (ValidateHmonitorNoRip.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0098F90 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     NtMITSetInputDelegationMode @ 0x1C00A25F0 (NtMITSetInputDelegationMode.c)
 *     SetInputDelegationModeImpl @ 0x1C00A28D4 (SetInputDelegationModeImpl.c)
 *     ClearKeyboardToggleStates @ 0x1C00A4B60 (ClearKeyboardToggleStates.c)
 *     NtUserSetInputServiceState @ 0x1C00A5860 (NtUserSetInputServiceState.c)
 *     NtMITSetInputCallbacks @ 0x1C00A8BB0 (NtMITSetInputCallbacks.c)
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C00AD530 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00AE330 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     HMChangeOwnerThread @ 0x1C00B07F0 (HMChangeOwnerThread.c)
 *     NtMITUpdateInputGlobals @ 0x1C00B16A0 (NtMITUpdateInputGlobals.c)
 *     UserEnterUserCritSec @ 0x1C00B2160 (UserEnterUserCritSec.c)
 *     NtUserEnableMouseInPointer @ 0x1C00B2580 (NtUserEnableMouseInPointer.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00B2AA0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C00B33E0 (NtUserChangeDisplaySettings.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00B4030 (NtUserRegisterTouchPadCapable.c)
 *     InitSystemThread @ 0x1C00B8540 (InitSystemThread.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C00B9240 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00BA148 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00BB4C0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     NtUserRegisterManipulationThread @ 0x1C00BD670 (NtUserRegisterManipulationThread.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C00BF11C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00BFC60 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C78B0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00C85E0 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00C8920 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00C8E40 (xxxSendWinlogonPowerMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C9210 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1640 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0119710 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C01198B0 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C011A400 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C011D434 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011DAFC (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E460 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C011ECD0 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 *     UserProcessTimerDelayCallout @ 0x1C01211B4 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C0121694 (UserProcessTimerStatisticsCallout.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C01229E0 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0124930 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C0124FC0 (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C012BC60 (NtMITAccessibilityTimerNotification.c)
 *     NtMITDeactivateInputProcessing @ 0x1C012C170 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C012C670 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C012CB90 (NtMITEnableMouseIntercept.c)
 *     NtMITMinuserWindowCreated @ 0x1C012D2F0 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C012D7A0 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C012EBF0 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C012F120 (NtSetCursorInputSpace.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C012FE10 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C01306E0 (NtUserEnableTouchPad.c)
 *     NtUserInjectGenericHidInput @ 0x1C01333A0 (NtUserInjectGenericHidInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0135430 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C0136730 (NtUserSetMouseInputRateLimitingTimer.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C0136E00 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C0137310 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0138A00 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C0138EB0 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C013B7A4 (UserFindBaseWindowHandle.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0153F00 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C01545E0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C0154E60 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C0181F50 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01824C0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0182A30 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C019CEA8 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C019DE10 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C019EC30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A2A5C (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A4590 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A4AD0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01A5268 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01A5C38 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01AB3A0 (ProcessKeyboardInputWorker.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2370 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2A60 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3700 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B3E30 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01B9FCC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C01CA9D0 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01F4324 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     Win32UserInitialize @ 0x1C0291A10 (Win32UserInitialize.c)
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall GetDomainLockRef(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  return &gDomainDummyLock;
}
