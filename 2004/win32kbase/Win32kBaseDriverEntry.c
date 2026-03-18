/*
 * XREFs of Win32kBaseDriverEntry @ 0x1C02960C0
 * Callers:
 *     <none>
 * Callees:
 *     GetWin32kDriverObject @ 0x1C0004960 (GetWin32kDriverObject.c)
 *     Win32AllocPagedLookasideList @ 0x1C0008C50 (Win32AllocPagedLookasideList.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x1C0008FF4 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     RIMInitialize @ 0x1C000AF70 (RIMInitialize.c)
 *     CreateKernelSemaphore @ 0x1C000BAC0 (CreateKernelSemaphore.c)
 *     McGenEventRegister_EtwRegister @ 0x1C001B8B4 (McGenEventRegister_EtwRegister.c)
 *     PowerIsDimTimeOutManual @ 0x1C002BD6C (PowerIsDimTimeOutManual.c)
 *     CreateKernelEvent @ 0x1C002C530 (CreateKernelEvent.c)
 *     InitializeWin32KSyscallFilter @ 0x1C002CCD0 (InitializeWin32KSyscallFilter.c)
 *     RtlLoadStringOrError @ 0x1C002EF20 (RtlLoadStringOrError.c)
 *     InputInitialize @ 0x1C0034604 (InputInitialize.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00426EC (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     InitializeWin32kCall @ 0x1C00451A0 (InitializeWin32kCall.c)
 *     CoreMsgInitialize @ 0x1C0047E8C (CoreMsgInitialize.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C0054CC0 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     OPMInitialize @ 0x1C0058838 (OPMInitialize.c)
 *     WinSqmStartSession @ 0x1C0058E08 (WinSqmStartSession.c)
 *     InitializeGraphicsInfrastructure @ 0x1C0059EF4 (InitializeGraphicsInfrastructure.c)
 *     WinSqmIsOptedInEx @ 0x1C005A6E0 (WinSqmIsOptedInEx.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C005AAB4 (InitializeTelemetryAssertsKMByName.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C005C7D0 (-CheckInitialSessions@@YAJXZ.c)
 *     ApiSetEditionInitializeMoveSizeList @ 0x1C005E438 (ApiSetEditionInitializeMoveSizeList.c)
 *     IsTelemetryAssertsSupported @ 0x1C005F3C0 (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x1C005F3EC (IsUserkTraceLoggingSupported.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C00918C0 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     IsValidGuiThreadContext @ 0x1C0092A5C (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0092B88 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0093EA8 (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RetrieveCurrentDisplayState @ 0x1C00CC194 (RetrieveCurrentDisplayState.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01224A0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     SysEntryGetW32pServiceLimitFilter @ 0x1C01F8368 (SysEntryGetW32pServiceLimitFilter.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C027A650 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C027A744 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     wil_InitializeFeatureStaging @ 0x1C0293078 (wil_InitializeFeatureStaging.c)
 *     Win32UserInitialize @ 0x1C0293AF8 (Win32UserInitialize.c)
 *     InitCreateUserCrit @ 0x1C029531C (InitCreateUserCrit.c)
 *     InitializeGre @ 0x1C0296F90 (InitializeGre.c)
 */

