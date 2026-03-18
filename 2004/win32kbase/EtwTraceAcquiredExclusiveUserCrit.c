/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C000D130 (NtUserChangeDisplaySettings.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0018800 (NtUserActivateKeyboardLayout.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0020350 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0020A78 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C0021BD0 (xxxCreateSystemThreads.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C002C58C (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C002D2AC (W32kEtwEnableCallback.c)
 *     InitSystemThread @ 0x1C0030EE0 (InitSystemThread.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0033240 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0033CC0 (UserSessionSwitchEnterCrit.c)
 *     NtMITSetInputDelegationMode @ 0x1C0040110 (NtMITSetInputDelegationMode.c)
 *     NtUserSetInputServiceState @ 0x1C00446F0 (NtUserSetInputServiceState.c)
 *     NtMITSetInputCallbacks @ 0x1C0047610 (NtMITSetInputCallbacks.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C004D490 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtRIMOnPnpNotification @ 0x1C0050460 (NtRIMOnPnpNotification.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0051650 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     UserEnterUserCritSec @ 0x1C0051AD0 (UserEnterUserCritSec.c)
 *     NtUserEnableMouseInPointer @ 0x1C0051EF0 (NtUserEnableMouseInPointer.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00528A0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C0053BB0 (NtUserRegisterTouchPadCapable.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0054F60 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     NtUserRegisterManipulationThread @ 0x1C005D0A0 (NtUserRegisterManipulationThread.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C005EDEC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C005F940 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C005FCA0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006011C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtMITUpdateInputGlobals @ 0x1C0060BC0 (NtMITUpdateInputGlobals.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00630F0 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00633E8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserProcessThawCallout @ 0x1C0065504 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C0065938 (UserProcessFreezeCallout.c)
 *     W32CalloutDispatch @ 0x1C0065BE0 (W32CalloutDispatch.c)
 *     UserPowerInfoCallout @ 0x1C0066874 (UserPowerInfoCallout.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C006E99C (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00709D4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     xxxUserProcessCallout @ 0x1C0072150 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0072890 (UserThreadCallout.c)
 *     NtUserGetKeyboardLayout @ 0x1C0076BE0 (NtUserGetKeyboardLayout.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00927E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ChangeAcquireResourceType @ 0x1C00AD590 (ChangeAcquireResourceType.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C00AF930 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00AFD40 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C00BC78C (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8950 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8F0C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00C9C30 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00C9F70 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00CA490 (xxxSendWinlogonPowerMessage.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D16E0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1A80 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C011BBF0 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C011C740 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C011F784 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011FE4C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01207B0 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C0121020 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 *     UserProcessTimerDelayCallout @ 0x1C0123504 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01239E4 (UserProcessTimerStatisticsCallout.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0124D30 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0126C80 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C012DFB0 (NtMITAccessibilityTimerNotification.c)
 *     NtMITDeactivateInputProcessing @ 0x1C012E4C0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C012E9C0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C012EEE0 (NtMITEnableMouseIntercept.c)
 *     NtMITMinuserWindowCreated @ 0x1C012F640 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C012FAF0 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C0130F40 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C0131470 (NtSetCursorInputSpace.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C0132160 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C0132A30 (NtUserEnableTouchPad.c)
 *     NtUserInjectGenericHidInput @ 0x1C01356F0 (NtUserInjectGenericHidInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0137780 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C0138A80 (NtUserSetMouseInputRateLimitingTimer.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C0139150 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C0139660 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C013AD50 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C013B200 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C013DAF4 (UserFindBaseWindowHandle.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0156460 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C0156B40 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C01573C0 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C0184490 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0184A00 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0184F70 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C019F3A8 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01A01B0 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A0FD0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A4DDC (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A6910 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A6E50 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01A75E8 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01AD720 (ProcessKeyboardInputWorker.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B46E0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B4DD0 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B5A70 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B61A0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BC33C (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C01CCD50 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01F5C54 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     Win32UserInitialize @ 0x1C0293AF8 (Win32UserInitialize.c)
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$07@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0126B8C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tl.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceAcquiredExclusiveUserCrit(__int64 a1)
{
  unsigned __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v2; // rdi
  LARGE_INTEGER PerformanceCounter; // r15
  LONGLONG v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 *v8; // rcx
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

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
  v2 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = PerformanceCounter.QuadPart - *(_QWORD *)(v2 + 8);
    if ( (dword_1C024CE88 & 1) == 0 )
    {
      dword_1C024CE88 |= 1u;
      memset(qword_1C024CE90, 0, 0x198uLL);
      qword_1C024D028 = 0LL;
      qword_1C024D030 = 0LL;
    }
    v5 = 1000000 * v4;
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
      v6 = v5 / 0x989680;
    else
      v6 = v5 / gliQpcFreq.QuadPart;
    v7 = 0LL;
    v8 = v45;
    while ( v6 > *v8 )
    {
      v7 = (unsigned int)(v7 + 1);
      ++v8;
      if ( (unsigned int)v7 >= 0xF )
        goto LABEL_11;
    }
    _InterlockedIncrement64(&qword_1C024CE90[v7]);
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_1C024CFF8, v6);
    _InterlockedIncrement64((_QWORD *)&xmmword_1C024D008 + 1);
    if ( (dword_1C024CE88 & 1) == 0 )
    {
      dword_1C024CE88 |= 1u;
      memset(qword_1C024CE90, 0, 0x198uLL);
      qword_1C024D028 = 0LL;
      qword_1C024D030 = 0LL;
    }
    v9 = KeQueryPerformanceCounter(0LL);
    v10 = 1000000 * (v9.QuadPart - qword_1C024D028);
    if ( gliQpcFreq.QuadPart == 10000000 )
      v11 = v10 / 0x989680;
    else
      v11 = v10 / gliQpcFreq.QuadPart;
    if ( v11 > 0x6B49D200 )
    {
      if ( (unsigned int)dword_1C0245250 > 5 && tlgKeywordOn((__int64)&dword_1C0245250, 0x400000000000LL) )
      {
        v18 = 1;
        v27 = 15;
        v26 = &unk_1C024CF80;
        v29 = 15;
        v28 = &unk_1C024CF08;
        v30 = qword_1C024CE90;
        v31 = 15;
        v19 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
          15,
          (unsigned int)&unk_1C0214706,
          v15,
          v16,
          (__int64)&v19,
          (__int64)&v30,
          (__int64)&v28,
          (__int64)&v26,
          (__int64)&v18);
      }
      memset(qword_1C024CE90, 0, 0x168uLL);
      qword_1C024D028 = v9.QuadPart;
    }
    v12 = 1000000 * (v9.QuadPart - qword_1C024D030);
    LowPart = gliQpcFreq.LowPart;
    if ( gliQpcFreq.QuadPart == 10000000 )
      CurrentThreadWin32Thread = v12 / 0x989680;
    else
      CurrentThreadWin32Thread = v12 / gliQpcFreq.QuadPart;
    if ( CurrentThreadWin32Thread > 0xF4240 )
    {
      if ( (unsigned int)dword_1C0245250 > 5 )
      {
        LOBYTE(CurrentThreadWin32Thread) = tlgKeywordOn((__int64)&dword_1C0245250, 0x10000000LL);
        if ( (_BYTE)CurrentThreadWin32Thread )
        {
          v20 = *((_QWORD *)&xmmword_1C024D018 + 1);
          v21 = xmmword_1C024D018;
          v22 = *((_QWORD *)&xmmword_1C024D008 + 1);
          v23 = xmmword_1C024D008;
          v24 = *((_QWORD *)&xmmword_1C024CFF8 + 1);
          v25 = xmmword_1C024CFF8;
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
                                               (__int64)&dword_1C0245250,
                                               (unsigned __int8 *)dword_1C0214681,
                                               0LL,
                                               0LL,
                                               8u,
                                               &v32);
        }
      }
      qword_1C024D030 = v9.QuadPart;
      xmmword_1C024CFF8 = 0LL;
      xmmword_1C024D008 = 0LL;
      xmmword_1C024D018 = 0LL;
    }
    v14 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
    *(LARGE_INTEGER *)(v2 + 8) = PerformanceCounter;
    if ( !v14 )
    {
      LOBYTE(CurrentThreadWin32Thread) = byte_1C0245748 - 1;
      if ( (unsigned __int8)(byte_1C0245748 - 1) > 2u && (qword_1C0245730 & 0x200000010000000LL) != 0 )
      {
        LOBYTE(CurrentThreadWin32Thread) = 0;
        if ( (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738 )
        {
          LOBYTE(CurrentThreadWin32Thread) = BYTE2(Microsoft_Windows_Win32kEnableBits);
          if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                                 LowPart,
                                                 (unsigned int)&AcquiredExclusiveUserCritEvent,
                                                 v12,
                                                 v4,
                                                 0,
                                                 (char)gullUserCritAcquireToken);
        }
      }
    }
    if ( v4 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayExLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                             (_DWORD)gullUserCritAcquireToken,
                                             (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                             v12,
                                             v4,
                                             (__int64)v5 / gliQpcFreq.QuadPart,
                                             (char)gullUserCritAcquireToken);
      W32KEtwUserCritAcquireDelayExLastTelemetryQPC = PerformanceCounter.QuadPart;
    }
    *(_QWORD *)(v2 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  return CurrentThreadWin32Thread;
}
