/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00C02E4
 * Callers:
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C0026A10 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     FreeAllSpbs @ 0x1C004C3C0 (FreeAllSpbs.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     CleanupIAMAccess @ 0x1C00BF4E0 (CleanupIAMAccess.c)
 *     InitializePointerDevicesPresenceState @ 0x1C00BFD80 (InitializePointerDevicesPresenceState.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x1C00BFE28 (-NumHandles@@YAKPEAX@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00BFEAC (WPP_RECORDER_SF_qD.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00BFF3C (-TerminateDesktopThreads@@YAXXZ.c)
 *     FreeTimer @ 0x1C00C0BD0 (FreeTimer.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00C1048 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00C3924 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1C011E880 (UnregisterDeviceClassNotifications.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C0122E1C (--1InkProcessor@@AEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C0128940 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C0128F6C (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     GreDrvDisconnect @ 0x1C0155660 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02C030C (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  int v0; // edx
  int v1; // ecx
  __int64 RemoteContext; // rsi
  __int64 v3; // rcx
  __int64 v4; // r8
  struct tagMOUSE_PROMOTION_QUEUE *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  REGHANDLE v11; // rcx
  REGHANDLE v12; // rcx
  InkProcessor *v13; // rbx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  signed __int32 v23[8]; // [rsp+0h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  int v26; // [rsp+30h] [rbp-48h]
  HANDLE EventHandle; // [rsp+80h] [rbp+8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp+10h] BYREF
  __int64 v29; // [rsp+90h] [rbp+18h] BYREF

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 9, 17, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  }
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v23, 0);
  EnterCrit(0LL, 1LL);
  CleanupPowerRequestList();
  if ( gdwInAtomicOperation )
  {
    v3 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v3, gdwInAtomicOperation, v4);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(0LL, 1LL);
  InitializePointerDevicesPresenceState(0);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  gbInSMSCleanup = 0;
  CTouchProcessor::CancelActivePointers(gpTouchProcessor);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C033AB30);
  v5 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C033AAC0;
  v6 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v5);
    v5 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v5 + 24);
    --v6;
  }
  while ( v6 );
  v10 = (__int64)InteractiveControlManager::s_pInstance;
  if ( InteractiveControlManager::s_pInstance )
  {
    InteractiveControlManager::Deinitialize(InteractiveControlManager::s_pInstance);
    v11 = RegHandle;
    RegHandle = 0LL;
    dword_1C032B2F8 = 0;
    EtwUnregister(v11);
    v12 = qword_1C032B2E0;
    qword_1C032B2E0 = 0LL;
    dword_1C032B2C0 = 0;
    EtwUnregister(v12);
    Win32FreePool(InteractiveControlManager::s_pInstance);
    InteractiveControlManager::s_pInstance = 0LL;
  }
  v13 = InkProcessor::s_pInstance;
  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::~InkProcessor(InkProcessor::s_pInstance);
    Win32FreePool(v13);
    InkProcessor::s_pInstance = 0LL;
  }
  v14 = *(_QWORD *)(gptiCurrent + 608LL);
  Timeout.QuadPart = -6000000000LL;
  while ( v14 )
  {
    v15 = *(_QWORD **)(v14 + 16);
    if ( !v15
      || v15 == gspdeskDisconnect
      && !v15[4]
      && !*(_QWORD *)(*(_QWORD *)(v14 + 56) + 48LL)
      && (unsigned int)NumHandles((void *)v10) <= 1 )
    {
      break;
    }
    if ( gdwInAtomicOperation )
    {
      v10 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v10, v7, v8);
    KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(0LL, 1LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(v10, v7, 7, 18, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  }
  gbExitInProgress = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = *(_DWORD *)(gptiCurrent + 888LL);
    v25 = gptiCurrent;
    WPP_RECORDER_SF_qD(v10, v7, v8, v9, BugCheckParameter4);
  }
  gpqCursor = 0LL;
  ForceCapture(3LL, 0LL);
  FreeScancodeMap();
  if ( gpDispInfo )
    FreeAllSpbs();
  if ( ghDisconnectWinSta )
  {
    ZwClose(ghDisconnectWinSta);
    ghDisconnectWinSta = 0LL;
  }
  if ( ghDisconnectDesk )
  {
    ObCloseHandle(ghDisconnectDesk, 0);
    ghDisconnectDesk = 0LL;
  }
  UnlockObjectAssignment(&grpdeskLogon);
  UnlockObjectAssignment(&gspdeskDisconnect);
  v18 = gtmrListHead[0];
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads(v18, v16, v17);
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
      bDrvDisconnect();
    else
      GreDrvDisconnect(RemoteContext);
  }
  CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(&v29);
  UnlockObjectAssignment(grpdeskRitInput);
  UnlockObjectAssignment(grpdeskIODefault);
  UnlockObjectAssignment(gspdeskShouldBeForeground);
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  HMAssignmentUnlock(&gspwndCursor);
  HMAssignmentUnlock(&gspwndCursorNC);
  gptiRit = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_(v20, v19, 7, 20, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21);
  if ( gSessionId )
  {
    EventHandle = 0LL;
    if ( CreateShutdownEvent(L"EventRitExited", 0x80u, &EventHandle) >= 0 )
    {
      ZwSetEvent(EventHandle, 0LL);
      ZwClose(EventHandle);
    }
  }
  *(_DWORD *)(gptiCurrent + 480LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  if ( gpevtVideoInitialized )
    KeSetEvent(gpevtVideoInitialized, 1, 0);
  if ( gpevtQueueReadyForCallout )
    KeSetEvent(gpevtQueueReadyForCallout, 1, 0);
  return 1LL;
}
