/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C0014D10
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C0015790 (Win32kBaseUserInitialize.c)
 * Callees:
 *     xxxSystemParametersInfo @ 0x1C00116E0 (xxxSystemParametersInfo.c)
 *     FastGetProfileIntFromID @ 0x1C0013D80 (FastGetProfileIntFromID.c)
 *     OpenCacheKeyEx @ 0x1C0014290 (OpenCacheKeyEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0014BC8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     CreateKernelEvent @ 0x1C0015350 (CreateKernelEvent.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C001561C (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     InitVideo @ 0x1C00552E4 (InitVideo.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     InitLoadResources @ 0x1C00AAC44 (InitLoadResources.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C0142130 (-DrvDriverFailure@@YAJXZ.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C0142444 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01425E0 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateObjectDirectory @ 0x1C029A988 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  int v0; // edx
  int v1; // r14d
  _UNKNOWN **v2; // rcx
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  int ObjectDirectory; // ebx
  struct _KTHREAD *v24; // rcx
  void *v25; // rdi
  void *v26; // rdi
  int v27; // edx
  __int64 v28; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  PERESOURCE *DomainLockRef; // rax
  PERESOURCE *v36; // rbx
  struct tagKERNELHANDLETABLEENTRY *v37; // rsi
  __int64 v38; // rax
  PERESOURCE *v39; // rdi
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  int v41; // [rsp+38h] [rbp-D0h] BYREF
  int v42; // [rsp+3Ch] [rbp-CCh] BYREF
  int v43; // [rsp+40h] [rbp-C8h] BYREF
  int v44; // [rsp+44h] [rbp-C4h] BYREF
  int v45; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  PVOID MappedBase; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  __int64 DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING ValueName_8; // [rsp+80h] [rbp-88h] BYREF
  __int64 v52; // [rsp+90h] [rbp-78h]
  unsigned __int8 v53; // [rsp+98h] [rbp-70h]
  GUID v54; // [rsp+9Ch] [rbp-6Ch] BYREF
  _QWORD v55[10]; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+108h] [rbp+0h] BYREF
  int *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+138h] [rbp+30h] BYREF
  int *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+168h] [rbp+60h] BYREF
  int *v63; // [rsp+188h] [rbp+80h]
  __int64 v64; // [rsp+190h] [rbp+88h]
  _BYTE KeyValueInformation[12]; // [rsp+198h] [rbp+90h] BYREF
  int v66; // [rsp+1A4h] [rbp+9Ch]
  _BYTE v67[12]; // [rsp+1B0h] [rbp+A8h] BYREF
  int v68; // [rsp+1BCh] [rbp+B4h]

  memset(v55, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v55[1]);
  v1 = 0;
  v55[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v55[3]) = 28;
  LOBYTE(v55[6]) = -1;
  Object = 0LL;
  MappedBase = 0LL;
  DestinationString = 0LL;
  v2 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v0,
      14,
      22,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v54 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v53 = 1;
    v30 = PsGetCurrentThreadWin32Thread(v3);
    v52 = v30;
    if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v52 + 48)) )
    {
      EtwActivityIdControl(3u, &v54);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v31, v32) )
        {
          v43 = v53;
          v58 = 4LL;
          v57 = &v43;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199F7, (int)&v54, 0, 3u, &v56);
        }
      }
    }
  }
  else
  {
    v52 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v52 && (*(_DWORD *)(v52 + 48) || *(int *)(v52 + 24) > 0) )
  {
    *(_DWORD *)(v52 + 44) = 1;
    *(GUID *)(v52 + 28) = v54;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v12) )
      {
        v44 = v53;
        v61 = 4LL;
        v60 = &v44;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199A0, (int)&v54, 0, 3u, &v59);
        v33 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v33 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v33, v34) )
      {
        v45 = v53;
        v64 = 4LL;
        v63 = &v45;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199CD, (int)&v54, 0, 3u, &v62);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v15 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v15),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v19 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( v19
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v19 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v19 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      v36 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( ExIsResourceAcquiredExclusiveLite(*v36) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v36);
      v37 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v37 + 2);
          v38 = *(_QWORD *)v37;
          *((_QWORD *)v37 + 2) = 0LL;
          if ( !*(_DWORD *)(v38 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v39 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v39 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          ExReleaseResourceAndLeaveCriticalRegion(*v39);
          HMUnlockObject(*(_QWORD *)v37);
          tagDomLock::LockExclusive((tagDomLock *)v39);
          v37 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v36);
    }
  }
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  if ( gbNonServiceSession )
  {
    Length[0] = gSessionId;
    RtlStringCchPrintfW(
      szWindowStationDirectory,
      256LL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      *(_QWORD *)Length,
      L"\\Windows\\WindowStations");
  }
  else
  {
    RtlStringCchCopyW(szWindowStationDirectory, 0x100uLL, L"\\Windows\\WindowStations");
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    gpEventPnPWainting = CreateKernelEvent(SynchronizationEvent);
    if ( !gpEventPnPWainting
      || (FastGetProfileIntFromID(0, 39, 0x268u, 1, &gbSnapShotWindowsAndMonitors, 0),
          FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0),
          *((_DWORD *)gpsi + 559) |= 4u,
          (gpEventDiconnectDesktop = CreateKernelEvent(SynchronizationEvent)) == 0) )
    {
      ObjectDirectory = -1073741801;
      goto LABEL_52;
    }
    if ( !gbNonServiceSession || gbFirstInteractiveSession )
    {
      ObjectDirectory = ReserveUserSessionViews(&Object, &MappedBase);
      if ( ObjectDirectory < 0 )
        goto LABEL_52;
      if ( !InitVideo((__int64)v55) )
      {
        ObjectDirectory = DrvDriverFailure();
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_52;
      }
      MmUnmapViewInSessionSpace(MappedBase);
      ObfDereferenceObject(Object);
      gbVideoInitialized = 1;
      DestinationString = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, &DestinationString, 8u, 0LL, 0);
    }
    v24 = KeGetCurrentThread();
    gbUserInitialized = 1;
    ObjectDirectory = xxxCreateThreadInfo(v24);
    if ( ObjectDirectory >= 0 )
    {
      if ( giDelayedPowerTimeout )
      {
        xxxSystemParametersInfo(0x51u, giDelayedPowerTimeout, 0LL, 0);
        xxxSystemParametersInfo(0x52u, giDelayedPowerTimeout, 0LL, 0);
        giDelayedPowerTimeout = 0;
      }
      ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
      if ( ObjectDirectory >= 0 )
      {
        if ( (!gbNonServiceSession || gbFirstInteractiveSession) && qword_1C0257C68 )
          qword_1C0257C68();
        if ( gbFirstInteractiveSession && !gbSetupDPIInitialized && gbNonServiceSession )
          SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v55);
        InitLoadResources(0LL);
        DestinationString_8 = 0LL;
        ResultLength[0] = 0;
        v41 = gdwPolicyFlags;
        do
        {
          v25 = OpenCacheKeyEx(0LL, 51LL, 0x20019u, &v41);
          if ( !v25 )
          {
            v1 = 0;
            goto LABEL_44;
          }
          RtlInitUnicodeString(&DestinationString_8, L"ConvertibleSlateMode");
          if ( ZwQueryValueKey(
                 v25,
                 &DestinationString_8,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 ResultLength) < 0 )
          {
            v1 = v41 != 0 ? v1 : 0;
          }
          else
          {
            v1 = v66;
            v41 = 0;
          }
          ZwClose(v25);
        }
        while ( v41 );
        if ( !v1 )
        {
LABEL_44:
          *((_DWORD *)gpsi + 559) &= ~8u;
          goto LABEL_45;
        }
        *((_DWORD *)gpsi + 559) |= 8u;
LABEL_45:
        ValueName_8 = 0LL;
        ResultLength[1] = 0;
        v42 = gdwPolicyFlags;
        do
        {
          v26 = OpenCacheKeyEx(0LL, 51LL, 0x20019u, &v42);
          if ( !v26 )
            goto LABEL_51;
          RtlInitUnicodeString(&ValueName_8, L"SystemDockMode");
          if ( ZwQueryValueKey(v26, &ValueName_8, KeyValuePartialInformation, v67, 0x14u, &ResultLength[1]) < 0 )
          {
            v1 = v42 != 0 ? v1 : 0;
          }
          else
          {
            v1 = v68;
            v42 = 0;
          }
          ZwClose(v26);
        }
        while ( v42 );
        if ( !v1 )
        {
LABEL_51:
          *((_DWORD *)gpsi + 559) &= ~0x10u;
          goto LABEL_52;
        }
        *((_DWORD *)gpsi + 559) |= 0x10u;
      }
    }
  }
LABEL_52:
  KeSetEvent(gpevtVideoInitialized, 1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v27,
      14,
      23,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v28);
  return (unsigned int)ObjectDirectory;
}
