/*
 * XREFs of xxxRemoteDisconnect @ 0x1C011E080
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C011E450 (xxxRemoteStopScreenUpdates.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C011E788 (GreDxgkPreSessionDisconnected.c)
 *     RemoveInputDevices @ 0x1C011E7D0 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C011E880 (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E944 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C012B7D0 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     RemoteRedrawScreen @ 0x1C01551C4 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C0155660 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0155930 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0155B70 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D7E1C (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C021F1F4 (xxxRequestOutOfFullScreenMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  int v0; // ebp
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 RemoteContext; // r14
  int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v15[10]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v15[1]);
  v0 = 0;
  v15[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v15[3]) = 21;
  LOBYTE(v15[6]) = -1;
  Timeout.QuadPart = 0LL;
  RemoteContext = GreGetRemoteContext();
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_(v2, v1, 9, 15, (__int64)&WPP_0f27963f307c3266edb1c5990ca93414_Traceguids);
  }
  if ( PsGetCurrentProcess(v2, v1, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    if ( !(unsigned int)UserIsWddmConnectedSession() )
    {
      GreDxgkPreSessionDisconnected(0LL);
      gDxgkInterface[47](0LL);
    }
  }
  else
  {
    while ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
  }
  if ( gProtocolType || gbFullScreen != 1 || (result = xxxRequestOutOfFullScreenMode(), (int)result >= 0) )
  {
    gdwHydraHint |= 0x10u;
    memset(gstrBaseWinStationName, 0, 0x40uLL);
    if ( gfSessionSwitchBlock )
      return 3221226029LL;
    if ( !gProtocolType && !gbGDIOn )
    {
      v5 = 1;
      PowerOnGdi(v15, 1LL, 4LL);
    }
    SetConsoleSwitchInProgress(1LL);
    if ( !gspdeskDisconnect )
    {
      Timeout.QuadPart = -3000000000LL;
      if ( gdwInAtomicOperation )
      {
        v6 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7);
      KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(0LL, 1LL);
    }
    if ( gbSnapShotWindowsAndMonitors )
    {
      if ( *(_DWORD *)*gpDispInfo > 1u )
      {
        v12 = *(_QWORD *)(gptiCurrent + 448LL);
        if ( v12 || (v12 = grpdeskIODefault) != 0 )
        {
          if ( gProtocolType )
          {
            if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
              goto LABEL_17;
            v13 = gRemoteWndsMonitorSnapshotHead;
          }
          else
          {
            v13 = gWndsMonitorSnapshotHead;
          }
          SnapShotDesktopsMonitorsAndWindowsRects(*(_QWORD *)(v12 + 40), v13);
        }
      }
    }
LABEL_17:
    if ( gspdeskDisconnect )
    {
      v8 = xxxRemoteStopScreenUpdates();
      if ( v8 < 0 )
        goto LABEL_59;
      v0 = 1;
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        LOBYTE(v9) = gProtocolType == 0;
        GreDxgkPreSessionDisconnected(v9);
        v8 = xxxRemoteSetDisconnectDisplayMode(
               grpdeskRitInput,
               gProtocolType,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v15);
        LOBYTE(v10) = gProtocolType == 0;
        gDxgkInterface[47](v10);
        if ( v8 < 0 )
          goto LABEL_58;
        DrvCloseGraphicsDevices(gProtocolType == 0);
      }
      else
      {
        GreDrvDisconnect(RemoteContext);
      }
      gPreviousProtocolType = gProtocolType;
      if ( !gProtocolType )
      {
        UnregisterDeviceClassNotifications();
        RemoveInputDevices();
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0LL, 0LL);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 32LL))(P);
      CitSessionConnectChange(0LL, 0LL);
    }
    else
    {
      v8 = -1073741823;
    }
    if ( v8 >= 0 )
    {
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)*gpDispInfo;
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
LABEL_32:
      SetConsoleSwitchInProgress(0LL);
      if ( v8 < 0 && v5 == 1 )
        PowerOffGdi();
      DispBrokerAsyncSessionSwitched();
      return (unsigned int)v8;
    }
    if ( !v0 )
    {
LABEL_59:
      if ( !gProtocolType )
        CleanupDesktopsMonitorsAndWindowsSnapShot(gWndsMonitorSnapshotHead);
      goto LABEL_32;
    }
LABEL_58:
    RemoteRedrawScreen();
    goto LABEL_59;
  }
  return result;
}
