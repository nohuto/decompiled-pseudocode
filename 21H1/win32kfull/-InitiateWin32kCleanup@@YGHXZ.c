/*
 * XREFs of ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _FreeTimer@4 @ 0x92F66 (_FreeTimer@4.c)
 *     _CleanupIAMAccess@4 @ 0xAC54A (_CleanupIAMAccess@4.c)
 *     _FreeAllSpbs@0 @ 0xB246C (_FreeAllSpbs@0.c)
 *     ?SetWaitForWinstaRundown@@YGXXZ @ 0xCCA68 (-SetWaitForWinstaRundown@@YGXXZ.c)
 *     ?NumHandles@@YGKPAX@Z @ 0xCCB20 (-NumHandles@@YGKPAX@Z.c)
 *     _WPP_RECORDER_SF_qD@28 @ 0xCCB80 (_WPP_RECORDER_SF_qD@28.c)
 *     ?TerminateDesktopThreads@@YGXXZ @ 0xCCBCA (-TerminateDesktopThreads@@YGXXZ.c)
 *     ?EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0xCCDEC (-EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     _UnregisterDeviceClassNotifications@0 @ 0xD282C (_UnregisterDeviceClassNotifications@0.c)
 *     _GreDrvDisconnect@4 @ 0xD28A4 (_GreDrvDisconnect@4.c)
 *     ??1InkProcessor@@AAE@XZ @ 0xD3702 (--1InkProcessor@@AAE@XZ.c)
 *     ??1InteractiveControlManager@@AAE@XZ @ 0xD3D50 (--1InteractiveControlManager@@AAE@XZ.c)
 *     ?CreateShutdownEvent@@YGJPBGKPAPAX@Z @ 0xD5150 (-CreateShutdownEvent@@YGJPBGKPAPAX@Z.c)
 *     _InitializePointerDevicesPresenceState@4 @ 0xEC964 (_InitializePointerDevicesPresenceState@4.c)
 *     _bDrvDisconnect@12 @ 0x2263A6 (_bDrvDisconnect@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall InitiateWin32kCleanup()
{
  int *v0; // esi
  int v1; // edi
  struct tagPOINTER_INFO **v2; // esi
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  int DLT; // eax
  int v8; // [esp-14h] [ebp-34h]
  int v9; // [esp-10h] [ebp-30h]
  int v10; // [esp-Ch] [ebp-2Ch]
  unsigned int v11; // [esp+0h] [ebp-20h]
  void **v12; // [esp+4h] [ebp-1Ch]
  union _LARGE_INTEGER Timeout; // [esp+10h] [ebp-10h] BYREF
  int RemoteContext; // [esp+18h] [ebp-8h]
  HANDLE EventHandle; // [esp+1Ch] [ebp-4h] BYREF

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 17, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0);
  DrvNotifySessionStateChange(2);
  EventHandle = 0;
  _gbPowerCalloutsReady = 0;
  _InterlockedOr((volatile signed __int32 *)&EventHandle, 0);
  EnterCrit(0, 1);
  CleanupPowerRequestList();
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  if ( !_gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(0, 1);
  InitializePointerDevicesPresenceState(0);
  gbCleanupInitiated = 1;
  _gdwHydraHint |= 0x400u;
  gbInSMSCleanup = 0;
  CTouchProcessor::CancelActivePointers(_gpTouchProcessor);
  EmptyMousePromotionQueue(&dword_27528C);
  v0 = &dword_275254;
  v1 = 5;
  do
  {
    EmptyMousePromotionQueue(v0);
    v0 += 3;
    --v1;
  }
  while ( v1 );
  if ( InteractiveControlManager::s_pInstance )
  {
    InteractiveControlManager::~InteractiveControlManager(InteractiveControlManager::s_pInstance);
    Win32FreePool(InteractiveControlManager::s_pInstance);
    InteractiveControlManager::s_pInstance = 0;
  }
  v2 = InkProcessor::s_pInstance;
  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::~InkProcessor((InkProcessor *)InkProcessor::s_pInstance);
    Win32FreePool(v2);
    InkProcessor::s_pInstance = 0;
  }
  v3 = *(_DWORD *)(_gptiCurrent + 332);
  Timeout.QuadPart = -6000000000LL;
  while ( v3 )
  {
    v4 = *(_DWORD **)(v3 + 8);
    if ( !v4 || v4 == gspdeskDisconnect && !v4[4] && !*(_DWORD *)(*(_DWORD *)(v3 + 28) + 24) && NumHandles() <= 1 )
      break;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    KeWaitForSingleObject(_gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(0, 1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(7, 18, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  _gbExitInProgress = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(v8, v9, v10, _gptiCurrent, *(_DWORD *)(_gptiCurrent + 504));
  _gpqCursor = 0;
  ForceCapture(3, 0);
  FreeScancodeMap();
  if ( _gpDispInfo )
    FreeAllSpbs();
  if ( ghDisconnectWinSta )
  {
    ZwClose(ghDisconnectWinSta);
    ghDisconnectWinSta = 0;
  }
  if ( ghDisconnectDesk )
  {
    ObCloseHandle(ghDisconnectDesk, 0);
    ghDisconnectDesk = 0;
  }
  UnlockObjectAssignment(&grpdeskLogon);
  UnlockObjectAssignment(&gspdeskDisconnect);
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads();
  if ( _gbConnected )
  {
    if ( _gfRemotingConsole )
      bDrvDisconnect(v5);
    else
      GreDrvDisconnect(RemoteContext);
  }
  DLT = DLT_DESKTOP::getDLT();
  GetDomainLockRef(DLT);
  UnlockObjectAssignment(_grpdeskRitInput);
  UnlockObjectAssignment(_grpdeskIODefault);
  UnlockObjectAssignment(_gspdeskShouldBeForeground);
  if ( _CsrApiPort )
  {
    ObfDereferenceObject(_CsrApiPort);
    _CsrApiPort = 0;
  }
  HMAssignmentUnlock(&gspwndCursor);
  HMAssignmentUnlock(&gspwndCursorNC);
  _gptiRit = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(7, 20, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  UserSessionSwitchLeaveCrit();
  if ( _gSessionId )
  {
    EventHandle = 0;
    if ( CreateShutdownEvent(&EventHandle, v11, v12) >= 0 )
    {
      ZwSetEvent(EventHandle, 0);
      ZwClose(EventHandle);
    }
  }
  *(_DWORD *)(_gptiCurrent + 264) &= ~0x800u;
  _gdwHydraHint |= 0x1000u;
  if ( _gpevtVideoInitialized )
    KeSetEvent(_gpevtVideoInitialized, 1, 0);
  if ( _gpevtQueueReadyForCallout )
    KeSetEvent(_gpevtQueueReadyForCallout, 1, 0);
  return 1;
}
