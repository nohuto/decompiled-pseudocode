/*
 * XREFs of xxxRemoteConnect @ 0x1C011E780
 * Callers:
 *     <none>
 * Callees:
 *     InitLoadResources @ 0x1C0010780 (InitLoadResources.c)
 *     WPP_RECORDER_SF_S @ 0x1C001A858 (WPP_RECORDER_SF_S.c)
 *     InitVideo @ 0x1C002B12C (InitVideo.c)
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C002B4B0 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 *     FastGetProfileIntW @ 0x1C002EDC0 (FastGetProfileIntW.c)
 *     IsRemoteConnection @ 0x1C0059A7C (IsRemoteConnection.c)
 *     SetConsoleSwitchInProgress @ 0x1C005AC30 (SetConsoleSwitchInProgress.c)
 *     CleanupRemoteHandles @ 0x1C005C080 (CleanupRemoteHandles.c)
 *     LW_BrushInit @ 0x1C005F890 (LW_BrushInit.c)
 *     GreDxgkSessionConnected @ 0x1C005FA14 (GreDxgkSessionConnected.c)
 *     SetProtocolType @ 0x1C00610C0 (SetProtocolType.c)
 *     SetConnectedState @ 0x1C0061400 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C0061430 (SetConnectCompletedState.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00CABA0 (DrvEscapeRemoteDrivers.c)
 *     GreMultiUserInitSession @ 0x1C00CBBF0 (GreMultiUserInitSession.c)
 *     GreGdoDeviceIoControlEx @ 0x1C00CC300 (GreGdoDeviceIoControlEx.c)
 *     wcschr @ 0x1C00CCA80 (wcschr.c)
 *     Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled @ 0x1C00CE948 (Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     GreDrvConnect @ 0x1C01432D0 (GreDrvConnect.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C014E1D0 (DxgkEngNotifyDisplayChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, __int64 a2, wchar_t *a3, __int64 a4)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  PVOID v20; // rdx
  int v21; // esi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  bool v27; // sf
  __int64 v28; // rcx
  HANDLE v29; // rcx
  int v30; // eax
  struct _KTIMER *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edx
  PVOID Object[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+30h] BYREF

  v6 = a2;
  v8 = 0;
  Value = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( qword_1C0251C90 )
      result = qword_1C0251C90();
    else
      result = 3221225659LL;
    if ( (int)result >= 0 )
    {
      if ( qword_1C0251C98 )
        return qword_1C0251C98(a1, a3, a4);
      else
        return 3221225659LL;
    }
    return result;
  }
  v10 = &WPP_6979b531ad8c3cd76ec9d67b62018afd_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0xFu,
      0xAu,
      (__int64)&WPP_6979b531ad8c3cd76ec9d67b62018afd_Traceguids,
      a3);
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
  dword_1C024B0C8 = *(_DWORD *)(a1 + 276);
  gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
  gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
  gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
  gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
  gRemotePreviousMonitorsCount = gRemoteNumMonitors;
  *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  xmmword_1C024B0F0 = *(_OWORD *)(a1 + 178);
  qword_1C024B100 = *(_QWORD *)(a1 + 194);
  gWinStationInfo = *(_OWORD *)(a1 + 202);
  word_1C024B168 = *(_WORD *)(a1 + 218);
  xmmword_1C024B16C = *(_OWORD *)(a1 + 220);
  dword_1C024B17C = *(_DWORD *)(a1 + 236);
  memset(&gstrBaseWinStationName, 0, 0x40uLL);
  *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
  xmmword_1C024B030 = *(_OWORD *)(a1 + 96);
  xmmword_1C024B040 = *(_OWORD *)(a1 + 112);
  xmmword_1C024B050 = *(_OWORD *)(a1 + 128);
  v15 = wcschr(&gstrBaseWinStationName, 0x23u);
  if ( v15 )
    *v15 = 0;
  v16 = gbRemoteFxSession;
  gbRemoteFxSession = *(_DWORD *)(a1 + 292);
  dword_1C024D230 = *(_DWORD *)(a1 + 292);
  if ( *(_DWORD *)(a1 + 292) )
    qword_1C024D234 = *(_QWORD *)(a1 + 296);
  SetConnectedState(1, gbConnectCompleted);
  if ( (unsigned int)IsRemoteConnection(v18, v17) )
  {
    FastGetProfileIntW(0LL, 39LL, (__int64)L"CursorBlinkEnable", 0, &Value, 0);
    v19 = gpsi;
    if ( !Value )
    {
      *((_DWORD *)gpsi + 559) &= ~4u;
      goto LABEL_26;
    }
  }
  else
  {
    v19 = gpsi;
  }
  v19[559] |= 4u;
LABEL_26:
  v20 = gVideoFileObject;
  v21 = -1073741637;
  if ( gVideoFileObject )
  {
    if ( ghRemoteVideoChannel )
      goto LABEL_56;
    goto LABEL_53;
  }
  if ( !ghRemoteVideoChannel )
  {
LABEL_53:
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
      goto LABEL_56;
    v8 = -1073741823;
    goto LABEL_55;
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
    if ( (unsigned int)IsRemoteConnection(v24, v23) )
    {
      v8 = GreGdoDeviceIoControlEx(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)Object, 0);
      if ( v8 < 0 )
        goto LABEL_32;
      v8 = GreDrvConnect(&gRemoteContext);
    }
LABEL_55:
    if ( v8 < 0 )
      goto LABEL_32;
LABEL_56:
    v29 = ghRemoteBeepChannel;
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
        IsRemoteConnection((__int64)v29, (__int64)v20);
        GreDxgkSessionConnected();
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v34) = 4;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v34,
            15,
            11,
            (__int64)&WPP_6979b531ad8c3cd76ec9d67b62018afd_Traceguids,
            gSessionId);
        }
        v8 = 0;
      }
      else if ( InitVideo(a4) )
      {
        if ( qword_1C0251CA0 )
          v30 = qword_1C0251CA0();
        else
          v30 = -1073741637;
        if ( (v30 < 0 || (unsigned int)LW_BrushInit())
          && (InitLoadResources(0),
              v31 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 0x744B7355u),
              (gptmrWD = v31) != 0LL) )
        {
          KeInitializeTimerEx(v31, SynchronizationTimer);
          IsRemoteConnection(v33, v32);
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
  v27 = v8 < 0;
  if ( !v8 )
  {
    if ( !gProtocolType )
      RtlSetActiveConsoleId((unsigned int)gSessionId);
    if ( qword_1C0251CB0 )
      v21 = qword_1C0251CB0();
    if ( v21 >= 0 && qword_1C0251CB8 )
      qword_1C0251CB8();
    if ( (unsigned int)IsRemoteConnection(v26, v25) )
      DrvEscapeRemoteDrivers(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned __int16)gProtocolType,
        (__int64)qword_1C024D218,
        6u,
        0LL,
        0);
    SetConnectCompletedState(1);
    v27 = 0;
  }
  if ( v27 )
  {
    gbRemoteFxSession = v16;
    dword_1C024D230 = v16;
    CleanupRemoteHandles(&gRemoteContext, v25);
  }
  SetConsoleSwitchInProgress(0);
  if ( (unsigned int)Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled() )
  {
    LOBYTE(v28) = 1;
    DxgkEngNotifyDisplayChange(v28);
  }
  return (unsigned int)v8;
}
