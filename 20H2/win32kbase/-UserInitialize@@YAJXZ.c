/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C008DFF4
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C008B1C0 (Win32kBaseUserInitialize.c)
 * Callees:
 *     InitLoadResources @ 0x1C0020864 (InitLoadResources.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0032934 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     OpenCacheKeyEx @ 0x1C00375B0 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxSystemParametersInfo @ 0x1C008BBE0 (xxxSystemParametersInfo.c)
 *     FastGetProfileIntFromID @ 0x1C008D760 (FastGetProfileIntFromID.c)
 *     CreateKernelEvent @ 0x1C008F2F0 (CreateKernelEvent.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C008FB80 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008FCEC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     InitVideo @ 0x1C0095238 (InitVideo.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C0139A94 (-DrvDriverFailure@@YAJXZ.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C0139DA8 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0139F44 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateObjectDirectory @ 0x1C0292F28 (InitCreateObjectDirectory.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int ObjectDirectory; // ebx
  struct _KTHREAD *v26; // rcx
  void *v27; // rdi
  void *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // rax
  unsigned int v35; // r8d
  PERESOURCE *DomainLockRef; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  PERESOURCE *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PERESOURCE *v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  int v58; // [rsp+38h] [rbp-D0h] BYREF
  int v59; // [rsp+3Ch] [rbp-CCh] BYREF
  int v60; // [rsp+40h] [rbp-C8h] BYREF
  int v61; // [rsp+44h] [rbp-C4h] BYREF
  int v62; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  PVOID MappedBase; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  __int64 DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING ValueName_8; // [rsp+80h] [rbp-88h] BYREF
  __int64 v69; // [rsp+90h] [rbp-78h]
  unsigned __int8 v70; // [rsp+98h] [rbp-70h]
  GUID v71; // [rsp+9Ch] [rbp-6Ch] BYREF
  _QWORD v72[10]; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+108h] [rbp+0h] BYREF
  int *v74; // [rsp+128h] [rbp+20h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+138h] [rbp+30h] BYREF
  int *v77; // [rsp+158h] [rbp+50h]
  __int64 v78; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+168h] [rbp+60h] BYREF
  int *v80; // [rsp+188h] [rbp+80h]
  __int64 v81; // [rsp+190h] [rbp+88h]
  _BYTE KeyValueInformation[12]; // [rsp+198h] [rbp+90h] BYREF
  int v83; // [rsp+1A4h] [rbp+9Ch]
  _BYTE v84[12]; // [rsp+1B0h] [rbp+A8h] BYREF
  int v85; // [rsp+1BCh] [rbp+B4h]

  memset(v72, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v72[1]);
  v1 = 0;
  v72[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v72[3]) = 28;
  LOBYTE(v72[6]) = -1;
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
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v71 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v70 = 1;
    v34 = PsGetCurrentThreadWin32Thread(v3);
    v69 = v34;
    if ( v34 && (*(int *)(v34 + 24) > 0 || *(_DWORD *)(v69 + 48)) )
    {
      EtwActivityIdControl(3u, &v71);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v60 = v70;
        v75 = 4LL;
        v74 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &v71,
          0LL,
          3u,
          &v73);
      }
    }
  }
  else
  {
    v69 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v69 && (*(_DWORD *)(v69 + 48) || *(int *)(v69 + 24) > 0) )
  {
    *(_DWORD *)(v69 + 44) = 1;
    *(GUID *)(v69 + 28) = v71;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v61 = v70;
        v78 = 4LL;
        v77 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &v71,
          0LL,
          3u,
          &v76);
        v35 = dword_1C0244A70;
      }
      if ( v35 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v62 = v70;
        v81 = 4LL;
        v80 = &v62;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &v71,
          0LL,
          3u,
          &v79);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v14 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v14),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( v18
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v18 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v18 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v22, v23, v24);
      v41 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
      if ( ExIsResourceAcquiredExclusiveLite(*v41) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v41);
      v50 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v50[2];
          v51 = *v50;
          v50[2] = 0LL;
          if ( !*(_DWORD *)(v51 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48, v49);
          v54 = (PERESOURCE *)GetDomainLockRef(12LL, v46, v48, v49);
          if ( v54 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v55, v56);
          ExReleaseResourceAndLeaveCriticalRegion(*v54);
          HMUnlockObject(*v50);
          tagDomLock::LockExclusive(v54);
          v50 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v41);
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
      0x100uLL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      *(_QWORD *)Length,
      L"\\Windows\\WindowStations");
  }
  else
  {
    RtlStringCchCopyW(szWindowStationDirectory, 0x100uLL, (size_t *)L"\\Windows\\WindowStations");
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
      if ( !InitVideo(v72) )
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
    v26 = KeGetCurrentThread();
    gbUserInitialized = 1;
    ObjectDirectory = xxxCreateThreadInfo(v26);
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
        if ( (!gbNonServiceSession || gbFirstInteractiveSession) && qword_1C024FCA8 )
          qword_1C024FCA8();
        if ( gbFirstInteractiveSession && !gbSetupDPIInitialized && gbNonServiceSession )
          SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v72);
        InitLoadResources(0);
        DestinationString_8 = 0LL;
        ResultLength[0] = 0;
        v58 = gdwPolicyFlags;
        do
        {
          v27 = OpenCacheKeyEx(0LL, 51LL, 0x20019u, &v58);
          if ( !v27 )
          {
            v1 = 0;
            goto LABEL_44;
          }
          RtlInitUnicodeString(&DestinationString_8, L"ConvertibleSlateMode");
          if ( ZwQueryValueKey(
                 v27,
                 &DestinationString_8,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 ResultLength) < 0 )
          {
            v1 = v58 != 0 ? v1 : 0;
          }
          else
          {
            v1 = v83;
            v58 = 0;
          }
          ZwClose(v27);
        }
        while ( v58 );
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
        v59 = gdwPolicyFlags;
        do
        {
          v28 = OpenCacheKeyEx(0LL, 51LL, 0x20019u, &v59);
          if ( !v28 )
            goto LABEL_51;
          RtlInitUnicodeString(&ValueName_8, L"SystemDockMode");
          if ( ZwQueryValueKey(v28, &ValueName_8, KeyValuePartialInformation, v84, 0x14u, &ResultLength[1]) < 0 )
          {
            v1 = v59 != 0 ? v1 : 0;
          }
          else
          {
            v1 = v85;
            v59 = 0;
          }
          ZwClose(v28);
        }
        while ( v59 );
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
    LOBYTE(v29) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v29,
      14,
      23,
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
  return (unsigned int)ObjectDirectory;
}
