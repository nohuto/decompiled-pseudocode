/*
 * XREFs of xxxRemoteConnect @ 0x1C011C440
 * Callers:
 *     <none>
 * Callees:
 *     IsRemoteConnection @ 0x1C0009F24 (IsRemoteConnection.c)
 *     InitLoadResources @ 0x1C0020864 (InitLoadResources.c)
 *     WPP_RECORDER_SF_S @ 0x1C0027D5C (WPP_RECORDER_SF_S.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     SetProtocolType @ 0x1C0071E20 (SetProtocolType.c)
 *     FastGetProfileIntW @ 0x1C008D800 (FastGetProfileIntW.c)
 *     InitVideo @ 0x1C0095238 (InitVideo.c)
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C00955C0 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 *     SetConnectedState @ 0x1C00B83A0 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C00B83D0 (SetConnectCompletedState.c)
 *     SetConsoleSwitchInProgress @ 0x1C00BADB0 (SetConsoleSwitchInProgress.c)
 *     CleanupRemoteHandles @ 0x1C00BC4C0 (CleanupRemoteHandles.c)
 *     LW_BrushInit @ 0x1C00BFBB0 (LW_BrushInit.c)
 *     GreDxgkSessionConnected @ 0x1C00BFD34 (GreDxgkSessionConnected.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00C9B60 (DrvEscapeRemoteDrivers.c)
 *     GreMultiUserInitSession @ 0x1C00CAD50 (GreMultiUserInitSession.c)
 *     GreGdoDeviceIoControlEx @ 0x1C00CB510 (GreGdoDeviceIoControlEx.c)
 *     wcschr @ 0x1C00CBC90 (wcschr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     GreDrvConnect @ 0x1C0140E30 (GreDrvConnect.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C014BD80 (DxgkEngNotifyDisplayChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  int v6; // r13d
  int v8; // ebx
  __int64 result; // rax
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  wchar_t *v15; // rax
  int v16; // r15d
  _DWORD *v17; // rax
  int v18; // esi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  __int64 v20; // rdx
  bool v21; // sf
  __int64 v22; // rcx
  int v23; // eax
  struct _KTIMER *v24; // rax
  int v25; // edx
  PVOID Object[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+30h] BYREF

  v6 = a2;
  v8 = 0;
  Value = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( qword_1C024FC90 )
      result = qword_1C024FC90();
    else
      result = 3221225659LL;
    if ( (int)result >= 0 )
    {
      if ( qword_1C024FC98 )
        return qword_1C024FC98(a1, a3, a4);
      else
        return 3221225659LL;
    }
    return result;
  }
  v10 = &WPP_6979b531ad8c3cd76ec9d67b62018afd_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_S(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      15,
      10,
      (__int64)&WPP_6979b531ad8c3cd76ec9d67b62018afd_Traceguids,
      (__int64)a3);
  }
  gdwHydraHint |= 8u;
  if ( (PVOID)PsGetCurrentProcess(v10, a2) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  if ( gfSwitchInProgress )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1);
  *(_QWORD *)&gpThinWireCache = &ThinWireCache;
  ghRemoteMouseChannel = *(_QWORD *)(a1 + 48);
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  ghRemoteVideoChannel = *(HANDLE *)(a1 + 32);
  ghRemoteBeepChannel = *(HANDLE *)(a1 + 40);
  ghRemoteKeyboardChannel = *(_QWORD *)(a1 + 56);
  ghRemoteThinwireChannel = *(HANDLE *)(a1 + 64);
  SetProtocolType(*(_WORD *)(a1 + 264));
  gPreviousProtocolType = *(_WORD *)(a1 + 264);
  gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
  dword_1C02490C8 = *(_DWORD *)(a1 + 276);
  gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
  gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
  gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
  gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
  gRemotePreviousMonitorsCount = gRemoteNumMonitors;
  *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  xmmword_1C02490F0 = *(_OWORD *)(a1 + 178);
  qword_1C0249100 = *(_QWORD *)(a1 + 194);
  gWinStationInfo = *(_OWORD *)(a1 + 202);
  word_1C0249168 = *(_WORD *)(a1 + 218);
  xmmword_1C024916C = *(_OWORD *)(a1 + 220);
  dword_1C024917C = *(_DWORD *)(a1 + 236);
  memset(&gstrBaseWinStationName, 0, 0x40uLL);
  *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
  xmmword_1C0249030 = *(_OWORD *)(a1 + 96);
  xmmword_1C0249040 = *(_OWORD *)(a1 + 112);
  xmmword_1C0249050 = *(_OWORD *)(a1 + 128);
  v15 = wcschr(&gstrBaseWinStationName, 0x23u);
  if ( v15 )
    *v15 = 0;
  v16 = gbRemoteFxSession;
  gbRemoteFxSession = *(_DWORD *)(a1 + 292);
  dword_1C024B240 = *(_DWORD *)(a1 + 292);
  if ( *(_DWORD *)(a1 + 292) )
    qword_1C024B244 = *(_QWORD *)(a1 + 296);
  SetConnectedState(1, gbConnectCompleted);
  if ( (unsigned int)IsRemoteConnection() )
  {
    FastGetProfileIntW(0LL, 39LL, (const WCHAR *)L"CursorBlinkEnable", 0, &Value, 0);
    v17 = gpsi;
    if ( !Value )
    {
      *((_DWORD *)gpsi + 559) &= ~4u;
      goto LABEL_26;
    }
  }
  else
  {
    v17 = gpsi;
  }
  v17[559] |= 4u;
LABEL_26:
  v18 = -1073741637;
  if ( gVideoFileObject )
  {
    if ( ghRemoteVideoChannel )
      goto LABEL_54;
    goto LABEL_51;
  }
  if ( !ghRemoteVideoChannel )
  {
LABEL_51:
    if ( (unsigned int)GreMultiUserInitSession(
                         (__int64)&gRemoteContext,
                         (__int64)ghRemoteThinwireChannel,
                         *(__int64 *)&gpThinWireCache,
                         gRemoteNumMonitors,
                         gRemotePrimaryMonitor,
                         (__int64)gVideoFileObject,
                         (__int64)gThinwireFileObject,
                         v6,
                         a3,
                         19,
                         &gRemoteDisplayDeviceName) )
      goto LABEL_54;
    v8 = -1073741823;
    goto LABEL_53;
  }
  Object[0] = 0LL;
  v8 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, Object, 0LL);
  if ( v8 < 0 )
    goto LABEL_32;
  gVideoFileObject = Object[0];
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0]);
  Object[0] = 0LL;
  v8 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, Object, 0LL);
  gThinwireFileObject = Object[0];
  if ( v8 < 0 )
    goto LABEL_32;
  if ( (unsigned int)GreMultiUserInitSession(
                       (__int64)&gRemoteContext,
                       (__int64)ghRemoteThinwireChannel,
                       *(__int64 *)&gpThinWireCache,
                       gRemoteNumMonitors,
                       gRemotePrimaryMonitor,
                       (__int64)gVideoFileObject,
                       (__int64)Object[0],
                       v6,
                       a3,
                       19,
                       &gRemoteDisplayDeviceName) )
  {
    if ( (unsigned int)IsRemoteConnection() )
    {
      v8 = GreGdoDeviceIoControlEx(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)Object, 0);
      if ( v8 < 0 )
        goto LABEL_32;
      v8 = GreDrvConnect(&gRemoteContext);
    }
LABEL_53:
    if ( v8 < 0 )
      goto LABEL_32;
LABEL_54:
    if ( ghRemoteBeepChannel )
    {
      Object[0] = 0LL;
      v8 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, Object, 0LL);
      gpRemoteBeepDevice = Object[0];
    }
    if ( v8 >= 0 )
    {
      if ( !gbNonServiceSession || gbVideoInitialized )
      {
        IsRemoteConnection();
        GreDxgkSessionConnected();
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v25,
            15,
            11,
            (__int64)&WPP_6979b531ad8c3cd76ec9d67b62018afd_Traceguids,
            gSessionId);
        }
        v8 = 0;
      }
      else if ( InitVideo(a4) )
      {
        if ( qword_1C024FCA0 )
          v23 = qword_1C024FCA0();
        else
          v23 = -1073741637;
        if ( (v23 < 0 || (unsigned int)LW_BrushInit())
          && (InitLoadResources(0),
              v24 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 0x744B7355u),
              (gptmrWD = v24) != 0LL) )
        {
          KeInitializeTimerEx(v24, SynchronizationTimer);
          IsRemoteConnection();
          GreDxgkSessionConnected();
          DispBrokerAsyncSessionSwitched();
          gbVideoInitialized = 1;
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        SetConnectedState(0, 0);
        v8 = -1073741823;
      }
    }
    goto LABEL_32;
  }
  v8 = -1073741823;
LABEL_32:
  KeSetEvent(gpevtVideoInitialized, 1, 0);
  v21 = v8 < 0;
  if ( !v8 )
  {
    if ( !gProtocolType )
      RtlSetActiveConsoleId((unsigned int)gSessionId);
    if ( qword_1C024FCB0 )
      v18 = qword_1C024FCB0();
    if ( v18 >= 0 && qword_1C024FCB8 )
      qword_1C024FCB8();
    if ( (unsigned int)IsRemoteConnection() )
      DrvEscapeRemoteDrivers(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned __int16)gProtocolType,
        (__int64)qword_1C024B228,
        6u,
        0LL,
        0);
    SetConnectCompletedState(1);
    v21 = 0;
  }
  if ( v21 )
  {
    gbRemoteFxSession = v16;
    dword_1C024B240 = v16;
    CleanupRemoteHandles(&gRemoteContext, v20);
  }
  SetConsoleSwitchInProgress(0);
  LOBYTE(v22) = 1;
  DxgkEngNotifyDisplayChange(v22);
  return (unsigned int)v8;
}
