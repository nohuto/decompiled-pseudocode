/*
 * XREFs of _xxxRemoteDisconnect@0 @ 0xD123C
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _GreDxgkPreSessionDisconnected@4 @ 0xAEF78 (_GreDxgkPreSessionDisconnected@4.c)
 *     _xxxRemoteStopScreenUpdates@0 @ 0xD1646 (_xxxRemoteStopScreenUpdates@0.c)
 *     _RemoteRedrawScreen@4 @ 0xD2434 (_RemoteRedrawScreen@4.c)
 *     _RemoveInputDevices@0 @ 0xD257E (_RemoveInputDevices@0.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YGJPAUtagDESKTOP@@GPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0xD2782 (-xxxRemoteSetDisconnectDisplayMode@@YGJPAUtagDESKTOP@@GPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _UnregisterDeviceClassNotifications@0 @ 0xD282C (_UnregisterDeviceClassNotifications@0.c)
 *     _GreDrvDisconnect@4 @ 0xD28A4 (_GreDrvDisconnect@4.c)
 *     _PowerOnGdi@12 @ 0xD37F0 (_PowerOnGdi@12.c)
 *     _PowerOffGdi@0 @ 0xD4366 (_PowerOffGdi@0.c)
 *     _CleanupDesktopsMonitorsAndWindowsSnapShot@4 @ 0xD4AAA (_CleanupDesktopsMonitorsAndWindowsSnapShot@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _SnapShotDesktopsMonitorsAndWindowsRects@8 @ 0x145C7D (_SnapShotDesktopsMonitorsAndWindowsRects@8.c)
 *     _xxxRequestOutOfFullScreenMode@0 @ 0x181663 (_xxxRequestOutOfFullScreenMode@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxRemoteDisconnect()
{
  int result; // eax
  _DWORD (__stdcall *v1)(); // ebx
  void *v2; // ecx
  int v3; // esi
  int v4; // edx
  int v5; // esi
  __int16 v6; // bx
  unsigned __int16 v7; // [esp+0h] [ebp-70h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // [esp+4h] [ebp-6Ch]
  union _LARGE_INTEGER CurrentTime; // [esp+10h] [ebp-60h] BYREF
  int v10; // [esp+18h] [ebp-58h]
  int RemoteContext; // [esp+1Ch] [ebp-54h]
  union _LARGE_INTEGER Timeout; // [esp+20h] [ebp-50h] BYREF
  _DWORD v13[17]; // [esp+28h] [ebp-48h] BYREF

  memset(v13, 0, 0x40u);
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  CurrentTime.QuadPart = 0LL;
  KeQuerySystemTime(&CurrentTime);
  *(union _LARGE_INTEGER *)&v13[14] = CurrentTime;
  v13[5] = 21;
  LOBYTE(v13[11]) = -1;
  Timeout.QuadPart = 0LL;
  v10 = 0;
  RemoteContext = GreGetRemoteContext();
  CurrentTime.LowPart = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 15, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return -1073741790;
  if ( !_gbConnected )
    return 0;
  if ( !gbIsRITReady )
    return -1073741823;
  v1 = UserIsWddmConnectedSession;
  if ( _gProtocolType )
  {
    if ( !UserIsWddmConnectedSession() )
    {
      LOBYTE(v2) = 0;
      GreDxgkPreSessionDisconnected(v2);
      _gDxgkInterface[47](0);
    }
  }
  else
  {
    while ( ghSwitcher )
      xxxSleepThread2(0, 0, 0);
  }
  if ( _gProtocolType || _gbFullScreen != 1 || (result = xxxRequestOutOfFullScreenMode(), result >= 0) )
  {
    _gdwHydraHint |= 0x10u;
    memset(_gstrBaseWinStationName, 0, 0x40u);
    if ( _gfSessionSwitchBlock )
      return -1073741267;
    if ( !_gProtocolType && !_gbGDIOn )
    {
      CurrentTime.LowPart = 1;
      PowerOnGdi(v13, 1, 4);
    }
    SetConsoleSwitchInProgress(1);
    if ( !gspdeskDisconnect )
    {
      Timeout.QuadPart = -3000000000LL;
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      UserSessionSwitchLeaveCrit();
      KeWaitForSingleObject(_gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(0, 1);
    }
    if ( _gbSnapShotWindowsAndMonitors )
    {
      if ( *(_DWORD *)*_gpDispInfo > 1u )
      {
        v3 = *(_DWORD *)(_gptiCurrent + 248);
        if ( v3 || (v3 = _grpdeskIODefault) != 0 )
        {
          if ( _gProtocolType )
          {
            if ( !UserRemoteConnectedSessionUsingWddm() )
              goto LABEL_37;
            v4 = _gRemoteWndsMonitorSnapshotHead;
          }
          else
          {
            v4 = _gWndsMonitorSnapshotHead;
          }
          SnapShotDesktopsMonitorsAndWindowsRects(*(_DWORD *)(v3 + 20), v4);
        }
      }
    }
LABEL_37:
    if ( gspdeskDisconnect )
    {
      v5 = xxxRemoteStopScreenUpdates();
      if ( v5 < 0 )
        goto LABEL_52;
      v10 = 1;
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( UserIsWddmConnectedSession() )
      {
        LOBYTE(v1) = _gProtocolType == 0;
        GreDxgkPreSessionDisconnected((void *)(_gProtocolType == 0));
        v5 = xxxRemoteSetDisconnectDisplayMode((struct tagDESKTOP *)v13, v7, v8);
        _gDxgkInterface[47](v1);
        if ( v5 < 0 )
          goto LABEL_51;
        DrvCloseGraphicsDevices((unsigned __int8)v1);
      }
      else
      {
        GreDrvDisconnect(RemoteContext);
      }
      v6 = _gProtocolType;
      gPreviousProtocolType = _gProtocolType;
      if ( !_gProtocolType )
      {
        UnregisterDeviceClassNotifications();
        RemoveInputDevices();
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0, 0);
      (*(void (__thiscall **)(PVOID))(*(_DWORD *)dword_274060 + 16))(dword_274060);
      CitSessionConnectChange(0, 0);
    }
    else
    {
      v6 = _gProtocolType;
      v5 = -1073741823;
    }
    if ( v5 >= 0 )
    {
      if ( !v6 )
        DrvSetGraphicsDevices(L"TSDDD");
      if ( _gProtocolType )
        _gRemotePreviousMonitorsCount = *(_DWORD *)*_gpDispInfo;
      CleanupRemoteHandles(RemoteContext);
      goto LABEL_59;
    }
    if ( !v10 )
    {
LABEL_52:
      if ( !_gProtocolType )
        CleanupDesktopsMonitorsAndWindowsSnapShot(_gWndsMonitorSnapshotHead);
LABEL_59:
      SetConsoleSwitchInProgress(0);
      if ( v5 < 0 && CurrentTime.LowPart == 1 )
        PowerOffGdi();
      DispBrokerAsyncSessionSwitched();
      return v5;
    }
LABEL_51:
    RemoteRedrawScreen();
    goto LABEL_52;
  }
  return result;
}
