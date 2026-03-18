/*
 * XREFs of xxxRemoteConnect @ 0x1C0054D30
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileIntW @ 0x1C0013EC0 (FastGetProfileIntW.c)
 *     CleanupRemoteHandles @ 0x1C004E690 (CleanupRemoteHandles.c)
 *     SetProtocolType @ 0x1C00544A0 (SetProtocolType.c)
 *     GreMultiUserInitSession @ 0x1C0054BA0 (GreMultiUserInitSession.c)
 *     SetConsoleSwitchInProgress @ 0x1C0055270 (SetConsoleSwitchInProgress.c)
 *     InitVideo @ 0x1C00552E4 (InitVideo.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C005568C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0055764 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     SetConnectCompletedState @ 0x1C0057490 (SetConnectCompletedState.c)
 *     PowerConnectionEvent @ 0x1C005966C (PowerConnectionEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0096544 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     WPP_RECORDER_SF_S @ 0x1C00A2004 (WPP_RECORDER_SF_S.c)
 *     InitLoadResources @ 0x1C00AAC44 (InitLoadResources.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00CA410 (DrvEscapeRemoteDrivers.c)
 *     wcschr @ 0x1C00CC1D0 (wcschr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     GreDrvConnect @ 0x1C0149620 (GreDrvConnect.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  int v6; // r15d
  NTSTATUS v8; // ebx
  void *v9; // rcx
  __int64 v10; // rcx
  wchar_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r13d
  int v15; // eax
  _DWORD *v16; // rax
  PVOID v17; // rdx
  int v18; // esi
  HANDLE v19; // rcx
  int v20; // eax
  int v21; // eax
  struct _KTIMER *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  bool v28; // sf
  int v29; // eax
  __int64 result; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  PVOID Object[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+30h] BYREF

  v6 = a2;
  v8 = 0;
  Value = 0;
  if ( !*(_DWORD *)a1 )
  {
    v9 = &WPP_9b12e010ec9e33ec08ae53aef64d2a2c_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_S(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        15,
        10,
        (__int64)&WPP_9b12e010ec9e33ec08ae53aef64d2a2c_Traceguids,
        (__int64)a3);
    }
    gdwHydraHint |= 8u;
    if ( (PVOID)PsGetCurrentProcess(v9, a2) != gpepCSRSS )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    if ( gfSessionSwitchBlock )
      return 3221225473LL;
    SetConsoleSwitchInProgress(1LL);
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
    dword_1C02510C8 = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
    gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
    gRemotePreviousMonitorsCount = gRemoteNumMonitors;
    *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
    xmmword_1C02510F0 = *(_OWORD *)(a1 + 178);
    qword_1C0251100 = *(_QWORD *)(a1 + 194);
    gWinStationInfo = *(_OWORD *)(a1 + 202);
    word_1C0251168 = *(_WORD *)(a1 + 218);
    xmmword_1C025116C = *(_OWORD *)(a1 + 220);
    dword_1C025117C = *(_DWORD *)(a1 + 236);
    memset(&gstrBaseWinStationName, 0, 0x40uLL);
    *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
    xmmword_1C0251030 = *(_OWORD *)(a1 + 96);
    xmmword_1C0251040 = *(_OWORD *)(a1 + 112);
    xmmword_1C0251050 = *(_OWORD *)(a1 + 128);
    v11 = wcschr(&gstrBaseWinStationName, 0x23u);
    if ( v11 )
      *v11 = 0;
    v14 = gbRemoteFxSession;
    gbRemoteFxSession = *(_DWORD *)(a1 + 292);
    dword_1C0253240 = *(_DWORD *)(a1 + 292);
    if ( *(_DWORD *)(a1 + 292) )
      qword_1C0253244 = *(_QWORD *)(a1 + 296);
    gbConnected = 1;
    if ( qword_1C0258F10 )
      v15 = qword_1C0258F10(v13, v12);
    else
      v15 = 0;
    if ( v15 )
    {
      FastGetProfileIntW(0LL, 39LL, (__int64)L"CursorBlinkEnable", 0, &Value, 0);
      v16 = gpsi;
      if ( !Value )
      {
        *((_DWORD *)gpsi + 559) &= ~4u;
        goto LABEL_18;
      }
    }
    else
    {
      v16 = gpsi;
    }
    v16[559] |= 4u;
LABEL_18:
    v17 = gVideoFileObject;
    v18 = -1073741637;
    if ( gVideoFileObject )
    {
      if ( ghRemoteVideoChannel )
        goto LABEL_21;
    }
    else if ( ghRemoteVideoChannel )
    {
      Object[0] = 0LL;
      v8 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, Object, 0LL);
      if ( v8 < 0 )
        goto LABEL_37;
      gVideoFileObject = Object[0];
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0]);
      Object[0] = 0LL;
      v8 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, Object, 0LL);
      gThinwireFileObject = Object[0];
      if ( v8 < 0 )
        goto LABEL_37;
      if ( !(unsigned int)GreMultiUserInitSession(
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
        v8 = -1073741823;
        goto LABEL_37;
      }
      if ( qword_1C0258F10 )
        v33 = qword_1C0258F10(v32, v17);
      else
        v33 = 0;
      if ( v33 )
      {
        v8 = GreDeviceIoControlImpl(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)Object, 0, 1);
        if ( v8 < 0 )
          goto LABEL_37;
        v8 = GreDrvConnect(&gRemoteContext);
      }
LABEL_79:
      if ( v8 >= 0 )
        goto LABEL_21;
LABEL_37:
      KeSetEvent(gpevtVideoInitialized, 1, 0);
      v28 = v8 < 0;
      if ( !v8 )
      {
        if ( !gProtocolType )
          RtlSetActiveConsoleId((unsigned int)gSessionId);
        if ( qword_1C0257C70 )
          v18 = qword_1C0257C70();
        if ( v18 >= 0 && qword_1C0257C78 )
          qword_1C0257C78();
        if ( qword_1C0258F10 )
          v29 = qword_1C0258F10(v27, v26);
        else
          v29 = 0;
        if ( v29 )
          DrvEscapeRemoteDrivers(
            *(_QWORD *)(gpDispInfo + 16),
            (unsigned __int16)gProtocolType,
            (_DWORD)qword_1C0253228,
            6,
            0LL,
            0);
        SetConnectCompletedState(1LL);
        v28 = 0;
      }
      if ( v28 )
      {
        gbRemoteFxSession = v14;
        dword_1C0253240 = v14;
        CleanupRemoteHandles(&gRemoteContext, v26);
      }
      SetConsoleSwitchInProgress(0LL);
      return (unsigned int)v8;
    }
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
    {
LABEL_21:
      v19 = ghRemoteBeepChannel;
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
          if ( qword_1C0258F10 )
            v34 = qword_1C0258F10(v19, v17);
          else
            v34 = 0;
          LOBYTE(v19) = v34 == 0;
          ((void (__fastcall *)(HANDLE))qword_1C02529A8)(v19);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 4;
            WPP_RECORDER_SF_d(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v35,
              15,
              11,
              (__int64)&WPP_9b12e010ec9e33ec08ae53aef64d2a2c_Traceguids,
              gSessionId);
          }
          v8 = 0;
        }
        else if ( InitVideo(a4) )
        {
          if ( qword_1C0257C60 )
            v20 = qword_1C0257C60();
          else
            v20 = -1073741637;
          if ( (v20 < 0 || (!qword_1C0257C68 ? (v21 = 0) : (v21 = qword_1C0257C68()), v21))
            && (InitLoadResources(0LL),
                v22 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL),
                (gptmrWD = v22) != 0LL) )
          {
            KeInitializeTimerEx(v22, SynchronizationTimer);
            if ( qword_1C0258F10 )
              v25 = qword_1C0258F10(v24, v23);
            else
              v25 = 0;
            LOBYTE(v24) = v25 == 0;
            ((void (__fastcall *)(__int64))qword_1C02529A8)(v24);
            DispBrokerUpdateKernelDisplayPolicies();
            DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___();
            gbVideoInitialized = 1;
          }
          else
          {
            v8 = -1073741801;
          }
        }
        else
        {
          gbConnected = 0;
          if ( gbConnectCompleted )
          {
            gbConnectCompleted = 0;
            PowerConnectionEvent();
          }
          v8 = -1073741823;
        }
      }
      goto LABEL_37;
    }
    v8 = -1073741823;
    goto LABEL_79;
  }
  if ( qword_1C0257C50 )
    result = qword_1C0257C50();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    if ( qword_1C0257C58 )
      return qword_1C0257C58(a1, a3, a4);
    else
      return 3221225659LL;
  }
  return result;
}
