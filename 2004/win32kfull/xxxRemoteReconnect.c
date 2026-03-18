/*
 * XREFs of xxxRemoteReconnect @ 0x1C01541B0
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C004A770 (TransitionCursorSuppressionState.c)
 *     SetMouseTrails @ 0x1C004C4B8 (SetMouseTrails.c)
 *     SetPointer @ 0x1C004D9F0 (SetPointer.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C0050AB4 (DrvOcclusionStateChangeNotify.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     InitKeyboard @ 0x1C00C86E0 (InitKeyboard.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C011E450 (xxxRemoteStopScreenUpdates.c)
 *     RemoveInputDevices @ 0x1C011E7D0 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C011E880 (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E944 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     RegisterCDROMNotify @ 0x1C012B478 (RegisterCDROMNotify.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C0154FF8 (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C0155128 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0155160 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C01551C4 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C0155350 (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C01553BC (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C0155554 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C0155660 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0157E84 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0157EAC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled @ 0x1C015948C (Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     GreDrvReconnect @ 0x1C02BFF08 (GreDrvReconnect.c)
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
  int v30; // ebx
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // edx
  __int64 v36; // rdx
  LeaveEnterCrit *v37; // rcx
  __int64 v38; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  PVOID *Object; // [rsp+20h] [rbp-388h]
  int HandleInformation; // [rsp+28h] [rbp-380h]
  BOOL v45; // [rsp+60h] [rbp-348h]
  int v46; // [rsp+6Ch] [rbp-33Ch] BYREF
  _BYTE v47[2]; // [rsp+70h] [rbp-338h] BYREF
  unsigned __int16 v48; // [rsp+72h] [rbp-336h]
  int v49; // [rsp+78h] [rbp-330h]
  int v50; // [rsp+7Ch] [rbp-32Ch]
  int v51; // [rsp+84h] [rbp-324h]
  int v52; // [rsp+88h] [rbp-320h]
  PVOID v53; // [rsp+90h] [rbp-318h] BYREF
  PVOID v54; // [rsp+98h] [rbp-310h] BYREF
  PVOID v55; // [rsp+A0h] [rbp-308h] BYREF
  _BYTE v56[320]; // [rsp+B0h] [rbp-2F8h] BYREF
  _OWORD v57[20]; // [rsp+1F0h] [rbp-1B8h] BYREF
  _QWORD v58[10]; // [rsp+330h] [rbp-78h] BYREF

  memset(v58, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v58[1]);
  v58[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v58[3]) = 22;
  LOBYTE(v58[6]) = -1;
  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v45 = 0;
  v49 = 0;
  v50 = 0;
  v51 = LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) + 1;
  v48 = gProtocolType;
  memset(v57, 0, sizeof(v57));
  v46 = 0;
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
      (__int64)&WPP_0f27963f307c3266edb1c5990ca93414_Traceguids);
    v2 = 0;
  }
  if ( PsGetCurrentProcess(v10, v7, v8) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v12 = (_OWORD *)a1;
  if ( a1 + 320 < a1 || a1 + 320 > MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v13 = v56;
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
  v15 = v57;
  v16 = v56;
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
  ghRemoteMouseChannel = *(_QWORD *)&v57[3];
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  v18 = v57[2];
  ghRemoteBeepChannel = v18 >> 64;
  ghRemoteVideoChannel = v18;
  ghRemoteKeyboardChannel = *((_QWORD *)&v57[3] + 1);
  ghRemoteThinwireChannel = *(_QWORD *)&v57[4];
  gRemoteClientKeyboardType = *(_QWORD *)((char *)&v57[16] + 12);
  *((_DWORD *)&gRemoteClientKeyboardType + 2) = DWORD1(v57[17]);
  gfEnableWindowsKey = DWORD1(v57[15]);
  gbClientDoubleClickSupport = v57[15];
  v52 = gbRemoteFxSession;
  gbRemoteFxSession = DWORD1(v57[18]);
  *(_DWORD *)(RemoteContext + 64) = DWORD1(v57[18]);
  gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
  gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
  gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
  *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
  *(_OWORD *)&gstrBaseWinStationName = v57[5];
  *((_OWORD *)&gstrBaseWinStationName + 1) = v57[6];
  *((_OWORD *)&gstrBaseWinStationName + 2) = v57[7];
  *((_OWORD *)&gstrBaseWinStationName + 3) = v57[8];
  gWinStationInfo = *(_OWORD *)((char *)&v57[12] + 10);
  *((_WORD *)&gWinStationInfo + 8) = WORD5(v57[13]);
  *(_OWORD *)((char *)&gWinStationInfo + 20) = *(_OWORD *)((char *)&v57[13] + 12);
  *((_DWORD *)&gWinStationInfo + 9) = HIDWORD(v57[14]);
  v19 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v19 )
    *v19 = 0;
  if ( gProtocolType )
  {
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v46, 0);
    v20 = gpsi;
    if ( !v46 )
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
      if ( !ghRemoteVideoChannel
        && !(unsigned int)GreMultiUserInitSession(
                            RemoteContext,
                            ghRemoteThinwireChannel,
                            gpThinWireCache,
                            gRemoteNumMonitors,
                            gRemotePrimaryMonitor,
                            gVideoFileObject,
                            gThinwireFileObject,
                            8,
                            &v57[9],
                            19,
                            gRemoteDisplayDeviceName) )
      {
        Win32kDriverObject = -1073741823;
      }
    }
    else
    {
      v53 = 0LL;
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v53, 0LL);
      if ( Win32kDriverObject >= 0 )
      {
        gVideoFileObject = v53;
        IoGetRelatedDeviceObject((PFILE_OBJECT)v53);
        v54 = 0LL;
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v54, 0LL);
        gThinwireFileObject = v54;
        v2 = 0;
        if ( Win32kDriverObject >= 0
          && !(unsigned int)GreMultiUserInitSession(
                              RemoteContext,
                              ghRemoteThinwireChannel,
                              gpThinWireCache,
                              gRemoteNumMonitors,
                              gRemotePrimaryMonitor,
                              gVideoFileObject,
                              gThinwireFileObject,
                              8,
                              &v57[9],
                              19,
                              gRemoteDisplayDeviceName) )
        {
          Win32kDriverObject = -1073741823;
        }
      }
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_47;
    v27 = ghRemoteBeepChannel;
    if ( ghRemoteBeepChannel )
    {
      v55 = 0LL;
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &v55, 0LL);
      gpRemoteBeepDevice = v55;
      v2 = 0;
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_47;
    if ( gnShadowers )
      xxxRemoteStopScreenUpdates(v27, v26);
    if ( WORD4(v57[16]) != gPreviousProtocolType && gPreviousProtocolType )
    {
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v6 - 1), v5) )
        goto LABEL_46;
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                             grpdeskRitInput,
                             gProtocolType,
                             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v58);
      if ( Win32kDriverObject < 0 )
        goto LABEL_47;
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices();
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, &v57[9]) )
      {
LABEL_46:
        Win32kDriverObject = -1073741823;
LABEL_47:
        v24 = 0;
        v25 = 0;
LABEL_48:
        v4 = v45;
        goto LABEL_49;
      }
    }
    SetProtocolType(WORD4(v57[16]));
    if ( !gProtocolType )
      DrvNotifySessionStateChange(3LL);
    v25 = 1;
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
    {
      if ( gProtocolType == gPreviousProtocolType )
      {
        Win32kDriverObject = GreDrvReconnect(RemoteContext);
        LOBYTE(v2) = Win32kDriverObject >= 0;
        v45 = v2;
        v30 = 0;
      }
      else
      {
        v30 = 1;
        Win32kDriverObject = GreDrvConnect(RemoteContext);
        v45 = Win32kDriverObject >= 0;
      }
    }
    else
    {
      v30 = 1;
      v24 = 0;
      if ( !gProtocolType )
      {
        Win32kDriverObject = DrvOpenLocalGraphicsDevices();
        if ( Win32kDriverObject < 0 )
          goto LABEL_48;
        v50 = 1;
      }
    }
    v24 = 1;
    if ( !(unsigned int)DrvSetGraphicsDevices(&v57[9]) )
    {
      if ( gnShadowers )
        RemoteRedrawScreen(0LL);
      Win32kDriverObject = -1073741823;
      goto LABEL_48;
    }
    DispBrokerAsyncSessionSwitched();
    v32 = 0LL;
    if ( DWORD2(v57[17]) || (v33 = gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || HIDWORD(v57[17]) )
    {
      Win32kDriverObject = 0;
      if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL))
        || (unsigned int)DrvSessionHasAnyGraphicsDevice() )
      {
        if ( HIDWORD(v57[17]) || (v34 = 2191LL, !gProtocolType) )
          v34 = 2447LL;
        LOBYTE(HandleInformation) = 0;
        Object = (PVOID *)gspdeskShouldBeForeground;
        Win32kDriverObject = xxxUserSetDisplayConfig(0LL, 0LL, v34, 2LL);
        if ( Win32kDriverObject < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 4;
            WPP_RECORDER_SF_(
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              v35,
              9,
              17,
              (__int64)&WPP_0f27963f307c3266edb1c5990ca93414_Traceguids);
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
    v36 = gProtocolType;
    if ( gProtocolType )
    {
      if ( v30
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
        Win32kDriverObject = GetWin32kDriverObject(v33, v36, v32, v31, Object, HandleInformation);
      AttachInputDevices(1LL);
      (**(void (__fastcall ***)(PVOID))P)(P);
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v47);
      RegisterCDROMNotify();
      v49 = 1;
      LeaveEnterCrit::~LeaveEnterCrit(v37);
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
      FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v46, 0);
      v38 = gpsi;
      if ( !v46 )
      {
        *(_DWORD *)(gpsi + 2236LL) &= ~4u;
LABEL_137:
        RemoteDeviceCount = DrvGetRemoteDeviceCount();
        LOBYTE(v40) = gProtocolType == 0;
        ((void (__fastcall *)(__int64, _QWORD))gDxgkInterface[48])(v40, RemoteDeviceCount);
        LOBYTE(v41) = gProtocolType == 0;
        LOBYTE(v42) = 1;
        CitSessionConnectChange(v42, v41);
        v24 = 1;
        goto LABEL_48;
      }
    }
    else
    {
      v38 = gpsi;
    }
    *(_DWORD *)(v38 + 2236) |= 4u;
    goto LABEL_137;
  }
  Win32kDriverObject = -1073741801;
  v24 = 0;
  v25 = 0;
LABEL_49:
  SetMouseTrails(v51);
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
  if ( (unsigned int)Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled() )
  {
    LOBYTE(v29) = 1;
    DxgkEngNotifyDisplayChange(v29);
  }
  if ( Win32kDriverObject < 0 )
  {
    gbRemoteFxSession = v52;
    *(_DWORD *)(RemoteContext + 64) = v52;
    if ( v49 )
      UnregisterDeviceClassNotifications();
    if ( v50 )
      DrvCloseGraphicsDevices(1LL);
    if ( v25 )
      SetProtocolType(v48);
    if ( v24 )
      DrvSetGraphicsDevices(&v57[9]);
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
