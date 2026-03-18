/*
 * XREFs of RawInputThread @ 0x1C0009A30
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C0008830 (xxxRegisterForDeviceClassNotifications.c)
 *     InitKeyboard @ 0x1C0008F74 (InitKeyboard.c)
 *     SetDebugHotKeys @ 0x1C000907C (SetDebugHotKeys.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C0009118 (-SetPenHotKeys@@YAXXZ.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C00091F4 (CreatePointerDeviceProcessEvents.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C0009678 (-_GetDigitizerFlags@@YAKXZ.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C00097A4 (-InitTimerPowerSaving@@YAXXZ.c)
 *     RitTakeOver @ 0x1C000980C (RitTakeOver.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C0009874 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x1C000994C (CheckPointerDeviceConfiguration.c)
 *     TimersProc @ 0x1C000A540 (TimersProc.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C000A9C8 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     xxxClientEnableMMCSS @ 0x1C000AA0C (xxxClientEnableMMCSS.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C000ACA4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C000AD98 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C000B08C (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C000B10C (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000B814 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C000F054 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     TransitionCursorSuppressionState @ 0x1C002A050 (TransitionCursorSuppressionState.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C002B044 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C002D20C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     _RegisterHotKey @ 0x1C002ED74 (_RegisterHotKey.c)
 *     xxxReceiveMessage @ 0x1C0052EE0 (xxxReceiveMessage.c)
 *     xxxRemoveQueueCompletion @ 0x1C007EC40 (xxxRemoveQueueCompletion.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     SetRITTimer @ 0x1C00C9BD0 (SetRITTimer.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C012991C (--0InkProcessor@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D4488 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01D450C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01D8778 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     UserSetTimer @ 0x1C0247CBC (UserSetTimer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C025105C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0251114 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RawInputThread(__int64 *a1)
{
  __int64 RemoteContext; // r14
  __int64 v3; // rsi
  InkProcessor *v4; // rax
  InkProcessor *v5; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  struct _KTIMER *v9; // rax
  struct _KEVENT *v10; // r8
  ULONG v11; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v13; // rcx
  NTSTATUS v14; // ebx
  unsigned int v15; // ebx
  bool v16; // zf
  CBaseInput **v17; // rcx
  char DigitizerFlags; // al
  char v19; // bl
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // ebx
  struct InteractiveControlManager *v23; // rbx
  int v24; // r8d
  int v25; // r9d
  int Settings; // eax
  int v27; // ebx
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  unsigned int v31; // edx
  struct _KTIMER *v32; // rax
  const char *v33; // rax
  unsigned int v34; // edx
  PVOID *Object; // [rsp+28h] [rbp-E0h]
  LegacyInputDispatcher *v36; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v37[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  int v39; // [rsp+60h] [rbp-A8h] BYREF
  int v40; // [rsp+64h] [rbp-A4h] BYREF
  int v41; // [rsp+68h] [rbp-A0h] BYREF
  int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  PVOID v43; // [rsp+70h] [rbp-98h] BYREF
  PRKEVENT v44; // [rsp+78h] [rbp-90h]
  PVOID v45; // [rsp+80h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h] BYREF
  const char *v48; // [rsp+98h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  __int128 SystemInformation; // [rsp+D8h] [rbp-30h] BYREF
  int v55; // [rsp+E8h] [rbp-20h]
  int v56; // [rsp+ECh] [rbp-1Ch]
  struct _UNICODE_STRING v57; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v58[10]; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+158h] [rbp+50h] BYREF
  int *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]

  DestinationString = 0LL;
  Handle = 0LL;
  v44 = 0LL;
  v56 = 0;
  v36 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset(v58, 0, sizeof(v58));
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v3 = *a1;
  *(_QWORD *)&v52 = PsGetThreadProcessId(KeGetCurrentThread());
  v55 = 16;
  *((_QWORD *)&v52 + 1) = PsGetThreadId(KeGetCurrentThread());
  SystemInformation = v52;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(0LL, 1LL);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1972LL) = 0;
  *(_DWORD *)(gpsi + 2068LL) = 0;
  *(_DWORD *)(gpsi + 2196LL) = 0;
  UserSessionSwitchLeaveCrit();
  if ( !InkProcessor::s_pInstance )
  {
    v4 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
    v5 = v4 ? InkProcessor::InkProcessor(v4) : 0LL;
    InkProcessor::s_pInstance = v5;
    if ( !v5 && (unsigned int)dword_1C032A288 > 2 )
    {
      v39 = -1073741801;
      v60 = &v39;
      v61 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032A288, (int)&dword_1C02F0A0C, 0, 0, 3u, &v59);
    }
  }
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_145;
  v58[6] = CRitTimerScanWakeSystem::ritTimerScanWakeEvent;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v7 = *(_QWORD *)(GetDispInfo() + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 36LL) / 2;
  v8 = (unsigned int)(*(int *)(*(_QWORD *)(v7 + 40) + 40LL) >> 31);
  LODWORD(v8) = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 40LL) % 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 40LL) / 2;
  gptCursorAsync = *(struct tagPOINT *const *)(gpsi + 4960LL);
  ClearLogicalCursorPos(gptCursorAsync, v8);
  EnterCrit(0LL, 1LL);
  TransitionCursorSuppressionState(10LL, 1LL);
  UserSessionSwitchLeaveCrit();
  EnterCrit(0LL, 1LL);
  Object = (PVOID *)lambda_ee96b6502effcc67d9cd908cd78240cc_::_lambda_invoker_cdecl_;
  RegisterCoreMsgProviderPreferences(15LL, 3LL, 1LL);
  if ( gSessionId != gServiceSessionId )
  {
    LODWORD(Object) = 0;
    RegisterHotKey((struct tagWND *)1, (ULONG_PTR)Object);
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
  UserSessionSwitchLeaveCrit();
  v9 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v9;
  if ( !v9 )
    goto LABEL_145;
  KeInitializeTimer(v9);
  v58[2] = gptmrMaster;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    v32 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v32;
    if ( !v32 )
      goto LABEL_145;
    KeInitializeTimerEx(v32, SynchronizationTimer);
  }
  v58[4] = gptmrWD;
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
    UserSessionSwitchLeaveCrit();
  }
  if ( gSessionId == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( gSessionId )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) < 0 )
      goto LABEL_145;
    v45 = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &v45, 0LL);
    v10 = (struct _KEVENT *)v45;
    v11 = 2;
    v58[8] = v45;
    v44 = (PRKEVENT)v45;
  }
  else
  {
    v11 = 1;
    if ( PoRequestShutdownEvent((PVOID *)&v58[8]) < 0 )
      goto LABEL_145;
    v10 = (struct _KEVENT *)v58[8];
  }
  if ( gSessionId != gServiceSessionId )
  {
    CreatePointerDeviceProcessEvents();
    v10 = (struct _KEVENT *)v58[8];
  }
  if ( v10 )
  {
    CurrentThread = KeGetCurrentThread();
    gpkeRITEvent = v10;
    gptiRit = W32GetThreadWin32Thread(CurrentThread);
    gdwHydraHint |= 0x2000u;
    *(_DWORD *)(gptiRit + 488LL) |= 0x80u;
    v13 = (struct _KEVENT *)a1[1];
    v58[0] = *(_QWORD *)(gptiRit + 1416LL);
    KeSetEvent(v13, 1, 0);
    v43 = *(PVOID *)(v3 + 56);
    ObReferenceObjectByPointer(v43, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    do
      v14 = KeWaitForMultipleObjects(v11, &v43, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
    while ( v14 == 1 && (gdwRITWakeReason & 2) == 0 );
    ObfDereferenceObject(v43);
    if ( v14 == 1 && (gdwRITWakeReason & 2) != 0 )
    {
      KeSetEvent(v44, 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v44);
      if ( Handle )
        ZwClose(Handle);
      KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
      return;
    }
    if ( (unsigned int)GetRITWakeReason(0LL) )
      KeSetEvent(gpkeRITEvent, 1, 0);
    EnterCrit(0LL, 1LL);
    if ( !*(_QWORD *)(gptiRit + 456LL) )
      xxxSwitchDesktop(*(_QWORD *)(gptiRit + 616LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 616LL) + 16LL), 0LL, 0LL);
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
        v57 = 0LL;
        RtlInitUnicodeString(&v57, 0LL);
        v15 = 1;
        v16 = 0;
        while ( v16 )
        {
          if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
          {
            v17 = (CBaseInput **)gpHidInput;
LABEL_37:
            CBaseInput::Read(*v17);
          }
LABEL_38:
          v16 = ++v15 == 2;
          if ( v15 > 2 )
            goto LABEL_39;
        }
        if ( v15 != 1 || (int)CBaseInput::InitializeSensor(gpKeyboardSensor) < 0 )
          goto LABEL_38;
        CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
        v17 = (CBaseInput **)gpKeyboardSensor;
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
      v19 = 0;
    }
    else
    {
      v19 = 1;
      UserEnterUserCritSec();
    }
    if ( gcSynchronizeTimer != -1 )
      gidSynchronizeTimer = UserSetTimer();
    if ( v19 )
      UserLeaveUserCritSec();
    UserSessionSwitchLeaveCrit();
    LegacyInputDispatcher::Create(&v36);
    LegacyInputDispatcher::Initialize(v36, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v58);
    CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v36);
    CBaseInput::RegisterDispatcherObject(gpHidInput, v36);
    while ( 1 )
    {
LABEL_49:
      v20 = LegacyInputDispatcher::WaitAndDispatch(v36);
      if ( !v20 )
      {
        EnterCrit(0LL, 1LL);
        xxxRemoveQueueCompletion();
        UserSessionSwitchLeaveCrit();
      }
      if ( v20 == 4 )
        break;
      if ( v20 == 2 )
      {
        EnterCrit(0LL, 1LL);
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
        else if ( gfRemotingConsole && gConsoleShadowhDev )
        {
          HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
        }
LABEL_144:
        UserSessionSwitchLeaveCrit();
      }
      else
      {
        if ( ((v20 - 1) & 0xFFFFFFFD) == 0 )
        {
          EnterCrit(0LL, 1LL);
          TimersProc();
          UserSessionSwitchLeaveCrit();
          v21 = dword_1C033B8F0;
          if ( gnRetryReadInput != dword_1C033B8F0 )
            v21 = gnRetryReadInput;
          dword_1C033B8F0 = v21;
        }
        if ( gspwndAltTab )
        {
          EnterCrit(0LL, 1LL);
          while ( (*(_BYTE *)(*(_QWORD *)(gptiRit + 448LL) + 6LL) & 0x40) != 0 )
            xxxReceiveMessage(gptiRit);
          goto LABEL_144;
        }
      }
    }
    v37[0] = 0;
    KeClearEvent(gpkeRITEvent);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !(unsigned int)GetRITWakeReason(v37) )
              goto LABEL_49;
            v22 = v37[0];
            if ( (unsigned int)dword_1C032FB30 > 4
              && (qword_1C032FB40 & 2) != 0
              && (qword_1C032FB48 & 2) == qword_1C032FB48 )
            {
              switch ( v37[0] )
              {
                case 1u:
                  v33 = "Mouse";
                  break;
                case 2u:
                  v33 = "Shutdown";
                  break;
                case 4u:
                  v33 = "EnableMMCSS";
                  break;
                case 8u:
                  v33 = "RitTakeover";
                  break;
                case 0x10u:
                  v33 = "DitTakeover";
                  break;
                case 0x20u:
                  v33 = "ConfigUpdate";
                  break;
                case 0x40u:
                  v33 = "GetUserProfile";
                  break;
                case 0x80u:
                  v33 = "DitInControl";
                  break;
                default:
                  v33 = "UNKNOWN";
                  break;
              }
              v46 = (__int64)v33;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                (int)&dword_1C032FB30,
                (__int64)&v46);
            }
            if ( v22 != 1 )
              break;
            ProcessMouseEvent();
          }
          if ( v22 == 2 )
          {
            InitiateWin32kCleanup();
            if ( gSessionId != gServiceSessionId )
            {
              EnterCrit(0LL, 1LL);
              gpkeRITEvent = 0LL;
              ObfDereferenceObject((PVOID)v58[8]);
              UserSessionSwitchLeaveCrit();
            }
            if ( Handle )
              ZwClose(Handle);
            EnterCrit(0LL, 1LL);
            CleanupSensorExplicitly(1LL);
            if ( !gbDIT )
              CleanupSensorExplicitly(2LL);
            UserSessionSwitchLeaveCrit();
            CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
            if ( v36 )
              LegacyInputDispatcher::`scalar deleting destructor'(v36, v31);
            return;
          }
          if ( v22 != 4 )
            break;
          xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        }
        if ( v22 == 8 )
        {
          EnterCrit(0LL, 1LL);
          RitTakeOver();
          CBaseInput::RegisterDispatcherObject(gpHidInput, v36);
          goto LABEL_70;
        }
        if ( v22 != 16 )
          break;
        PrepareForMasterInputThreadTakingOver(v36);
      }
      if ( v22 == 128 )
      {
        EnterCrit(0LL, 1LL);
        ZwSetEvent(ghDITRITEvent, 0LL);
        goto LABEL_70;
      }
      if ( v22 == 32 )
        break;
      if ( v22 == 64 )
      {
        EnterCrit(0LL, 1LL);
        CheckPointerDeviceConfiguration();
        v23 = InteractiveControlManager::Instance();
        if ( (unsigned int)dword_1C032A2F8 > 4 )
        {
          v48 = "InteractiveControlManager::GetExternalParameters entry";
          v47 = *(_QWORD *)(gptiCurrent + 496LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v47,
            (unsigned int)&unk_1C02F1C99,
            v24,
            v25,
            (__int64)&v48,
            (__int64)&v47);
        }
        Settings = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v23 + 84));
        v27 = Settings;
        if ( Settings < 0 && (unsigned int)dword_1C032A2F8 > 2 )
        {
          v40 = Settings;
          v49 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C032A2F8,
            (__int64)&v49,
            (__int64)&v40);
        }
        if ( (unsigned int)dword_1C032A2F8 > 4 )
        {
          v41 = v27;
          v50 = (__int64)"InteractiveControlManager::GetExternalParameters exit";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C032A2F8,
            (__int64)&v50,
            (__int64)&v41);
        }
        v28 = *(_DWORD *)UPDWORDPointer(8220LL);
        if ( (unsigned int)dword_1C032A3F8 > 5
          && (qword_1C032A408 & 0x200000000000LL) != 0
          && (qword_1C032A410 & 0x200000000000LL) == qword_1C032A410 )
        {
          v42 = v28;
          v51 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C032A3F8,
            (unsigned int)&unk_1C02F0FC9,
            v29,
            v30,
            (__int64)&v51,
            (__int64)&v42);
        }
LABEL_70:
        UserSessionSwitchLeaveCrit();
      }
    }
    EnterCrit(0LL, 1LL);
    goto LABEL_70;
  }
LABEL_145:
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  if ( v36 )
    LegacyInputDispatcher::`scalar deleting destructor'(v36, v34);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
}