__int64 __fastcall Win32kBaseDriverEntry(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int CurrentDisplayState; // ebx
  struct _DRIVER_OBJECT *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char v10; // al
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  char v15; // dl
  int v16; // eax
  int v17; // eax
  struct _KEVENT *PoolWithTag; // rax
  __int64 v19; // rdi
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned int W32pServiceLimitFilter; // eax
  __int64 v25; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  int v44; // eax
  int v45; // eax
  unsigned __int64 v46; // rcx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  HANDLE CurrentProcessId; // rax
  __int64 v51; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  PERESOURCE *v53; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD OutputBuffer[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+B8h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v58[32]; // [rsp+F8h] [rbp-10h] BYREF
  _WORD v59[80]; // [rsp+118h] [rbp+10h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  SystemInformation = 0LL;
  if ( (int)wil_InitializeFeatureStaging() < 0 )
  {
    if ( wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      wil_details_featureChangeNotification = 0LL;
    }
    return 3221225473LL;
  }
  CurrentDisplayState = InitializeWin32kCall(v3, v2);
  if ( CurrentDisplayState < 0 )
  {
    if ( wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      wil_details_featureChangeNotification = 0LL;
    }
    return (unsigned int)CurrentDisplayState;
  }
  InitializeTelemetryAssertsKMByName();
  EnsureRequiredApiSetExtensions();
  gpKbdTbl = (__int64)KbdTablesFallback;
  gpusMouseVKey = (__int64)&ausMouseVKey;
  gSessionId = PsGetCurrentProcessSessionId();
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  DestinationString = 0LL;
  CurrentDisplayState = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( gSessionId )
  {
    if ( gpWin32kDriverObject )
      goto LABEL_15;
    GetWin32kDriverObject();
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C024B8F4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    CurrentDisplayState = -1073741823;
LABEL_15:
  if ( dword_1C0250D30 == 1 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C0252DF0 )
    qword_1C0252DF0();
  if ( CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = InitializeWppLogging(v6);
    if ( CurrentDisplayState >= 0 )
    {
      v7 = qword_1C0251C20 ? qword_1C0251C20() : -1073741637;
      if ( v7 >= 0 )
      {
        if ( qword_1C0251C28 )
          CurrentDisplayState = qword_1C0251C28();
        else
          CurrentDisplayState = -1073741637;
      }
    }
  }
  if ( dword_1C0250D30 == 2 )
    CurrentDisplayState = -1073741801;
  if ( qword_1C0252BE0 )
    v8 = qword_1C0252BE0();
  else
    v8 = -1073741637;
  if ( v8 >= 0 )
  {
    v9 = qword_1C0252BE8 ? qword_1C0252BE8() : 0;
    if ( !v9 && CurrentDisplayState >= 0 )
      CurrentDisplayState = -1073741801;
  }
  if ( dword_1C0250D30 == 3 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
  {
    LODWORD(SystemInformation) = 8;
    CurrentDisplayState = ZwQuerySystemInformation(
                            MaxSystemInfoClass|SystemProcessInformation,
                            &SystemInformation,
                            8u,
                            0LL);
    if ( CurrentDisplayState < 0 || (v10 = 1, (SystemInformation & 0x200000000LL) == 0) )
      v10 = 0;
    gbOSTestSigningEnabled = v10;
    WdInitialize();
    TlgRegisterAggregateProviderEx(&dword_1C0241378);
  }
  if ( dword_1C0250D30 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  v11 = 64LL;
  if ( dword_1C0250D30 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = *(PVOID *)(a1 + 24);
  qword_1C024EAC8 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C024EAB8 = (__int64)&gtmrAdjustmentListHead;
  gtmrAdjustmentListHead = (__int64)&gtmrAdjustmentListHead;
  v12 = &gTimerHashTable;
  do
  {
    v12[1] = v12;
    *v12 = v12;
    v12 += 2;
    --v11;
  }
  while ( v11 );
  memset(&gTimerId, 0, 0xFE0uLL);
  qword_1C024D6C8 = (__int64)&gPendingNotifiesList;
  gPendingNotifiesList = (__int64)&gPendingNotifiesList;
  ApiSetEditionInitializeMoveSizeList();
  if ( qword_1C0251B90 )
    v13 = qword_1C0251B90();
  else
    v13 = -1073741637;
  if ( v13 >= 0 && qword_1C0251B98 )
    qword_1C0251B98();
  if ( qword_1C0251BA0 )
    v14 = qword_1C0251BA0();
  else
    v14 = -1073741637;
  if ( v14 >= 0 && qword_1C0251BA8 )
    qword_1C0251BA8();
  if ( BCryptGenRandom(0LL, &gCookie, 8u, 2u) < 0 )
    goto LABEL_80;
  *(_QWORD *)&gCookie &= ~0x8000000000000000uLL;
  if ( qword_1C0251C00 )
    v16 = qword_1C0251C00();
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C0251C08 )
    qword_1C0251C08(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  v17 = CheckInitialSessions();
  CurrentDisplayState = v17;
  if ( v17 && v17 != -1073741771 )
  {
    if ( v17 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_80;
  }
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
    RtlSetActiveConsoleId((unsigned int)gSessionId);
  if ( qword_1C0250E78 )
    qword_1C0250E78(Win32KDriverUnload);
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpW32FastMutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_89;
  PoolWithTag->Header.LockNV = 1;
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
  gpStackRefLookAside = (void *)Win32AllocPagedLookasideList(16LL, 0x616C7355u, 0x6C6F7355u, 0xFFFEu);
  if ( !gpStackRefLookAside || !(unsigned __int8)InitializeUserTypeIsolation() )
    goto LABEL_89;
  if ( !gSessionId )
  {
    v19 = qword_1C0250E40 ? qword_1C0250E40() : 0LL;
    v20 = qword_1C0250E38 ? qword_1C0250E38() : 0;
    v21 = qword_1C0250E30 ? qword_1C0250E30() : 0LL;
    KeAddSystemServiceTable(v21, gpCountTable, v20, v19, 1);
    if ( !gSessionId )
    {
      if ( qword_1C0250E60 )
        v22 = qword_1C0250E60();
      else
        v22 = 0LL;
      if ( qword_1C0250E50 )
        v23 = qword_1C0250E50();
      else
        v23 = 0LL;
      W32pServiceLimitFilter = (unsigned int)SysEntryGetW32pServiceLimitFilter();
      KeAddSystemServiceTable(v23, gpCountTable, W32pServiceLimitFilter, v22, 2);
    }
  }
  if ( !(unsigned int)InitCreateUserCrit() )
    goto LABEL_89;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v58, 1);
  v27 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v58);
  EtwTraceAcquiredExclusiveUserCrit(v28);
  gptiCurrent = v27;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext(v29) )
  {
    CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v53, v30, v31, v32);
    while ( 1 )
    {
      v38 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v36 = *v38;
      v38[2] = 0LL;
      if ( !*(_DWORD *)(v36 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v33, v34, v35);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      HMUnlockObject(*v38);
      tagDomLock::LockExclusive(DomainLockRef);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*v53);
  }
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  if ( CurrentDisplayState < 0 )
  {
    UserSessionSwitchLeaveCrit(v40, v39, v41, v42);
    goto LABEL_80;
  }
  UserSessionSwitchLeaveCrit(v40, v39, v41, v42);
  if ( !gSessionId )
  {
    if ( !qword_1C0250E68 || (qword_1C0250E68(), !gSessionId) )
      DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  KeQueryPerformanceCounter(&gliQpcFreq);
  RIMInitialize();
  CurrentDisplayState = CoreMsgInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  if ( qword_1C0251BB0 )
    v43 = qword_1C0251BB0();
  else
    v43 = -1073741637;
  if ( v43 >= 0 && qword_1C0251BB8 )
    qword_1C0251BB8(&gMagnContext);
  McGenEventRegister_EtwRegister();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C0252DD8 )
    qword_1C0252DD8();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C0245250,
              (unsigned __int16 *)W32kTraceLoggingEnableCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C0245218, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C02451A8, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C0245170,
              (unsigned __int16 *)W32kBaseInputEnableCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C0246A70,
              (unsigned __int16 *)InputCoreProviderCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = (void *)Win32AllocPagedLookasideList(
                                                                      72LL,
                                                                      0x616C7355u,
                                                                      0x6C6F7355u,
                                                                      0x10u);
  if ( !InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  gbTraceLoggingInitialized = 1;
  TlgRegisterAggregateProviderEx(&dword_1C02451E0);
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( qword_1C0251BC0 )
    v44 = qword_1C0251BC0();
  else
    v44 = -1073741637;
  if ( v44 >= 0 && qword_1C0251BC8 )
    qword_1C0251BC8();
  if ( qword_1C0251BD0 )
    v45 = qword_1C0251BD0();
  else
    v45 = -1073741637;
  if ( v45 >= 0 && qword_1C0251BD8 )
    qword_1C0251BD8();
  gpevtPTPOperation = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtPTPOperation )
    goto LABEL_89;
  gpevtSynthesizedContainerMouseInput = CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtSynthesizedContainerMouseInput )
    goto LABEL_89;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_89;
  gpevtVideoInitialized = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtVideoInitialized )
    goto LABEL_89;
  gpevtQueueReadyForCallout = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtQueueReadyForCallout )
    goto LABEL_89;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_89;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_89;
  gfMonitorPowerInProgress = 0;
  gpevtMonitorPowerWaiter = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtMonitorPowerWaiter )
    goto LABEL_89;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemSwitchInProgressWaiters
    || (gcDITHitTestWaiters = 0, (gpsemDITHitTestWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0)
    || (hModuleWinKernel = MmPageEntireDriver(Win32kBaseDriverEntry)) == 0LL
    || (RtlLoadStringOrError(0x268u, v59, 80, 0), hModuleWin = MmUserProbeAddress, !(unsigned __int8)InitializeGre()) )
  {
LABEL_89:
    CurrentDisplayState = -1073741801;
    goto LABEL_80;
  }
  CurrentDisplayState = Win32UserInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  CurrentDisplayState = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  gbTtmEnabled = OutputBuffer[7];
  giPowerOffTimeOutMs = 1000 * LODWORD(OutputBuffer[2]);
  dword_1C024D18C = LODWORD(OutputBuffer[3]) == 1;
  dword_1C024D198 = HIDWORD(OutputBuffer[3]) == 0;
  dword_1C024D1B4 = LOBYTE(OutputBuffer[6]);
  dword_1C024D1AC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C024D194 = 1;
  dword_1C024D1B8 = HIDWORD(OutputBuffer[6]) != 0;
  dword_1C024D140 = 1;
  qword_1C024D108 = 0LL;
  qword_1C024D120 = 0LL;
  qword_1C024D118 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C024D128 = 0LL;
  qword_1C024D130 = 0LL;
  v46 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C024D110 = (v46 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  dword_1C024D138 = 0;
  dword_1C024D1C0 = 0;
  giDimTimeOutMs = 1000 * HIDWORD(OutputBuffer[2]);
  qword_1C024D158 = OutputBuffer[5];
  dword_1C024D150 = HIDWORD(OutputBuffer[4]);
  dword_1C024D148 = OutputBuffer[4];
  dword_1C024D1BC = BYTE1(OutputBuffer[6]);
  gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v46);
  dword_1C024D164 = dword_1C024D148;
  dword_1C024D174 = dword_1C024D150;
  dword_1C024D168 = -1;
  dword_1C024D16C = -1;
  dword_1C024D170 = -1;
  dword_1C024D178 = -1;
  dword_1C024D17C = -1;
  dword_1C024D180 = -1;
  byte_1C024D184 = 0;
  dword_1C024D160 = -1;
  gbPowerHighPrecisionBrightnessSupported = 0;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState < 0 )
      goto LABEL_80;
    LODWORD(v51) = gPowerTransitionsState != 0 ? 3 : 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v51, 4LL, 0LL, 0LL, 0, 0);
  }
  ExInitializeRundownProtection(&gWinstaRunRef);
  if ( (int)InputInitialize() < 0 )
    goto LABEL_80;
  CurrentDisplayState = OPMInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  v47 = qword_1C0251BE0 ? qword_1C0251BE0() : -1073741637;
  if ( v47 >= 0 )
  {
    CurrentDisplayState = qword_1C0251BE8 ? qword_1C0251BE8() : -1073741637;
    if ( CurrentDisplayState < 0 )
      goto LABEL_80;
  }
  v48 = qword_1C0251BF0 ? qword_1C0251BF0() : -1073741637;
  if ( v48 >= 0
    && (!qword_1C0251BF8 ? (CurrentDisplayState = -1073741637) : (CurrentDisplayState = qword_1C0251BF8()),
        CurrentDisplayState < 0)
    || (!qword_1C0252DB0 ? (v49 = -1073741637) : (v49 = qword_1C0252DB0()),
        v49 >= 0
     && (!qword_1C0252DB8 ? (CurrentDisplayState = -1073741637) : (CurrentDisplayState = qword_1C0252DB8()),
         CurrentDisplayState < 0)) )
  {
LABEL_80:
    Win32KDriverUnload(0LL, v15);
    if ( CurrentDisplayState == -1073741822 )
      return (unsigned int)-1073741637;
    return (unsigned int)CurrentDisplayState;
  }
  if ( gSessionId )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    CurrentProcessId = PsGetCurrentProcessId();
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = CurrentProcessId;
    if ( ZwOpenProcess(&ghSMSS, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
      ghSMSS = 0LL;
  }
  return 0LL;
}
