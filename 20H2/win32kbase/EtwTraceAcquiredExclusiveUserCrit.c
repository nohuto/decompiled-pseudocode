/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00
 * Callers:
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C001707C (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0024570 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0024DB0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00251C0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMOnPnpNotification @ 0x1C0025C30 (NtRIMOnPnpNotification.c)
 *     UserProcessThawCallout @ 0x1C0028FA4 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C002953C (UserProcessFreezeCallout.c)
 *     W32CalloutDispatch @ 0x1C00297E0 (W32CalloutDispatch.c)
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C002FAE0 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003385C (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0036394 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004CB60 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxUserProcessCallout @ 0x1C004E310 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C004EA50 (UserThreadCallout.c)
 *     NtUserGetKeyboardLayout @ 0x1C004F220 (NtUserGetKeyboardLayout.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00511E0 (UserSessionSwitchEnterCrit.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C00746A0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074B1C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ChangeAcquireResourceType @ 0x1C0076F50 (ChangeAcquireResourceType.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0084168 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C00852C0 (xxxCreateSystemThreads.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0089000 (NtUserActivateKeyboardLayout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C008DFF4 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C008ED0C (W32kEtwEnableCallback.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0098F90 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     NtMITSetInputDelegationMode @ 0x1C00A25F0 (NtMITSetInputDelegationMode.c)
 *     NtUserSetInputServiceState @ 0x1C00A5860 (NtUserSetInputServiceState.c)
 *     NtMITSetInputCallbacks @ 0x1C00A8BB0 (NtMITSetInputCallbacks.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00AE330 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
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
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$07@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C012483C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tl.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

char EtwTraceAcquiredExclusiveUserCrit()
{
  unsigned __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v1; // rdi
  LARGE_INTEGER PerformanceCounter; // r15
  LONGLONG v3; // rsi
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 *v7; // rcx
  LARGE_INTEGER v8; // r9
  LARGE_INTEGER v9; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  DWORD LowPart; // ecx
  bool v14; // zf
  int v15; // r8d
  int v16; // r9d
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  void *v26; // [rsp+90h] [rbp-70h] BYREF
  __int16 v27; // [rsp+98h] [rbp-68h]
  void *v28; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v29; // [rsp+A8h] [rbp-58h]
  signed __int64 *v30; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v31; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int64 *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  _QWORD v45[16]; // [rsp+140h] [rbp+40h] BYREF

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v1 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3 = PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 8);
    if ( (dword_1C024AE90 & 1) == 0 )
    {
      dword_1C024AE90 |= 1u;
      memset(qword_1C024AEA0, 0, 0x198uLL);
      qword_1C024B038 = 0LL;
      qword_1C024B040 = 0LL;
    }
    v4 = 1000000 * v3;
    v45[0] = 10LL;
    v45[1] = 25LL;
    v45[2] = 50LL;
    v45[3] = 100LL;
    v45[4] = 250LL;
    v45[5] = 500LL;
    v45[6] = 1000LL;
    v45[7] = 2500LL;
    v45[8] = 5000LL;
    v45[9] = 10000LL;
    v45[10] = 25000LL;
    v45[11] = 50000LL;
    v45[12] = 100000LL;
    v45[13] = 200000LL;
    v45[14] = -1LL;
    if ( gliQpcFreq.QuadPart == 10000000 )
      v5 = v4 / 0x989680;
    else
      v5 = v4 / gliQpcFreq.QuadPart;
    v6 = 0LL;
    v7 = v45;
    while ( v5 > *v7 )
    {
      v6 = (unsigned int)(v6 + 1);
      ++v7;
      if ( (unsigned int)v6 >= 0xF )
        goto LABEL_11;
    }
    _InterlockedIncrement64(&qword_1C024AEA0[v6]);
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_1C024B008, v5);
    _InterlockedIncrement64((_QWORD *)&xmmword_1C024B018 + 1);
    if ( (dword_1C024AE90 & 1) == 0 )
    {
      dword_1C024AE90 |= 1u;
      memset(qword_1C024AEA0, 0, 0x198uLL);
      qword_1C024B038 = 0LL;
      qword_1C024B040 = 0LL;
    }
    v9 = KeQueryPerformanceCounter(0LL);
    v10 = 1000000 * (v9.QuadPart - qword_1C024B038);
    if ( gliQpcFreq.QuadPart == 10000000 )
      v11 = v10 / 0x989680;
    else
      v11 = v10 / gliQpcFreq.QuadPart;
    if ( v11 > 0x6B49D200 )
    {
      if ( (unsigned int)dword_1C0243250 > 5
        && (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))tlgKeywordOn)(
                              &dword_1C0243250,
                              0x400000000000LL,
                              v10,
                              (LARGE_INTEGER)v8.QuadPart) )
      {
        v18 = 1;
        v27 = 15;
        v26 = &unk_1C024AF90;
        v29 = 15;
        v28 = &unk_1C024AF18;
        v30 = qword_1C024AEA0;
        v31 = 15;
        v19 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
          15,
          (unsigned int)&unk_1C0212706,
          v15,
          v16,
          (__int64)&v19,
          (__int64)&v30,
          (__int64)&v28,
          (__int64)&v26,
          (__int64)&v18);
      }
      memset(qword_1C024AEA0, 0, 0x168uLL);
      qword_1C024B038 = v9.QuadPart;
    }
    v12 = 1000000 * (v9.QuadPart - qword_1C024B040);
    LowPart = gliQpcFreq.LowPart;
    if ( gliQpcFreq.QuadPart == 10000000 )
      CurrentThreadWin32Thread = v12 / 0x989680;
    else
      CurrentThreadWin32Thread = v12 / gliQpcFreq.QuadPart;
    if ( CurrentThreadWin32Thread > 0xF4240 )
    {
      if ( (unsigned int)dword_1C0243250 > 5 )
      {
        LOBYTE(CurrentThreadWin32Thread) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))tlgKeywordOn)(
                                             &dword_1C0243250,
                                             0x10000000LL,
                                             v12,
                                             (LARGE_INTEGER)v8.QuadPart);
        if ( (_BYTE)CurrentThreadWin32Thread )
        {
          v20 = *((_QWORD *)&xmmword_1C024B028 + 1);
          v21 = xmmword_1C024B028;
          v22 = *((_QWORD *)&xmmword_1C024B018 + 1);
          v23 = xmmword_1C024B018;
          v24 = *((_QWORD *)&xmmword_1C024B008 + 1);
          v25 = xmmword_1C024B008;
          v43 = &v20;
          v41 = &v21;
          v39 = &v22;
          v37 = &v23;
          v35 = &v24;
          v33 = &v25;
          v44 = 8LL;
          v42 = 8LL;
          v40 = 8LL;
          v38 = 8LL;
          v36 = 8LL;
          v34 = 8LL;
          LOBYTE(CurrentThreadWin32Thread) = tlgWriteTransfer_EtwWriteTransfer(
                                               (int)&dword_1C0243250,
                                               (int)&dword_1C0212681,
                                               0,
                                               0,
                                               8u,
                                               &v32);
        }
      }
      qword_1C024B040 = v9.QuadPart;
      xmmword_1C024B008 = 0LL;
      xmmword_1C024B018 = 0LL;
      xmmword_1C024B028 = 0LL;
    }
    v14 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
    *(LARGE_INTEGER *)(v1 + 8) = PerformanceCounter;
    if ( !v14 )
    {
      LOBYTE(CurrentThreadWin32Thread) = byte_1C0243738 - 1;
      if ( (unsigned __int8)(byte_1C0243738 - 1) > 2u && (qword_1C0243720 & 0x200000010000000LL) != 0 )
      {
        LOBYTE(CurrentThreadWin32Thread) = 0;
        if ( (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728 )
        {
          LOBYTE(CurrentThreadWin32Thread) = BYTE2(Microsoft_Windows_Win32kEnableBits);
          if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                                 LowPart,
                                                 (unsigned int)&AcquiredExclusiveUserCritEvent,
                                                 v12,
                                                 v3,
                                                 0,
                                                 (char)gullUserCritAcquireToken);
        }
      }
    }
    if ( v3 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayExLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                             (_DWORD)gullUserCritAcquireToken,
                                             (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                             v12,
                                             v3,
                                             (__int64)v4 / gliQpcFreq.QuadPart,
                                             (char)gullUserCritAcquireToken);
      W32KEtwUserCritAcquireDelayExLastTelemetryQPC = PerformanceCounter.QuadPart;
    }
    *(_QWORD *)(v1 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  return CurrentThreadWin32Thread;
}
