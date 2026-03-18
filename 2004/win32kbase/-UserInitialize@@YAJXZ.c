/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C002C58C
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C002BEF0 (Win32kBaseUserInitialize.c)
 * Callees:
 *     InitLoadResources @ 0x1C0010780 (InitLoadResources.c)
 *     xxxSystemParametersInfo @ 0x1C0025210 (xxxSystemParametersInfo.c)
 *     InitVideo @ 0x1C002B12C (InitVideo.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C002C0D4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C002C1EC (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     CreateKernelEvent @ 0x1C002C530 (CreateKernelEvent.c)
 *     FastGetProfileIntFromID @ 0x1C002ED20 (FastGetProfileIntFromID.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002F194 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     OpenCacheKeyEx @ 0x1C007AF00 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C013BDE4 (-DrvDriverFailure@@YAJXZ.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C013C0F8 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013C294 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateObjectDirectory @ 0x1C0293A10 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  int v0; // edx
  int v1; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  int ObjectDirectory; // ebx
  struct _KTHREAD *v25; // rcx
  void *v26; // rdi
  void *v27; // rdi
  int v28; // edx
  __int64 v29; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
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
  struct tagKERNELHANDLETABLEENTRY *v50; // rsi
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
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v71 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v70 = 1;
    v31 = PsGetCurrentThreadWin32Thread();
    v69 = v31;
    if ( v31 && (*(int *)(v31 + 24) > 0 || *(_DWORD *)(v69 + 48)) )
    {
      EtwActivityIdControl(3u, &v71);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v32, v33) )
        {
          v60 = v70;
          v75 = 4LL;
          v74 = &v60;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E87, (int)&v71, 0, 3u, &v73);
        }
      }
    }
  }
  else
  {
    v69 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
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
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v10) )
      {
        v61 = v70;
        v78 = 4LL;
        v77 = &v61;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E30, (int)&v71, 0, 3u, &v76);
        v34 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v34 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v34, v35) )
      {
        v62 = v70;
        v81 = 4LL;
        v80 = &v62;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E5D, (int)&v71, 0, 3u, &v79);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v13 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v13),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19, v18, v20, v21);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      v41 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
      if ( ExIsResourceAcquiredExclusiveLite(*v41) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v41);
      v50 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v50 + 2);
          v51 = *(_QWORD *)v50;
          *((_QWORD *)v50 + 2) = 0LL;
          if ( !*(_DWORD *)(v51 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48, v49);
          v54 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v54 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v55, v56);
          ExReleaseResourceAndLeaveCriticalRegion(*v54);
          HMUnlockObject(*(_QWORD *)v50);
          tagDomLock::LockExclusive((tagDomLock *)v54);
          v50 = gpducstulHead;
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
    gpEventPnPWainting = (__int64)CreateKernelEvent(SynchronizationEvent, 1u);
    if ( !gpEventPnPWainting
      || (FastGetProfileIntFromID(0, 39, 0x268u, 1, &gbSnapShotWindowsAndMonitors, 0),
          FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0),
          *((_DWORD *)gpsi + 559) |= 4u,
          (gpEventDiconnectDesktop = (__int64)CreateKernelEvent(SynchronizationEvent, 0)) == 0) )
    {
      ObjectDirectory = -1073741801;
      goto LABEL_52;
    }
    if ( !gbNonServiceSession || gbFirstInteractiveSession )
    {
      ObjectDirectory = ReserveUserSessionViews(&Object, &MappedBase);
      if ( ObjectDirectory < 0 )
        goto LABEL_52;
      if ( !InitVideo((__int64)v72) )
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
    v25 = KeGetCurrentThread();
    gbUserInitialized = 1;
    ObjectDirectory = xxxCreateThreadInfo(v25);
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
        if ( (!gbNonServiceSession || gbFirstInteractiveSession) && qword_1C0251CA8 )
          qword_1C0251CA8();
        if ( gbFirstInteractiveSession && !gbSetupDPIInitialized && gbNonServiceSession )
          SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v72);
        InitLoadResources(0);
        DestinationString_8 = 0LL;
        ResultLength[0] = 0;
        v58 = gdwPolicyFlags;
        do
        {
          v26 = (void *)OpenCacheKeyEx(0LL, 51LL, 131097LL, &v58);
          if ( !v26 )
          {
            v1 = 0;
            goto LABEL_44;
          }
          RtlInitUnicodeString(&DestinationString_8, L"ConvertibleSlateMode");
          if ( ZwQueryValueKey(
                 v26,
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
          ZwClose(v26);
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
          v27 = (void *)OpenCacheKeyEx(0LL, 51LL, 131097LL, &v59);
          if ( !v27 )
            goto LABEL_51;
          RtlInitUnicodeString(&ValueName_8, L"SystemDockMode");
          if ( ZwQueryValueKey(v27, &ValueName_8, KeyValuePartialInformation, v84, 0x14u, &ResultLength[1]) < 0 )
          {
            v1 = v59 != 0 ? v1 : 0;
          }
          else
          {
            v1 = v85;
            v59 = 0;
          }
          ZwClose(v27);
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
    LOBYTE(v28) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v28,
      14,
      23,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v29);
  return (unsigned int)ObjectDirectory;
}
