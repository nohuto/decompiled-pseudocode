/*
 * XREFs of xxxRemoteReconnect @ 0x1C0156B10
 * Callers:
 *     <none>
 * Callees:
 *     InitKeyboard @ 0x1C0008F74 (InitKeyboard.c)
 *     TransitionCursorSuppressionState @ 0x1C002A050 (TransitionCursorSuppressionState.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C002AC44 (DrvOcclusionStateChangeNotify.c)
 *     SetMouseTrails @ 0x1C002AC88 (SetMouseTrails.c)
 *     SetPointer @ 0x1C002B0A0 (SetPointer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C011FBB0 (xxxRemoteStopScreenUpdates.c)
 *     RemoveInputDevices @ 0x1C011FF30 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C011FFE0 (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01200A4 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C012CEAC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C012CED4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     RegisterCDROMNotify @ 0x1C012D368 (RegisterCDROMNotify.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C0157950 (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C0157A80 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0157AC0 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0157B24 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C0157CB0 (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C0157D1C (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C0157EB4 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C0157FC0 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     GreDrvReconnect @ 0x1C02BE9A8 (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  BOOL v2; // ebx
  NTSTATUS Win32kDriverObject; // edi
  BOOL v4; // esi
  void *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 RemoteContext; // r14
  _UNKNOWN **v10; // rcx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  unsigned __int128 v18; // kr00_16
  wchar_t *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  void *v23; // rax
  int v24; // r15d
  int v25; // r13d
  __int16 v26; // dx
  int v27; // ecx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // edx
  __int64 v44; // rdx
  LeaveEnterCrit *v45; // rcx
  __int64 v46; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  PVOID *Object; // [rsp+20h] [rbp-388h]
  int HandleInformation; // [rsp+28h] [rbp-380h]
  BOOL v53; // [rsp+60h] [rbp-348h]
  int v54; // [rsp+6Ch] [rbp-33Ch] BYREF
  _BYTE v55[2]; // [rsp+70h] [rbp-338h] BYREF
  unsigned __int16 v56; // [rsp+72h] [rbp-336h]
  int v57; // [rsp+78h] [rbp-330h]
  int v58; // [rsp+7Ch] [rbp-32Ch]
  int v59; // [rsp+84h] [rbp-324h]
  int v60; // [rsp+88h] [rbp-320h]
  PVOID v61; // [rsp+90h] [rbp-318h] BYREF
  PVOID v62; // [rsp+98h] [rbp-310h] BYREF
  PVOID v63; // [rsp+A0h] [rbp-308h] BYREF
  _BYTE v64[320]; // [rsp+B0h] [rbp-2F8h] BYREF
  _OWORD v65[20]; // [rsp+1F0h] [rbp-1B8h] BYREF
  _QWORD v66[10]; // [rsp+330h] [rbp-78h] BYREF

  memset(v66, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v66[1]);
  v66[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v66[3]) = 22;
  LOBYTE(v66[6]) = -1;
  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v53 = 0;
  v57 = 0;
  v58 = 0;
  v59 = LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) + 1;
  v56 = gProtocolType;
  memset(v65, 0, sizeof(v65));
  v54 = 0;
  v5 = 0LL;
  LODWORD(v6) = 0;
  RemoteContext = GreGetRemoteContext();
  v10 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v7,
      9,
      16,
      (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
    v2 = 0;
  }
  if ( PsGetCurrentProcess(v10, v7, v8) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v12 = (_OWORD *)a1;
  if ( a1 + 320 < a1 || a1 + 320 > MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v13 = v64;
  v14 = 2LL;
  do
  {
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v13[3] = v12[3];
    v13[4] = v12[4];
    v13[5] = v12[5];
    v13[6] = v12[6];
    v13 += 8;
    *(v13 - 1) = v12[7];
    v12 += 8;
    --v14;
  }
  while ( v14 );
  *v13 = *v12;
  v13[1] = v12[1];
  v13[2] = v12[2];
  v13[3] = v12[3];
  v15 = v65;
  v16 = v64;
  v17 = 2LL;
  do
  {
    *v15 = *v16;
    v15[1] = v16[1];
    v15[2] = v16[2];
    v15[3] = v16[3];
    v15[4] = v16[4];
    v15[5] = v16[5];
    v15[6] = v16[6];
    v15 += 8;
    *(v15 - 1) = v16[7];
    v16 += 8;
    --v17;
  }
  while ( v17 );
  *v15 = *v16;
  v15[1] = v16[1];
  v15[2] = v16[2];
  v15[3] = v16[3];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  ghRemoteMouseChannel = *(_QWORD *)&v65[3];
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  v18 = v65[2];
  ghRemoteBeepChannel = v18 >> 64;
  ghRemoteVideoChannel = v18;
  ghRemoteKeyboardChannel = *((_QWORD *)&v65[3] + 1);
  ghRemoteThinwireChannel = *(_QWORD *)&v65[4];
  gRemoteClientKeyboardType = *(_QWORD *)((char *)&v65[16] + 12);
  *((_DWORD *)&gRemoteClientKeyboardType + 2) = DWORD1(v65[17]);
  gfEnableWindowsKey = DWORD1(v65[15]);
  gbClientDoubleClickSupport = v65[15];
  v60 = gbRemoteFxSession;
  gbRemoteFxSession = DWORD1(v65[18]);
  *(_DWORD *)(RemoteContext + 64) = DWORD1(v65[18]);
  gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
  gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
  gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
  *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
  *(_OWORD *)&gstrBaseWinStationName = v65[5];
  *((_OWORD *)&gstrBaseWinStationName + 1) = v65[6];
  *((_OWORD *)&gstrBaseWinStationName + 2) = v65[7];
  *((_OWORD *)&gstrBaseWinStationName + 3) = v65[8];
  gWinStationInfo = *(_OWORD *)((char *)&v65[12] + 10);
  *((_WORD *)&gWinStationInfo + 8) = WORD5(v65[13]);
  *(_OWORD *)((char *)&gWinStationInfo + 20) = *(_OWORD *)((char *)&v65[13] + 12);
  *((_DWORD *)&gWinStationInfo + 9) = HIDWORD(v65[14]);
  v19 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v19 )
    *v19 = 0;
  if ( gProtocolType )
  {
    HandleInformation = 0;
    Object = (PVOID *)&v54;
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
    v20 = gpsi;
    if ( !v54 )
    {
      *(_DWORD *)(gpsi + 2236LL) &= ~4u;
      goto LABEL_21;
    }
  }
  else
  {
    v20 = gpsi;
  }
  *(_DWORD *)(v20 + 2236) |= 4u;
LABEL_21:
  v21 = *(_QWORD *)(RemoteContext + 40);
  if ( !v21 )
    goto LABEL_27;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)(v21 + 2 * v22) );
  v6 = v22 + 1;
  v23 = (void *)Win32AllocPoolWithQuota(2 * v6, 2020897621LL);
  v5 = v23;
  if ( v23 )
  {
    memmove(v23, *(const void **)(RemoteContext + 40), 2 * v6);
    v2 = 0;
LABEL_27:
    v26 = gVideoFileObject;
    if ( gVideoFileObject || !ghRemoteVideoChannel )
    {
      if ( !ghRemoteVideoChannel )
      {
        LODWORD(Object) = gRemotePrimaryMonitor;
        if ( !(unsigned int)GreMultiUserInitSession(
                              RemoteContext,
                              ghRemoteThinwireChannel,
                              gpThinWireCache,
                              gRemoteNumMonitors,
                              Object,
                              gVideoFileObject,
                              gThinwireFileObject,
                              8,
                              &v65[9],
                              19,
                              gRemoteDisplayDeviceName) )
          Win32kDriverObject = -1073741823;
      }
    }
    else
    {
      v61 = 0LL;
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v61, 0LL);
      if ( Win32kDriverObject >= 0 )
      {
        gVideoFileObject = v61;
        IoGetRelatedDeviceObject((PFILE_OBJECT)v61);
        v62 = 0LL;
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v62, 0LL);
        gThinwireFileObject = v62;
        v2 = 0;
        if ( Win32kDriverObject >= 0 )
        {
          LODWORD(Object) = gRemotePrimaryMonitor;
          if ( !(unsigned int)GreMultiUserInitSession(
                                RemoteContext,
                                ghRemoteThinwireChannel,
                                gpThinWireCache,
                                gRemoteNumMonitors,
                                Object,
                                gVideoFileObject,
                                gThinwireFileObject,
                                8,
                                &v65[9],
                                19,
                                gRemoteDisplayDeviceName) )
            Win32kDriverObject = -1073741823;
        }
      }
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_47;
    v27 = ghRemoteBeepChannel;
    if ( ghRemoteBeepChannel )
    {
      v63 = 0LL;
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &v63, 0LL);
      gpRemoteBeepDevice = v63;
      v2 = 0;
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_47;
    if ( gnShadowers )
      xxxRemoteStopScreenUpdates(v27, v26);
    if ( WORD4(v65[16]) != gPreviousProtocolType && gPreviousProtocolType )
    {
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v6 - 1), v5) )
        goto LABEL_46;
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                             grpdeskRitInput,
                             gProtocolType,
                             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v66);
      if ( Win32kDriverObject < 0 )
        goto LABEL_47;
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices(v31, v30);
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, &v65[9]) )
      {
LABEL_46:
        Win32kDriverObject = -1073741823;
LABEL_47:
        v24 = 0;
        v25 = 0;
LABEL_48:
        v4 = v53;
        goto LABEL_49;
      }
    }
    SetProtocolType(WORD4(v65[16]));
    if ( !gProtocolType )
      DrvNotifySessionStateChange(3LL);
    v25 = 1;
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm(v33, v32) )
    {
      if ( gProtocolType == gPreviousProtocolType )
      {
        Win32kDriverObject = GreDrvReconnect(RemoteContext);
        LOBYTE(v2) = Win32kDriverObject >= 0;
        v53 = v2;
        v36 = 0;
      }
      else
      {
        v36 = 1;
        Win32kDriverObject = GreDrvConnect(RemoteContext);
        v53 = Win32kDriverObject >= 0;
      }
    }
    else
    {
      v36 = 1;
      v24 = 0;
      if ( !gProtocolType )
      {
        Win32kDriverObject = DrvOpenLocalGraphicsDevices(v35, v34);
        if ( Win32kDriverObject < 0 )
          goto LABEL_48;
        v58 = 1;
      }
    }
    v24 = 1;
    if ( !(unsigned int)DrvSetGraphicsDevices(&v65[9]) )
    {
      if ( gnShadowers )
        RemoteRedrawScreen(0LL);
      Win32kDriverObject = -1073741823;
      goto LABEL_48;
    }
    DispBrokerAsyncSessionSwitched();
    v38 = 0LL;
    if ( DWORD2(v65[17]) || (v39 = gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || HIDWORD(v65[17]) )
    {
      Win32kDriverObject = 0;
      if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL))
        || (unsigned int)DrvSessionHasAnyGraphicsDevice(v41, v40) )
      {
        if ( HIDWORD(v65[17]) || (v42 = 2191LL, !gProtocolType) )
          v42 = 2447LL;
        LOBYTE(HandleInformation) = 0;
        Object = (PVOID *)gspdeskShouldBeForeground;
        Win32kDriverObject = xxxUserSetDisplayConfig(0LL, 0LL, v42, 2LL);
        if ( Win32kDriverObject < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v43) = 4;
            WPP_RECORDER_SF_(
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              v43,
              9,
              17,
              (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
          }
          goto LABEL_48;
        }
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = 0;
    }
    v44 = gProtocolType;
    if ( gProtocolType )
    {
      if ( v36
        && !(unsigned int)DrvEscapeRemoteDrivers(
                            *(_QWORD *)(gpDispInfo + 16LL),
                            gProtocolType,
                            *(_QWORD *)(RemoteContext + 40),
                            2LL,
                            gptmrWD,
                            8) )
      {
        Win32kDriverObject = -1073741823;
      }
      AttachInputDevices(0LL);
    }
    else
    {
      if ( gPreviousProtocolType )
        RemoveInputDevices();
      if ( !gpWin32kDriverObject )
        Win32kDriverObject = GetWin32kDriverObject(v39, v44, v38, v37, Object, HandleInformation);
      AttachInputDevices(1LL);
      (**(void (__fastcall ***)(PVOID))P)(P);
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v55);
      RegisterCDROMNotify();
      v57 = 1;
      LeaveEnterCrit::~LeaveEnterCrit(v45);
    }
    ((void (*)(void))RemoteRedrawScreen)();
    if ( v24 && !gProtocolType && gbSnapShotWindowsAndMonitors && grpdeskIODefault )
      xxxRestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 40LL), gWndsMonitorSnapshotHead);
    InitKeyboard();
    UpdateKeyLights(0LL);
    SetPointer(1LL);
    if ( !gProtocolType && !gCursorSuppressionState )
    {
      gCursorSuppressionState = 9;
      TransitionCursorSuppressionState(0xAu, 0);
      TransitionCursorSuppressionState(2u, 0);
    }
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2u, 0);
    SetConnectedState(1LL, gbConnectCompleted);
    if ( gProtocolType )
    {
      FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
      v46 = gpsi;
      if ( !v54 )
      {
        *(_DWORD *)(gpsi + 2236LL) &= ~4u;
LABEL_135:
        RemoteDeviceCount = DrvGetRemoteDeviceCount();
        LOBYTE(v48) = gProtocolType == 0;
        ((void (__fastcall *)(__int64, _QWORD))gDxgkInterface[48])(v48, RemoteDeviceCount);
        LOBYTE(v49) = gProtocolType == 0;
        LOBYTE(v50) = 1;
        CitSessionConnectChange(v50, v49);
        v24 = 1;
        goto LABEL_48;
      }
    }
    else
    {
      v46 = gpsi;
    }
    *(_DWORD *)(v46 + 2236) |= 4u;
    goto LABEL_135;
  }
  Win32kDriverObject = -1073741801;
  v24 = 0;
  v25 = 0;
LABEL_49:
  SetMouseTrails(v59);
  v28 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v28 = Win32kDriverObject == 0;
  }
  if ( v28 && !gProtocolType )
    RtlSetActiveConsoleId((unsigned int)gSessionId);
  if ( !gProtocolType )
    DrvNotifySessionStateChange(4LL);
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  LOBYTE(v29) = 1;
  DxgkEngNotifyDisplayChange(v29);
  if ( Win32kDriverObject < 0 )
  {
    gbRemoteFxSession = v60;
    *(_DWORD *)(RemoteContext + 64) = v60;
    if ( v57 )
      UnregisterDeviceClassNotifications();
    if ( v58 )
      DrvCloseGraphicsDevices(1LL);
    if ( v25 )
      SetProtocolType(v56);
    if ( v24 )
      DrvSetGraphicsDevices(&v65[9]);
  }
  if ( v5 )
    Win32FreePool(v5);
  if ( !Win32kDriverObject )
  {
    if ( gProtocolType )
      DrvEscapeRemoteDrivers(
        *(_QWORD *)(gpDispInfo + 16LL),
        gProtocolType,
        *(_QWORD *)(RemoteContext + 40),
        6LL,
        0LL,
        0);
  }
  DrvOcclusionStateChangeNotify();
  DispBrokerAsyncSessionSwitched();
  return (unsigned int)Win32kDriverObject;
}
