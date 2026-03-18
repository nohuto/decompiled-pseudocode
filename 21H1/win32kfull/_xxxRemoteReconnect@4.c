/*
 * XREFs of _xxxRemoteReconnect@4 @ 0xD18BC
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _IsRemoteConnection@0 @ 0x749B4 (_IsRemoteConnection@0.c)
 *     ??0LeaveEnterCrit@@QAE@XZ @ 0xAEFB8 (--0LeaveEnterCrit@@QAE@XZ.c)
 *     ??1LeaveEnterCrit@@QAE@XZ @ 0xAEFC8 (--1LeaveEnterCrit@@QAE@XZ.c)
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     _DrvOcclusionStateChangeNotify@0 @ 0xB2298 (_DrvOcclusionStateChangeNotify@0.c)
 *     _xxxRemoteStopScreenUpdates@0 @ 0xD1646 (_xxxRemoteStopScreenUpdates@0.c)
 *     _GreMultiUserSetDisplayDriverName@12 @ 0xD22DA (_GreMultiUserSetDisplayDriverName@12.c)
 *     ?DrvGetRemoteDeviceCount@@YGIXZ @ 0xD23C4 (-DrvGetRemoteDeviceCount@@YGIXZ.c)
 *     _xxxRestoreDesktopsMonitorsAndWindowsRects@8 @ 0xD23F0 (_xxxRestoreDesktopsMonitorsAndWindowsRects@8.c)
 *     _RemoteRedrawScreen@4 @ 0xD2434 (_RemoteRedrawScreen@4.c)
 *     _AttachInputDevices@4 @ 0xD2544 (_AttachInputDevices@4.c)
 *     _RemoveInputDevices@0 @ 0xD257E (_RemoveInputDevices@0.c)
 *     _DrvOpenLocalGraphicsDevices@0 @ 0xD25E0 (_DrvOpenLocalGraphicsDevices@0.c)
 *     _DrvCloseRemoteGraphicsDevices@0 @ 0xD26C8 (_DrvCloseRemoteGraphicsDevices@0.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YGJPAUtagDESKTOP@@GPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0xD2782 (-xxxRemoteSetDisconnectDisplayMode@@YGJPAUtagDESKTOP@@GPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _UnregisterDeviceClassNotifications@0 @ 0xD282C (_UnregisterDeviceClassNotifications@0.c)
 *     _GreDrvDisconnect@4 @ 0xD28A4 (_GreDrvDisconnect@4.c)
 *     ?GetBiosNumLockStatus@@YGXXZ @ 0xD4E70 (-GetBiosNumLockStatus@@YGXXZ.c)
 *     _InitKeyboardState@0 @ 0xD4ED4 (_InitKeyboardState@0.c)
 *     _SetMouseTrails@4 @ 0xD8942 (_SetMouseTrails@4.c)
 *     _RegisterCDROMNotify@0 @ 0xEC8A8 (_RegisterCDROMNotify@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreDrvReconnect@8 @ 0x2260D5 (_GreDrvReconnect@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxRemoteReconnect(_DWORD *a1)
{
  NTSTATUS Win32kDriverObject; // ebx
  const void *v3; // esi
  wchar_t *v4; // eax
  const void **v5; // edi
  _WORD *v6; // ecx
  _WORD *v7; // edx
  size_t v9; // esi
  void *v10; // eax
  bool v11; // zf
  void *v12; // esi
  int v13; // esi
  int v14; // ecx
  LeaveEnterCrit *v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int RemoteDeviceCount; // eax
  unsigned __int16 v20; // [esp+0h] [ebp-2F4h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v21; // [esp+4h] [ebp-2F0h]
  _BYTE v22[288]; // [esp+10h] [ebp-2E4h] BYREF
  const void *v23; // [esp+134h] [ebp-1C0h]
  KSPIN_LOCK v24; // [esp+138h] [ebp-1BCh]
  int v25; // [esp+13Ch] [ebp-1B8h]
  int v26; // [esp+140h] [ebp-1B4h]
  int v27; // [esp+144h] [ebp-1B0h]
  int v28; // [esp+148h] [ebp-1ACh]
  int v29; // [esp+14Ch] [ebp-1A8h]
  int v30; // [esp+150h] [ebp-1A4h]
  int v31; // [esp+154h] [ebp-1A0h]
  union _LARGE_INTEGER CurrentTime; // [esp+158h] [ebp-19Ch] BYREF
  void *v33; // [esp+160h] [ebp-194h]
  BOOL v34; // [esp+164h] [ebp-190h]
  char v35; // [esp+16Bh] [ebp-189h] BYREF
  int v36; // [esp+16Ch] [ebp-188h] BYREF
  PVOID v37; // [esp+170h] [ebp-184h] BYREF
  PVOID Object; // [esp+174h] [ebp-180h] BYREF
  _DWORD v39[72]; // [esp+178h] [ebp-17Ch] BYREF
  _DWORD v40[17]; // [esp+298h] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2DCh] [ebp-18h]

  memset(v40, 0, 0x40u);
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  CurrentTime.QuadPart = 0LL;
  KeQuerySystemTime(&CurrentTime);
  *(union _LARGE_INTEGER *)&v40[14] = CurrentTime;
  v40[5] = 22;
  LOBYTE(v40[11]) = -1;
  Win32kDriverObject = 0;
  v25 = 0;
  v30 = 0;
  v34 = 0;
  v29 = 0;
  v28 = 0;
  v24 = WPP_MAIN_CB.DeviceQueue.Lock + 1;
  v26 = 0;
  v27 = 0;
  CurrentTime.HighPart = _gProtocolType;
  memset(v39, 0, sizeof(v39));
  v36 = 0;
  v33 = 0;
  v31 = 0;
  Object = (PVOID)GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 16, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return -1073741790;
  _gdwHydraHint |= 0x20u;
  ms_exc.registration.TryLevel = 0;
  v3 = a1;
  if ( a1 + 72 < a1 || (unsigned int)(a1 + 72) > _MmUserProbeAddress )
    v3 = (const void *)_MmUserProbeAddress;
  qmemcpy(v22, v3, sizeof(v22));
  qmemcpy(v39, v22, sizeof(v39));
  ms_exc.registration.TryLevel = -2;
  if ( _gfSessionSwitchBlock )
    return -1073741823;
  SetConsoleSwitchInProgress(1);
  SetMouseTrails(0);
  _gpThinWireCache = _ThinWireCache;
  _ghRemoteMouseChannel = v39[9];
  _gRemoteNumMonitors = a1[5];
  _gRemotePrimaryMonitor = a1[6];
  _ghRemoteVideoChannel = v39[7];
  _ghRemoteBeepChannel = v39[8];
  _ghRemoteKeyboardChannel = v39[10];
  _ghRemoteThinwireChannel = v39[11];
  _gRemoteClientKeyboardType[0] = v39[60];
  _gRemoteClientKeyboardType[1] = v39[61];
  _gRemoteClientKeyboardType[2] = v39[62];
  _gbClientDoubleClickSupport = v39[53];
  _gfEnableWindowsKey = v39[54];
  v23 = (const void *)_gbRemoteFxSession;
  _gbRemoteFxSession = v39[66];
  *((_DWORD *)Object + 9) = v39[66];
  _gRemoteTerminalLuid[0] = a1[69];
  _gRemoteTerminalLuid[1] = a1[70];
  _gRemoteSessionUseWddm = a1[71];
  qmemcpy(_gRemoteDisplayDeviceName, (char *)a1 + 134, 0x28u);
  qmemcpy(_gstrBaseWinStationName, &v39[13], 0x40u);
  _gWinStationInfo = *(_DWORD *)((char *)&v39[43] + 2);
  *((_DWORD *)&_gWinStationInfo + 1) = *(_DWORD *)((char *)&v39[44] + 2);
  *((_DWORD *)&_gWinStationInfo + 2) = *(_DWORD *)((char *)&v39[45] + 2);
  *((_DWORD *)&_gWinStationInfo + 3) = *(_DWORD *)((char *)&v39[46] + 2);
  *((_WORD *)&_gWinStationInfo + 8) = HIWORD(v39[47]);
  qmemcpy((char *)&_gWinStationInfo + 20, &v39[48], 0x14u);
  v4 = _wcschr(_gstrBaseWinStationName, 0x23u);
  if ( v4 )
    *v4 = 0;
  if ( IsRemoteConnection() )
  {
    FastGetProfileIntW(0, 39, L"CursorBlinkEnable", 0, &v36, 0);
    if ( v36 )
      *(_DWORD *)(_gpsi + 1836) |= 4u;
    else
      *(_DWORD *)(_gpsi + 1836) &= ~4u;
  }
  else
  {
    *(_DWORD *)(_gpsi + 1836) |= 4u;
  }
  v5 = (const void **)Object;
  v6 = (_WORD *)*((_DWORD *)Object + 6);
  if ( !v6 )
  {
LABEL_48:
    if ( _gVideoFileObject || !_ghRemoteVideoChannel )
    {
      if ( !_ghRemoteVideoChannel
        && !GreMultiUserInitSession(
              v5,
              _ghRemoteThinwireChannel,
              _gpThinWireCache,
              _gRemoteNumMonitors,
              _gRemotePrimaryMonitor,
              _gVideoFileObject,
              _gThinwireFileObject,
              8,
              &v39[29],
              19,
              _gRemoteDisplayDeviceName) )
      {
        goto LABEL_56;
      }
    }
    else
    {
      Object = 0;
      Win32kDriverObject = ObReferenceObjectByHandle(_ghRemoteVideoChannel, 0, 0, 0, &Object, 0);
      if ( Win32kDriverObject >= 0 )
      {
        _gVideoFileObject = Object;
        IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        v37 = 0;
        Win32kDriverObject = ObReferenceObjectByHandle(_ghRemoteThinwireChannel, 0, 0, 0, &v37, 0);
        _gThinwireFileObject = v37;
        if ( Win32kDriverObject >= 0
          && !GreMultiUserInitSession(
                v5,
                _ghRemoteThinwireChannel,
                _gpThinWireCache,
                _gRemoteNumMonitors,
                _gRemotePrimaryMonitor,
                _gVideoFileObject,
                _gThinwireFileObject,
                8,
                &v39[29],
                19,
                _gRemoteDisplayDeviceName) )
        {
LABEL_56:
          Win32kDriverObject = -1073741823;
        }
      }
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_21;
    if ( _ghRemoteBeepChannel )
    {
      v37 = 0;
      Win32kDriverObject = ObReferenceObjectByHandle(_ghRemoteBeepChannel, 0, 0, 0, &v37, 0);
      _gpRemoteBeepDevice = v37;
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_21;
    if ( gnShadowers )
      xxxRemoteStopScreenUpdates();
    if ( LOWORD(v39[59]) != gPreviousProtocolType && gPreviousProtocolType )
    {
      v12 = v33;
      if ( v33 )
      {
        if ( !GreMultiUserSetDisplayDriverName(v5, v31 - 1, v33) )
          goto LABEL_67;
      }
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode((struct tagDESKTOP *)v40, v20, v21);
      if ( Win32kDriverObject < 0 )
        goto LABEL_21;
      if ( a1[65] )
        DrvCloseRemoteGraphicsDevices();
      if ( v12 && !GreMultiUserSetDisplayDriverName(v5, 8, &v39[29]) )
        goto LABEL_67;
    }
    SetProtocolType(v39[59]);
    if ( !_gProtocolType )
      DrvNotifySessionStateChange(3);
    v13 = 1;
    v27 = 1;
    if ( UserRemoteConnectedSessionUsingXddm() )
    {
      if ( _gProtocolType == gPreviousProtocolType )
      {
        Win32kDriverObject = GreDrvReconnect(v5);
        v34 = Win32kDriverObject >= 0;
        v13 = v25;
      }
      else
      {
        Win32kDriverObject = GreDrvConnect(v5);
        v34 = Win32kDriverObject >= 0;
      }
    }
    else if ( !_gProtocolType )
    {
      Win32kDriverObject = DrvOpenLocalGraphicsDevices();
      if ( Win32kDriverObject < 0 )
        goto LABEL_21;
      v28 = 1;
    }
    v26 = 1;
    if ( !DrvSetGraphicsDevices(&v39[29]) )
    {
      if ( gnShadowers )
        RemoteRedrawScreen();
LABEL_67:
      Win32kDriverObject = -1073741823;
      goto LABEL_21;
    }
    DispBrokerAsyncSessionSwitched();
    if ( v39[63] || _gProtocolType != gPreviousProtocolType || v39[64] )
    {
      if ( !DrvIsNotUsingGraphicsDevice(*(_DWORD *)(_gpDispInfo + 8)) || DrvSessionHasAnyGraphicsDevice() )
      {
        if ( v39[64] || (v14 = 2191, !_gProtocolType) )
          v14 = 2447;
        Win32kDriverObject = xxxUserSetDisplayConfig(0, 0, v14, 2, _gspdeskShouldBeForeground, 0, 0, 0, 0, v40);
        if ( Win32kDriverObject < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(9, 17, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
          goto LABEL_21;
        }
        v30 = 1;
      }
      else
      {
        Win32kDriverObject = 0;
      }
    }
    if ( IsRemoteConnection() )
    {
      if ( v13 && !DrvEscapeRemoteDrivers(*(_DWORD *)(_gpDispInfo + 8), _gProtocolType, v5[6], 2, _gptmrWD, 4) )
        Win32kDriverObject = -1073741823;
      AttachInputDevices(0);
    }
    else
    {
      if ( gPreviousProtocolType )
        RemoveInputDevices();
      if ( !_gpWin32kDriverObject )
        Win32kDriverObject = GetWin32kDriverObject();
      AttachInputDevices(1);
      (**(void (__thiscall ***)(PVOID))dword_274060)(dword_274060);
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v35);
      RegisterCDROMNotify();
      v29 = 1;
      LeaveEnterCrit::~LeaveEnterCrit(v15);
    }
    RemoteRedrawScreen();
    if ( v30 && !_gProtocolType && _gbSnapShotWindowsAndMonitors && _grpdeskIODefault )
      xxxRestoreDesktopsMonitorsAndWindowsRects(*(_DWORD *)(_grpdeskIODefault + 20), _gWndsMonitorSnapshotHead);
    if ( !_gProtocolType )
    {
      GetBiosNumLockStatus();
      InitKeyboardState();
    }
    UpdateKeyLights(0);
    SetPointerInternal(1, 6);
    if ( !IsRemoteConnection() && !gCursorSuppressionState )
    {
      gCursorSuppressionState = 9;
      TransitionCursorSuppressionState(v16, 10, 0);
      TransitionCursorSuppressionState(v17, 2, 0);
    }
    if ( gCursorSuppressionState != 1 && gCursorSuppressionState != 5 )
      TransitionCursorSuppressionState(v16, 2, 0);
    SetConnectedState(1, _gbConnectCompleted);
    if ( IsRemoteConnection() )
    {
      FastGetProfileIntW(0, 39, L"CursorBlinkEnable", 0, &v36, 0);
      v18 = _gpsi;
      if ( !v36 )
      {
        *(_DWORD *)(_gpsi + 1836) &= ~4u;
LABEL_129:
        RemoteDeviceCount = DrvGetRemoteDeviceCount();
        ((void (__stdcall *)(bool, unsigned int))_gDxgkInterface[48])(_gProtocolType == 0, RemoteDeviceCount);
        CitSessionConnectChange(1, _gProtocolType == 0);
        goto LABEL_21;
      }
    }
    else
    {
      v18 = _gpsi;
    }
    *(_DWORD *)(v18 + 1836) |= 4u;
    goto LABEL_129;
  }
  v7 = v6 + 1;
  while ( *v6++ )
    ;
  v31 = v6 - v7 + 1;
  v9 = 2 * v31;
  v10 = (void *)Win32AllocPoolWithQuota(2 * v31, 2020897621);
  v33 = v10;
  if ( v10 )
  {
    memcpy(v10, v5[6], v9);
    goto LABEL_48;
  }
  Win32kDriverObject = -1073741801;
LABEL_21:
  SetMouseTrails(v24);
  v11 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v34 )
      GreDrvDisconnect(v5);
    v11 = Win32kDriverObject == 0;
  }
  if ( v11 && !_gProtocolType )
    RtlSetActiveConsoleId(_gSessionId);
  if ( !_gProtocolType )
    DrvNotifySessionStateChange(4);
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(v5);
  SetConsoleSwitchInProgress(0);
  if ( Win32kDriverObject < 0 )
  {
    _gbRemoteFxSession = v23;
    v5[9] = v23;
    if ( v29 )
      UnregisterDeviceClassNotifications();
    if ( v28 )
      DrvCloseGraphicsDevices(1);
    if ( v27 )
      SetProtocolType(CurrentTime.HighPart);
    if ( v26 )
      DrvSetGraphicsDevices(&v39[29]);
  }
  if ( v33 )
    Win32FreePool(v33);
  if ( !Win32kDriverObject )
  {
    if ( IsRemoteConnection() )
      DrvEscapeRemoteDrivers(*(_DWORD *)(_gpDispInfo + 8), _gProtocolType, v5[6], 6, 0, 0);
  }
  DrvOcclusionStateChangeNotify();
  DispBrokerAsyncSessionSwitched();
  return Win32kDriverObject;
}
