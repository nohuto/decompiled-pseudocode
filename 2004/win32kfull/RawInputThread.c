/*
 * XREFs of RawInputThread @ 0x1C00C62E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C0008840 (xxxRegisterForDeviceClassNotifications.c)
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 *     TransitionCursorSuppressionState @ 0x1C004A770 (TransitionCursorSuppressionState.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxRemoveQueueCompletion @ 0x1C00BE390 (xxxRemoveQueueCompletion.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00C02E4 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00C3924 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     TimersProc @ 0x1C00C6DF0 (TimersProc.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C00C7278 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     xxxClientEnableMMCSS @ 0x1C00C72BC (xxxClientEnableMMCSS.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00C7554 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C00C7648 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C00C793C (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C00C79BC (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     CheckPointerDeviceConfiguration @ 0x1C00C7A1C (CheckPointerDeviceConfiguration.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C00C7AF4 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     RitTakeOver @ 0x1C00C7BCC (RitTakeOver.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C00C7C34 (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C00C7C9C (-_GetDigitizerFlags@@YAKXZ.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C00C7DC8 (CreatePointerDeviceProcessEvents.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C00C824C (-SetPenHotKeys@@YAXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C00C8328 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C00C837C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C00C8644 (SetDebugHotKeys.c)
 *     InitKeyboard @ 0x1C00C86E0 (InitKeyboard.c)
 *     SetRITTimer @ 0x1C010A3A0 (SetRITTimer.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0127AA4 (--0InkProcessor@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D2934 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D5148 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01D51CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01D9438 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     UserSetTimer @ 0x1C024926C (UserSetTimer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C025266C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0252724 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RawInputThread(__int64 *a1)
{
  __int64 RemoteContext; // r14
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  InkProcessor *v6; // rax
  InkProcessor *v7; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTIMER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KEVENT *v23; // r8
  ULONG v24; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v26; // rcx
  NTSTATUS v27; // ebx
  unsigned int v28; // ebx
  bool v29; // zf
  CBaseInput **v30; // rcx
  char DigitizerFlags; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char v35; // bl
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  unsigned int v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct InteractiveControlManager *v45; // rbx
  int v46; // r8d
  int v47; // r9d
  int Settings; // eax
  int v49; // ebx
  int v50; // r9d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // edx
  struct _KTIMER *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  const char *v62; // rax
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // edx
  PVOID *Object; // [rsp+28h] [rbp-E0h]
  LegacyInputDispatcher *v68; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v69[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  int v71; // [rsp+60h] [rbp-A8h] BYREF
  int v72; // [rsp+64h] [rbp-A4h] BYREF
  int v73; // [rsp+68h] [rbp-A0h] BYREF
  int v74; // [rsp+6Ch] [rbp-9Ch] BYREF
  PVOID v75; // [rsp+70h] [rbp-98h] BYREF
  PRKEVENT v76; // [rsp+78h] [rbp-90h]
  PVOID v77; // [rsp+80h] [rbp-88h] BYREF
  __int64 v78; // [rsp+88h] [rbp-80h] BYREF
  __int64 v79; // [rsp+90h] [rbp-78h] BYREF
  const char *v80; // [rsp+98h] [rbp-70h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v84; // [rsp+B8h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  __int128 SystemInformation; // [rsp+D8h] [rbp-30h] BYREF
  int v87; // [rsp+E8h] [rbp-20h]
  int v88; // [rsp+ECh] [rbp-1Ch]
  struct _UNICODE_STRING v89; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v90[10]; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+158h] [rbp+50h] BYREF
  int *v92; // [rsp+178h] [rbp+70h]
  __int64 v93; // [rsp+180h] [rbp+78h]

  DestinationString = 0LL;
  Handle = 0LL;
  v76 = 0LL;
  v88 = 0;
  v68 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset(v90, 0, sizeof(v90));
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v3 = *a1;
  *(_QWORD *)&v84 = PsGetThreadProcessId(KeGetCurrentThread());
  v87 = 16;
  *((_QWORD *)&v84 + 1) = PsGetThreadId(KeGetCurrentThread());
  SystemInformation = v84;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(0LL, 1LL);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1972LL) = 0;
  *(_DWORD *)(gpsi + 2068LL) = 0;
  *(_DWORD *)(gpsi + 2196LL) = 0;
  UserSessionSwitchLeaveCrit(gpsi, v4, v5);
  if ( !InkProcessor::s_pInstance )
  {
    v6 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
    v7 = v6 ? InkProcessor::InkProcessor(v6) : 0LL;
    InkProcessor::s_pInstance = v7;
    if ( !v7 && (unsigned int)dword_1C032B288 > 2 )
    {
      v71 = -1073741801;
      v92 = &v71;
      v93 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032B288, (int)&dword_1C02F13FC, 0, 0, 3u, &v91);
    }
  }
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_145;
  v90[6] = CRitTimerScanWakeSystem::ritTimerScanWakeEvent;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v11 = *(_QWORD *)(GetDispInfo(v10, v9) + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 36LL) / 2;
  v12 = (unsigned int)(*(int *)(*(_QWORD *)(v11 + 40) + 40LL) >> 31);
  LODWORD(v12) = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 40LL) % 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 40LL) / 2;
  gptCursorAsync = *(struct tagPOINT *const *)(gpsi + 4960LL);
  ClearLogicalCursorPos(gptCursorAsync, v12);
  EnterCrit(0LL, 1LL);
  TransitionCursorSuppressionState(0xAu, 1);
  UserSessionSwitchLeaveCrit(v14, v13, v15);
  EnterCrit(0LL, 1LL);
  Object = (PVOID *)lambda_ee96b6502effcc67d9cd908cd78240cc_::_lambda_invoker_cdecl_;
  RegisterCoreMsgProviderPreferences(15LL, 3LL, 1LL);
  if ( gSessionId != gServiceSessionId )
  {
    LODWORD(Object) = 0;
    RegisterHotKey((struct tagWND *)1, 0LL, -7, 8, (ULONG_PTR)Object);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
    SetPenHotKeys();
  }
  CInputGlobals::UpdateLastInputTime(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    14LL);
  UserSessionSwitchLeaveCrit(v17, v16, v18);
  v19 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v19;
  if ( !v19 )
    goto LABEL_145;
  KeInitializeTimer(v19);
  v90[2] = gptmrMaster;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    v58 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v58;
    if ( !v58 )
      goto LABEL_145;
    KeInitializeTimerEx(v58, SynchronizationTimer);
  }
  v90[4] = gptmrWD;
  if ( gProtocolType
    && !(unsigned int)DrvEscapeRemoteDrivers(
                        *(_QWORD *)(gpDispInfo + 16LL),
                        gProtocolType,
                        *(_QWORD *)(RemoteContext + 40),
                        2LL,
                        gptmrWD,
                        8) )
  {
    goto LABEL_145;
  }
  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    EnterCrit(0LL, 1LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v21, v20, v22);
  }
  if ( gSessionId == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( gSessionId )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) < 0 )
      goto LABEL_145;
    v77 = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &v77, 0LL);
    v23 = (struct _KEVENT *)v77;
    v24 = 2;
    v90[8] = v77;
    v76 = (PRKEVENT)v77;
  }
  else
  {
    v24 = 1;
    if ( PoRequestShutdownEvent((PVOID *)&v90[8]) < 0 )
      goto LABEL_145;
    v23 = (struct _KEVENT *)v90[8];
  }
  if ( gSessionId != gServiceSessionId )
  {
    CreatePointerDeviceProcessEvents();
    v23 = (struct _KEVENT *)v90[8];
  }
  if ( v23 )
  {
    CurrentThread = KeGetCurrentThread();
    gpkeRITEvent = v23;
    gptiRit = W32GetThreadWin32Thread((__int64)CurrentThread);
    gdwHydraHint |= 0x2000u;
    *(_DWORD *)(gptiRit + 480LL) |= 0x80u;
    v26 = (struct _KEVENT *)a1[1];
    v90[0] = *(_QWORD *)(gptiRit + 1408LL);
    KeSetEvent(v26, 1, 0);
    v75 = *(PVOID *)(v3 + 56);
    ObReferenceObjectByPointer(v75, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    do
      v27 = KeWaitForMultipleObjects(v24, &v75, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
    while ( v27 == 1 && (gdwRITWakeReason & 2) == 0 );
    ObfDereferenceObject(v75);
    if ( v27 == 1 && (gdwRITWakeReason & 2) != 0 )
    {
      KeSetEvent(v76, 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v76);
      if ( Handle )
        ZwClose(Handle);
      KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
      return;
    }
    if ( (unsigned int)GetRITWakeReason(0LL) )
      KeSetEvent(gpkeRITEvent, 1, 0);
    EnterCrit(0LL, 1LL);
    if ( !*(_QWORD *)(gptiRit + 448LL) )
      xxxSwitchDesktop(*(_QWORD *)(gptiRit + 608LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 608LL) + 16LL), 0, 0);
    KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
    if ( gSessionId == gServiceSessionId )
    {
      CBaseInput::InitializeSensor(gpHidInput);
      CBaseInput::InitializeSensor(gpKeyboardSensor);
    }
    else
    {
      if ( gProtocolType )
      {
        v89 = 0LL;
        RtlInitUnicodeString(&v89, 0LL);
        v28 = 1;
        v29 = 0;
        while ( v29 )
        {
          if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
          {
            v30 = (CBaseInput **)gpHidInput;
LABEL_37:
            CBaseInput::Read(*v30);
          }
LABEL_38:
          v29 = ++v28 == 2;
          if ( v28 > 2 )
            goto LABEL_39;
        }
        if ( v28 != 1 || (int)CBaseInput::InitializeSensor(gpKeyboardSensor) < 0 )
          goto LABEL_38;
        CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
        v30 = (CBaseInput **)gpKeyboardSensor;
        goto LABEL_37;
      }
      xxxRegisterForDeviceClassNotifications();
LABEL_39:
      DigitizerFlags = _GetDigitizerFlags();
      if ( (DigitizerFlags & 0xD) != 0 && DigitizerFlags < 0 )
        RegisterTabletButtonHandler();
      InitTimerPowerSaving();
      gnRITdemonTimerId = SetRITTimer(gnRITdemonTimerId, 1000LL, xxxHungAppDemon, 0LL);
    }
    gbIsRITReady = 1;
    if ( (unsigned int)UserIsUserCritSecIn() )
    {
      v35 = 0;
    }
    else
    {
      v35 = 1;
      UserEnterUserCritSec();
    }
    if ( gcSynchronizeTimer != -1 )
      gidSynchronizeTimer = UserSetTimer();
    if ( v35 )
      UserLeaveUserCritSec();
    UserSessionSwitchLeaveCrit(v33, v32, v34);
    LegacyInputDispatcher::Create(&v68);
    LegacyInputDispatcher::Initialize(v68, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v90);
    CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v68);
    CBaseInput::RegisterDispatcherObject(gpHidInput, v68);
    while ( 1 )
    {
LABEL_49:
      v36 = LegacyInputDispatcher::WaitAndDispatch(v68);
      if ( !v36 )
      {
        EnterCrit(0LL, 1LL);
        xxxRemoveQueueCompletion();
        UserSessionSwitchLeaveCrit(v60, v59, v61);
      }
      if ( v36 == 4 )
        break;
      if ( v36 == 2 )
      {
        EnterCrit(0LL, 1LL);
        v64 = gProtocolType;
        if ( gProtocolType )
        {
          DrvEscapeRemoteDrivers(
            *(_QWORD *)(gpDispInfo + 16LL),
            gProtocolType,
            *(_QWORD *)(RemoteContext + 40),
            1LL,
            0LL,
            0);
        }
        else if ( gfRemotingConsole )
        {
          v65 = gConsoleShadowhDev;
          if ( gConsoleShadowhDev )
            HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
        }
LABEL_144:
        UserSessionSwitchLeaveCrit(v65, v64, v63);
      }
      else
      {
        if ( ((v36 - 1) & 0xFFFFFFFD) == 0 )
        {
          EnterCrit(0LL, 1LL);
          TimersProc();
          UserSessionSwitchLeaveCrit(v38, v37, v39);
          v40 = dword_1C033C8C0;
          if ( gnRetryReadInput != dword_1C033C8C0 )
            v40 = gnRetryReadInput;
          dword_1C033C8C0 = v40;
        }
        if ( gspwndAltTab )
        {
          EnterCrit(0LL, 1LL);
          while ( 1 )
          {
            v63 = gptiRit;
            if ( (*(_BYTE *)(*(_QWORD *)(gptiRit + 440LL) + 6LL) & 0x40) == 0 )
              break;
            xxxReceiveMessage(gptiRit);
          }
          goto LABEL_144;
        }
      }
    }
    v69[0] = 0;
    KeClearEvent(gpkeRITEvent);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !(unsigned int)GetRITWakeReason(v69) )
              goto LABEL_49;
            v41 = v69[0];
            if ( (unsigned int)dword_1C0330B30 > 4
              && (qword_1C0330B40 & 2) != 0
              && (qword_1C0330B48 & 2) == qword_1C0330B48 )
            {
              switch ( v69[0] )
              {
                case 1u:
                  v62 = "Mouse";
                  break;
                case 2u:
                  v62 = "Shutdown";
                  break;
                case 4u:
                  v62 = "EnableMMCSS";
                  break;
                case 8u:
                  v62 = "RitTakeover";
                  break;
                case 0x10u:
                  v62 = "DitTakeover";
                  break;
                case 0x20u:
                  v62 = "ConfigUpdate";
                  break;
                case 0x40u:
                  v62 = "GetUserProfile";
                  break;
                case 0x80u:
                  v62 = "DitInControl";
                  break;
                default:
                  v62 = "UNKNOWN";
                  break;
              }
              v78 = (__int64)v62;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                (int)&dword_1C0330B30,
                (__int64)&v78);
            }
            if ( v41 != 1 )
              break;
            ProcessMouseEvent();
          }
          if ( v41 == 2 )
          {
            InitiateWin32kCleanup();
            if ( gSessionId != gServiceSessionId )
            {
              EnterCrit(0LL, 1LL);
              gpkeRITEvent = 0LL;
              ObfDereferenceObject((PVOID)v90[8]);
              UserSessionSwitchLeaveCrit(v52, v51, v53);
            }
            if ( Handle )
              ZwClose(Handle);
            EnterCrit(0LL, 1LL);
            CleanupSensorExplicitly(1LL);
            if ( !gbDIT )
              CleanupSensorExplicitly(2LL);
            UserSessionSwitchLeaveCrit(v55, v54, v56);
            CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
            if ( v68 )
              LegacyInputDispatcher::`scalar deleting destructor'(v68, v57);
            return;
          }
          if ( v41 != 4 )
            break;
          xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        }
        if ( v41 == 8 )
        {
          EnterCrit(0LL, 1LL);
          RitTakeOver();
          CBaseInput::RegisterDispatcherObject(gpHidInput, v68);
          goto LABEL_70;
        }
        if ( v41 != 16 )
          break;
        PrepareForMasterInputThreadTakingOver(v68);
      }
      if ( v41 == 128 )
      {
        EnterCrit(0LL, 1LL);
        ZwSetEvent(ghDITRITEvent, 0LL);
        goto LABEL_70;
      }
      if ( v41 == 32 )
        break;
      if ( v41 == 64 )
      {
        EnterCrit(0LL, 1LL);
        CheckPointerDeviceConfiguration();
        v45 = InteractiveControlManager::Instance();
        if ( (unsigned int)dword_1C032B2F8 > 4 )
        {
          v80 = "InteractiveControlManager::GetExternalParameters entry";
          v79 = *(_QWORD *)(gptiCurrent + 488LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v79,
            (unsigned int)&unk_1C02F2689,
            v46,
            v47,
            (__int64)&v80,
            (__int64)&v79);
        }
        Settings = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v45 + 84));
        v49 = Settings;
        if ( Settings < 0 && (unsigned int)dword_1C032B2F8 > 2 )
        {
          v72 = Settings;
          v81 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C032B2F8,
            (__int64)&v81,
            (__int64)&v72);
        }
        if ( (unsigned int)dword_1C032B2F8 > 4 )
        {
          v73 = v49;
          v82 = (__int64)"InteractiveControlManager::GetExternalParameters exit";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C032B2F8,
            (__int64)&v82,
            (__int64)&v73);
        }
        v42 = *(unsigned int *)UPDWORDPointer(8220LL);
        if ( (unsigned int)dword_1C032B3F8 > 5
          && (qword_1C032B408 & 0x200000000000LL) != 0
          && (qword_1C032B410 & 0x200000000000LL) == qword_1C032B410 )
        {
          v74 = v42;
          v83 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C032B3F8,
            (unsigned int)&unk_1C02F19B9,
            v44,
            v50,
            (__int64)&v83,
            (__int64)&v74);
        }
LABEL_70:
        UserSessionSwitchLeaveCrit(v43, v42, v44);
      }
    }
    EnterCrit(0LL, 1LL);
    goto LABEL_70;
  }
LABEL_145:
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  if ( v68 )
    LegacyInputDispatcher::`scalar deleting destructor'(v68, v66);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
}
