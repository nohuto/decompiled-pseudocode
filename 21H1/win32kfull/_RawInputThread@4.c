/*
 * XREFs of _RawInputThread@4 @ 0xD57F4
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxRemoveQueueCompletion@0 @ 0x6ECD4 (_xxxRemoveQueueCompletion@0.c)
 *     _TimersProc@0 @ 0x73F70 (_TimersProc@0.c)
 *     _SetRITTimer@16 @ 0xA4BF6 (_SetRITTimer@16.c)
 *     ?GetRITWakeReason@@YGHPAK@Z @ 0xAB1D2 (-GetRITWakeReason@@YGHPAK@Z.c)
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     _xxxClientEnableMMCSS@4 @ 0xC3818 (_xxxClientEnableMMCSS@4.c)
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 *     ??1LegacyInputDispatcher@@QAE@XZ @ 0xD4644 (--1LegacyInputDispatcher@@QAE@XZ.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SGXXZ @ 0xD4684 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SGXXZ.c)
 *     _RitTakeOver@0 @ 0xD4A6C (_RitTakeOver@0.c)
 *     ?GetBiosNumLockStatus@@YGXXZ @ 0xD4E70 (-GetBiosNumLockStatus@@YGXXZ.c)
 *     _InitKeyboardState@0 @ 0xD4ED4 (_InitKeyboardState@0.c)
 *     _SetDebugHotKeys@0 @ 0xD4EF6 (_SetDebugHotKeys@0.c)
 *     ?SetWinlogonHotKeys@@YGXXZ @ 0xD4F54 (-SetWinlogonHotKeys@@YGXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YGXXZ @ 0xD511E (-SetWindowArrangementHotKeys@@YGXXZ.c)
 *     ?CreateShutdownEvent@@YGJPBGKPAPAX@Z @ 0xD5150 (-CreateShutdownEvent@@YGJPBGKPAPAX@Z.c)
 *     _CreatePointerDeviceProcessEvents@0 @ 0xD520C (_CreatePointerDeviceProcessEvents@0.c)
 *     ?_GetDigitizerFlags@@YGKXZ @ 0xD5568 (-_GetDigitizerFlags@@YGKXZ.c)
 *     ?InitTimerPowerSaving@@YGXXZ @ 0xD5632 (-InitTimerPowerSaving@@YGXXZ.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YGXPAVLegacyInputDispatcher@@@Z @ 0xD5666 (-PrepareForMasterInputThreadTakingOver@@YGXPAVLegacyInputDispatcher@@@Z.c)
 *     _CheckPointerDeviceConfiguration@0 @ 0xD56E0 (_CheckPointerDeviceConfiguration@0.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YGXXZ @ 0xD57B0 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YGXXZ.c)
 *     _GreStartTimers@0 @ 0xD61D6 (_GreStartTimers@0.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QAEJXZ @ 0xD7548 (-ReadSettings@InteractiveControlSettings@@QAEJXZ.c)
 *     ?Initialize@InkProcessor@@SGJXZ @ 0xE8C30 (-Initialize@InkProcessor@@SGJXZ.c)
 *     _xxxRegisterForDeviceClassNotifications@0 @ 0xED552 (_xxxRegisterForDeviceClassNotifications@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _KeGetCurrentThread@0 @ 0xED867 (_KeGetCurrentThread@0.c)
 *     ?SetPenHotKeys@@YGXXZ @ 0xF0526 (-SetPenHotKeys@@YGXXZ.c)
 *     ?SetupHotKeyRegistrationForwarding@@YGXXZ @ 0xF1BEA (-SetupHotKeyRegistrationForwarding@@YGXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     ?RegisterTabletButtonHandler@@YGXXZ @ 0x146FC0 (-RegisterTabletButtonHandler@@YGXXZ.c)
 *     ?RitWakeReasonToString@InputTraceLogging@@CGPBDK@Z @ 0x147005 (-RitWakeReasonToString@InputTraceLogging@@CGPBDK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1AD794 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6GJPBU_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __stdcall RawInputThread(NTSTATUS *a1)
{
  struct _KTHREAD *CurrentThread; // eax
  HANDLE ThreadProcessId; // esi
  struct _KTHREAD *v3; // eax
  void (__stdcall *v4)(_DWORD, int); // edi
  void (*v5)(void); // ebx
  int ProcessWin32Process; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // esi
  unsigned int v10; // edx
  unsigned __int64 v11; // kr08_8
  struct _KTIMER *v12; // eax
  struct _KTIMER *v13; // eax
  struct _KEVENT *v14; // edx
  PKTHREAD v15; // eax
  PVOID v16; // edi
  void (__stdcall *v17)(_DWORD, int); // edi
  unsigned int v18; // esi
  bool v19; // zf
  CBaseInput **v20; // ecx
  char DigitizerFlags; // al
  int v22; // esi
  int v23; // esi
  struct InteractiveControlManager *v24; // esi
  int Settings; // eax
  int v26; // ecx
  int v27; // esi
  LegacyInputDispatcher *v28; // esi
  LegacyInputDispatcher *v29; // esi
  struct LegacyInputDispatcher *v30; // [esp-2Ch] [ebp-D0h]
  unsigned int v31; // [esp-Ch] [ebp-B0h]
  void **v32; // [esp-8h] [ebp-ACh]
  _DWORD SystemInformation[3]; // [esp+10h] [ebp-94h] BYREF
  struct _UNICODE_STRING v34; // [esp+1Ch] [ebp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-80h] BYREF
  int v36; // [esp+2Ch] [ebp-78h] BYREF
  int v37; // [esp+30h] [ebp-74h] BYREF
  int v38; // [esp+34h] [ebp-70h] BYREF
  int v39; // [esp+38h] [ebp-6Ch] BYREF
  const char *v40; // [esp+3Ch] [ebp-68h] BYREF
  int v41; // [esp+40h] [ebp-64h] BYREF
  int v42; // [esp+44h] [ebp-60h] BYREF
  NTSTATUS *v43; // [esp+48h] [ebp-5Ch]
  int RemoteContext; // [esp+4Ch] [ebp-58h]
  int v45; // [esp+50h] [ebp-54h]
  unsigned int v46; // [esp+54h] [ebp-50h]
  PVOID v47; // [esp+58h] [ebp-4Ch] BYREF
  PRKEVENT v48; // [esp+5Ch] [ebp-48h]
  NTSTATUS v49; // [esp+60h] [ebp-44h]
  int v50; // [esp+64h] [ebp-40h] BYREF
  PVOID Object; // [esp+68h] [ebp-3Ch] BYREF
  HANDLE Handle; // [esp+6Ch] [ebp-38h] BYREF
  LegacyInputDispatcher *v53; // [esp+70h] [ebp-34h] BYREF
  _DWORD v54[10]; // [esp+74h] [ebp-30h] BYREF

  v43 = a1;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  Handle = 0;
  v47 = 0;
  v48 = 0;
  RemoteContext = GreGetRemoteContext();
  v53 = 0;
  memset(v54, 0, sizeof(v54));
  KeGetCurrentThread();
  SetThreadName(-2, L"Win32k Raw Input Thread");
  v49 = *a1;
  CurrentThread = KeGetCurrentThread();
  ThreadProcessId = PsGetThreadProcessId(CurrentThread);
  v3 = KeGetCurrentThread();
  SystemInformation[1] = PsGetThreadId(v3);
  SystemInformation[0] = ThreadProcessId;
  SystemInformation[2] = 16;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0xCu);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  v4 = (void (__stdcall *)(_DWORD, int))EnterCrit;
  EnterCrit(0, 1);
  if ( !_gProtocolType )
  {
    GetBiosNumLockStatus();
    InitKeyboardState();
  }
  _gdwPUDFlags &= ~0x1000u;
  _gdwGTERMFlags &= ~1u;
  *(_DWORD *)(_gpsi + 1572) = 0;
  *(_DWORD *)(_gpsi + 1668) = 0;
  *(_DWORD *)(_gpsi + 1796) = 0;
  v5 = (void (*)(void))UserSessionSwitchLeaveCrit;
  UserSessionSwitchLeaveCrit();
  InkProcessor::Initialize();
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_114;
  v54[6] = CRitTimerScanWakeSystem::ritTimerScanWakeEvent;
  ProcessWin32Process = PsGetProcessWin32Process(_gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 8) |= (unsigned int)&loc_40010;
  v7 = *(_DWORD *)(GetDispInfo() + 52);
  *(_DWORD *)(_gpsi + 4428) = *(_DWORD *)(*(_DWORD *)(v7 + 20) + 24) / 2;
  *(_DWORD *)(_gpsi + 4432) = *(_DWORD *)(*(_DWORD *)(v7 + 20) + 28) / 2;
  _gptCursorAsync = *(struct tagPOINT *const *)(_gpsi + 4428);
  _gptCursorAsync->y = *(LONG *)(_gpsi + 4432);
  ClearLogicalCursorPos();
  EnterCrit(0, 1);
  TransitionCursorSuppressionState(v8, 10, 1);
  UserSessionSwitchLeaveCrit();
  EnterCrit(0, 1);
  SetupHotKeyRegistrationForwarding();
  if ( _gSessionId != _gServiceSessionId )
  {
    _RegisterHotKey((struct tagTHREADINFO *)1, 0, (struct tagTHREADINFO *)0xFFFFFFF9, 8u, 0);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
    SetPenHotKeys();
  }
  v9 = MEMORY[0xFFDF0004];
  v45 = MEMORY[0xFFDF0004];
  v10 = MEMORY[0xFFDF0324];
  v46 = MEMORY[0xFFDF0320];
  if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
  {
    do
    {
      _mm_pause();
      v10 = MEMORY[0xFFDF0324];
      v46 = MEMORY[0xFFDF0320];
    }
    while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
    v4 = (void (__stdcall *)(_DWORD, int))EnterCrit;
    v5 = (void (*)(void))UserSessionSwitchLeaveCrit;
    v9 = v45;
  }
  v11 = (((unsigned int)v45 * (unsigned __int64)v46) >> 24) + (((unsigned int)v9 * (unsigned __int64)v10) << 8);
  CInputGlobals::UpdateLastInputTime(_gpInputGlobals, v11, HIDWORD(v11), 14);
  v5();
  v12 = (struct _KTIMER *)Win32AllocPoolNonPaged(40, 1951101781);
  _gptmrMaster = v12;
  if ( !v12 )
    goto LABEL_114;
  KeInitializeTimer(v12);
  v54[2] = _gptmrMaster;
  if ( !_gbNonServiceSession || _gbFirstInteractiveSession )
  {
    v13 = (struct _KTIMER *)Win32AllocPoolNonPaged(40, 1951101781);
    _gptmrWD = v13;
    if ( !v13 )
      goto LABEL_114;
    KeInitializeTimerEx(v13, SynchronizationTimer);
  }
  v54[4] = _gptmrWD;
  if ( _gProtocolType
    && !DrvEscapeRemoteDrivers(
          *(_DWORD *)(_gpDispInfo + 8),
          _gProtocolType,
          *(_DWORD *)(RemoteContext + 24),
          2,
          _gptmrWD,
          4) )
  {
    goto LABEL_114;
  }
  if ( _gSessionId != _gServiceSessionId && !_gProtocolType )
  {
    v4(0, 1);
    GetWin32kDriverObject();
    v5();
  }
  if ( _gSessionId == _gServiceSessionId )
    _gbFirstConnectionDone = 1;
  if ( _gSessionId )
  {
    if ( CreateShutdownEvent(0, (int)L"EventShutDownCSRSS", &Handle, v31, v32) < 0 )
      goto LABEL_114;
    Object = 0;
    ObReferenceObjectByHandle(Handle, (ACCESS_MASK)&loc_1F0002 + 1, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0);
    v14 = (struct _KEVENT *)Object;
    v54[8] = Object;
    v48 = (PRKEVENT)Object;
    Object = (PVOID)2;
  }
  else
  {
    Object = (PVOID)1;
    if ( PoRequestShutdownEvent((PVOID *)&v54[8]) < 0 )
      goto LABEL_114;
    v14 = (struct _KEVENT *)v54[8];
  }
  if ( _gSessionId != _gServiceSessionId )
  {
    CreatePointerDeviceProcessEvents();
    v14 = (struct _KEVENT *)v54[8];
  }
  if ( v14 )
  {
    gpkeRITEvent = v14;
    v15 = KeGetCurrentThread();
    _gptiRit = W32GetThreadWin32Thread(v15);
    _gdwHydraHint |= 0x2000u;
    *(_DWORD *)(_gptiRit + 264) |= 0x80u;
    v54[0] = *(_DWORD *)(_gptiRit + 812);
    KeSetEvent((PRKEVENT)v43[1], 1, 0);
    v47 = *(PVOID *)(v49 + 28);
    ObReferenceObjectByPointer(v47, (ACCESS_MASK)&loc_1F0002 + 1, (POBJECT_TYPE)ExEventObjectType, 0);
    v16 = Object;
    do
      v49 = KeWaitForMultipleObjects((ULONG)v16, &v47, WaitAny, WrUserRequest, 0, 0, 0, 0);
    while ( v49 == 1 && (gdwRITWakeReason & 2) == 0 );
    ObfDereferenceObject(v47);
    v17 = (void (__stdcall *)(_DWORD, int))EnterCrit;
    if ( v49 == 1 && (gdwRITWakeReason & 2) != 0 )
    {
      KeSetEvent(v48, 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v48);
      if ( Handle )
        ZwClose(Handle);
      KeSetEvent(_gpevtRitReadyForCallOut, 1, 0);
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
      return;
    }
    if ( GetRITWakeReason(0) )
      KeSetEvent(gpkeRITEvent, 1, 0);
    EnterCrit(0, 1);
    if ( !*(_DWORD *)(_gptiRit + 248) )
      xxxSwitchDesktop(*(_DWORD *)(_gptiRit + 332), *(_DWORD *)(*(_DWORD *)(_gptiRit + 332) + 8), 0, 0);
    KeSetEvent(_gpevtRitReadyForCallOut, 1, 0);
    if ( _gSessionId == _gServiceSessionId )
    {
      CBaseInput::InitializeSensor(_gpHidInput);
      CBaseInput::InitializeSensor(_gpKeyboardSensor);
    }
    else
    {
      if ( _gProtocolType )
      {
        *(_DWORD *)&v34.Length = 0;
        v34.Buffer = 0;
        RtlInitUnicodeString(&v34, 0);
        v18 = 1;
        v19 = 0;
        while ( v19 )
        {
          if ( (int)CBaseInput::InitializeSensor(_gpHidInput) >= 0 )
          {
            v20 = (CBaseInput **)_gpHidInput;
LABEL_50:
            CBaseInput::Read(*v20);
          }
LABEL_51:
          v19 = ++v18 == 2;
          if ( v18 > 2 )
          {
            v17 = (void (__stdcall *)(_DWORD, int))EnterCrit;
            goto LABEL_54;
          }
        }
        if ( v18 != 1 || (int)CBaseInput::InitializeSensor(_gpKeyboardSensor) < 0 )
          goto LABEL_51;
        CBaseInput::HandleTSRequest(_gpKeyboardSensor, 0, v31);
        v20 = (CBaseInput **)_gpKeyboardSensor;
        goto LABEL_50;
      }
      xxxRegisterForDeviceClassNotifications();
LABEL_54:
      DigitizerFlags = _GetDigitizerFlags();
      if ( (DigitizerFlags & 0xD) != 0 && DigitizerFlags < 0 )
        RegisterTabletButtonHandler();
      InitTimerPowerSaving();
      gnRITdemonTimerId = SetRITTimer((char *)gnRITdemonTimerId, 0x3E8u, (int)xxxHungAppDemon, 0);
    }
    gbIsRITReady = 1;
    GreStartTimers();
    UserSessionSwitchLeaveCrit();
    LegacyInputDispatcher::Create(&v53);
    LegacyInputDispatcher::Initialize(v53, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v54);
    CBaseInput::RegisterDispatcherObject(_gpKeyboardSensor, v53);
    CBaseInput::RegisterDispatcherObject(_gpHidInput, v53);
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_59:
        v22 = LegacyInputDispatcher::WaitAndDispatch(v53);
        if ( !v22 )
        {
          v17(0, 1);
          xxxRemoveQueueCompletion();
          UserSessionSwitchLeaveCrit();
        }
        if ( v22 == 4 )
        {
          v50 = 0;
          KeClearEvent(gpkeRITEvent);
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  if ( !GetRITWakeReason(&v50) )
                    goto LABEL_59;
                  v23 = v50;
                  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 2LL) )
                  {
                    v42 = (int)InputTraceLogging::RitWakeReasonToString((unsigned int)v30);
                    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                      (int)&dword_2689E8,
                      (int)&unk_253FEB,
                      0,
                      0,
                      (int)&v42);
                  }
                  if ( v23 != 1 )
                    break;
                  ProcessMouseEvent();
                }
                if ( v23 == 2 )
                {
                  InitiateWin32kCleanup();
                  if ( _gSessionId != _gServiceSessionId )
                  {
                    v17(0, 1);
                    gpkeRITEvent = 0;
                    ObfDereferenceObject((PVOID)v54[8]);
                    UserSessionSwitchLeaveCrit();
                  }
                  if ( Handle )
                    ZwClose(Handle);
                  v17(0, 1);
                  CleanupSensorExplicitly(1);
                  if ( !gbDIT )
                    CleanupSensorExplicitly(2);
                  UserSessionSwitchLeaveCrit();
                  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
                  v28 = v53;
                  if ( v53 )
                  {
                    LegacyInputDispatcher::~LegacyInputDispatcher(v53);
                    Win32FreePool(v28);
                  }
                  return;
                }
                if ( v23 != 4 )
                  break;
                xxxClientEnableMMCSS((void *)((*_gpsi >> 12) & 1));
              }
              if ( v23 == 8 )
              {
                v17(0, 1);
                RitTakeOver();
                CBaseInput::RegisterDispatcherObject(_gpHidInput, v53);
                goto LABEL_88;
              }
              if ( v23 != 16 )
                break;
              PrepareForMasterInputThreadTakingOver(v53, v30);
            }
            if ( v23 == 128 )
            {
              v17(0, 1);
              ZwSetEvent(ghDITRITEvent, 0);
              goto LABEL_88;
            }
            if ( v23 == 32 )
              break;
            if ( v23 == 64 )
            {
              v17(0, 1);
              CheckPointerDeviceConfiguration();
              v24 = InteractiveControlManager::Instance();
              if ( (unsigned int)dword_2662F8 > 4 )
              {
                v40 = "InteractiveControlManager::GetExternalParameters entry";
                v41 = *(_DWORD *)(_gptiCurrent + 268);
                _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
                  v41,
                  v41,
                  &v40,
                  &v41);
              }
              Settings = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v24 + 48));
              v27 = Settings;
              if ( Settings < 0 && (unsigned int)dword_2662F8 > 2 )
              {
                v39 = Settings;
                v38 = (int)"Function failed.";
                _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (int)&dword_2662F8,
                  (int)&unk_256AC8,
                  v26,
                  v26,
                  (int)&v38,
                  (int)&v39);
              }
              if ( (unsigned int)dword_2662F8 > 4 )
              {
                v37 = v27;
                v36 = (int)"InteractiveControlManager::GetExternalParameters exit";
                _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (int)&dword_2662F8,
                  (int)&unk_256A55,
                  v26,
                  v26,
                  (int)&v36,
                  (int)&v37);
              }
              TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_88:
              UserSessionSwitchLeaveCrit();
            }
          }
          v17(0, 1);
          goto LABEL_88;
        }
        if ( v22 != 2 )
          break;
        v17(0, 1);
        if ( _gProtocolType )
        {
          DrvEscapeRemoteDrivers(*(_DWORD *)(_gpDispInfo + 8), _gProtocolType, *(_DWORD *)(RemoteContext + 24), 1, 0, 0);
        }
        else if ( _gfRemotingConsole && gConsoleShadowhDev )
        {
          HDXDrvEscape(gConsoleShadowhDev, 1, 0, 0);
        }
LABEL_105:
        UserSessionSwitchLeaveCrit();
      }
      if ( v22 == 1 || v22 == 3 )
      {
        v17(0, 1);
        TimersProc();
        UserSessionSwitchLeaveCrit();
        if ( _gnRetryReadInput != dword_2742C8 )
          dword_2742C8 = _gnRetryReadInput;
      }
      if ( gspwndAltTab )
      {
        v17(0, 1);
        while ( (*(_BYTE *)(*(_DWORD *)(_gptiRit + 244) + 6) & 0x40) != 0 )
          xxxReceiveMessage(_gptiRit);
        goto LABEL_105;
      }
    }
  }
LABEL_114:
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  v29 = v53;
  if ( v53 )
  {
    LegacyInputDispatcher::~LegacyInputDispatcher(v53);
    Win32FreePool(v29);
  }
  KeSetEvent((PRKEVENT)v43[1], 1, 0);
  KeSetEvent(_gpevtRitReadyForCallOut, 1, 0);
}
