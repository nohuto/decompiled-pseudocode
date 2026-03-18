/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0
 * Callers:
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C000A878 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C000B814 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C000BB40 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C000CC90 (xxxCreateSystemThreads.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C000E750 (NtUserSetProcessDpiAwarenessContext.c)
 *     W32kEtwEnableCallback @ 0x1C00123AC (W32kEtwEnableCallback.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0014D10 (-UserInitialize@@YAJXZ.c)
 *     NtMITSetInputDelegationMode @ 0x1C0031550 (NtMITSetInputDelegationMode.c)
 *     ChangeAcquireResourceType @ 0x1C0033C90 (ChangeAcquireResourceType.c)
 *     InitSystemThread @ 0x1C00349E0 (InitSystemThread.c)
 *     NtUserSetInputServiceState @ 0x1C00351C0 (NtUserSetInputServiceState.c)
 *     NtMITSetInputCallbacks @ 0x1C003A6C0 (NtMITSetInputCallbacks.c)
 *     NtUserChangeDisplaySettings @ 0x1C003E7B0 (NtUserChangeDisplaySettings.c)
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
 *     NtUserGetKeyboardLayout @ 0x1C006EE80 (NtUserGetKeyboardLayout.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
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
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C01220B0 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0122C00 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0125714 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0125DDC (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0126740 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C0127000 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 *     UserProcessTimerDelayCallout @ 0x1C01294E4 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01299C4 (UserProcessTimerStatisticsCallout.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C012AD20 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C012CC70 (-EtwCaptureStateCallback@@YAXXZ.c)
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
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$07@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C012CB7C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tl.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
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
    if ( (dword_1C0252E98 & 1) == 0 )
    {
      dword_1C0252E98 |= 1u;
      memset(qword_1C0252EA0, 0, 0x198uLL);
      qword_1C0253038 = 0LL;
      qword_1C0253040 = 0LL;
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
    _InterlockedIncrement64(&qword_1C0252EA0[v7]);
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_1C0253008, v6);
    _InterlockedIncrement64((_QWORD *)&xmmword_1C0253018 + 1);
    if ( (dword_1C0252E98 & 1) == 0 )
    {
      dword_1C0252E98 |= 1u;
      memset(qword_1C0252EA0, 0, 0x198uLL);
      qword_1C0253038 = 0LL;
      qword_1C0253040 = 0LL;
    }
    v9 = KeQueryPerformanceCounter(0LL);
    v10 = 1000000 * (v9.QuadPart - qword_1C0253038);
    if ( gliQpcFreq.QuadPart == 10000000 )
      v11 = v10 / 0x989680;
    else
      v11 = v10 / gliQpcFreq.QuadPart;
    if ( v11 > 0x6B49D200 )
    {
      if ( (unsigned int)dword_1C024B250 > 5 && tlgKeywordOn((__int64)&dword_1C024B250, 0x400000000000LL) )
      {
        v18 = 1;
        v27 = 15;
        v26 = &unk_1C0252F90;
        v29 = 15;
        v28 = &unk_1C0252F18;
        v30 = qword_1C0252EA0;
        v31 = 15;
        v19 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
          15,
          (unsigned int)&unk_1C021A276,
          v15,
          v16,
          (__int64)&v19,
          (__int64)&v30,
          (__int64)&v28,
          (__int64)&v26,
          (__int64)&v18);
      }
      memset(qword_1C0252EA0, 0, 0x168uLL);
      qword_1C0253038 = v9.QuadPart;
    }
    v12 = 1000000 * (v9.QuadPart - qword_1C0253040);
    LowPart = gliQpcFreq.LowPart;
    if ( gliQpcFreq.QuadPart == 10000000 )
      CurrentThreadWin32Thread = v12 / 0x989680;
    else
      CurrentThreadWin32Thread = v12 / gliQpcFreq.QuadPart;
    if ( CurrentThreadWin32Thread > 0xF4240 )
    {
      if ( (unsigned int)dword_1C024B250 > 5 )
      {
        LOBYTE(CurrentThreadWin32Thread) = tlgKeywordOn((__int64)&dword_1C024B250, 0x10000000LL);
        if ( (_BYTE)CurrentThreadWin32Thread )
        {
          v20 = *((_QWORD *)&xmmword_1C0253028 + 1);
          v21 = xmmword_1C0253028;
          v22 = *((_QWORD *)&xmmword_1C0253018 + 1);
          v23 = xmmword_1C0253018;
          v24 = *((_QWORD *)&xmmword_1C0253008 + 1);
          v25 = xmmword_1C0253008;
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
                                               (__int64)&dword_1C024B250,
                                               (unsigned __int8 *)dword_1C021A1F1,
                                               0LL,
                                               0LL,
                                               8u,
                                               &v32);
        }
      }
      qword_1C0253040 = v9.QuadPart;
      xmmword_1C0253008 = 0LL;
      xmmword_1C0253018 = 0LL;
      xmmword_1C0253028 = 0LL;
    }
    v14 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
    *(LARGE_INTEGER *)(v2 + 8) = PerformanceCounter;
    if ( !v14 )
    {
      LOBYTE(CurrentThreadWin32Thread) = byte_1C024B738 - 1;
      if ( (unsigned __int8)(byte_1C024B738 - 1) > 2u && (qword_1C024B720 & 0x200000010000000LL) != 0 )
      {
        LOBYTE(CurrentThreadWin32Thread) = 0;
        if ( (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728 )
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
