/*
 * XREFs of Win32kBaseDriverEntry @ 0x1C029C0C0
 * Callers:
 *     <none>
 * Callees:
 *     GetWin32kDriverObject @ 0x1C0004810 (GetWin32kDriverObject.c)
 *     InitializeWin32KSyscallFilter @ 0x1C0011DD0 (InitializeWin32KSyscallFilter.c)
 *     RtlLoadStringOrError @ 0x1C0014890 (RtlLoadStringOrError.c)
 *     CreateKernelEvent @ 0x1C0015350 (CreateKernelEvent.c)
 *     PowerIsDimTimeOutManual @ 0x1C0015974 (PowerIsDimTimeOutManual.c)
 *     InputInitialize @ 0x1C001E64C (InputInitialize.c)
 *     Win32AllocPagedLookasideList @ 0x1C001F320 (Win32AllocPagedLookasideList.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x1C001F6C4 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     CreateKernelSemaphore @ 0x1C0021520 (CreateKernelSemaphore.c)
 *     RIMInitialize @ 0x1C0021580 (RIMInitialize.c)
 *     InitializeWin32kCall @ 0x1C003593C (InitializeWin32kCall.c)
 *     CoreMsgInitialize @ 0x1C003AF3C (CoreMsgInitialize.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00474C0 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     OPMInitialize @ 0x1C004A9C8 (OPMInitialize.c)
 *     WinSqmStartSession @ 0x1C004B0E8 (WinSqmStartSession.c)
 *     InitializeGraphicsInfrastructure @ 0x1C004C254 (InitializeGraphicsInfrastructure.c)
 *     WinSqmIsOptedInEx @ 0x1C004CB00 (WinSqmIsOptedInEx.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C004CED4 (InitializeTelemetryAssertsKMByName.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C004E888 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C004EBC4 (-CheckInitialSessions@@YAJXZ.c)
 *     ApiSetEditionInitializeMoveSizeList @ 0x1C0050938 (ApiSetEditionInitializeMoveSizeList.c)
 *     IsTelemetryAssertsSupported @ 0x1C0051868 (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x1C0051894 (IsUserkTraceLoggingSupported.c)
 *     McGenEventRegister_EtwRegister @ 0x1C0051EB4 (McGenEventRegister_EtwRegister.c)
 *     RetrieveCurrentDisplayState @ 0x1C00547D8 (RetrieveCurrentDisplayState.c)
 *     IsValidGuiThreadContext @ 0x1C0067BFC (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0067D28 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0067E5C (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C008A870 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     SysEntryGetW32pServiceLimitFilter @ 0x1C01FDD74 (SysEntryGetW32pServiceLimitFilter.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C0280650 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0280744 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     wil_InitializeFeatureStaging @ 0x1C0299078 (wil_InitializeFeatureStaging.c)
 *     Win32UserInitialize @ 0x1C0299728 (Win32UserInitialize.c)
 *     InitCreateUserCrit @ 0x1C029B0F0 (InitCreateUserCrit.c)
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
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
  __int64 v29; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v31; // rdi
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  HANDLE CurrentProcessId; // rax
  __int64 v41; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  PERESOURCE *v43; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD OutputBuffer[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+B8h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v48[32]; // [rsp+F8h] [rbp-10h] BYREF
  _WORD v49[80]; // [rsp+118h] [rbp+10h] BYREF

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
    dword_1C02518F4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    CurrentDisplayState = -1073741823;
LABEL_15:
  if ( dword_1C0256D10 == 1 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C0258DB0 )
    qword_1C0258DB0();
  if ( CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = InitializeWppLogging(v6);
    if ( CurrentDisplayState >= 0 )
    {
      v7 = qword_1C0257BE0 ? qword_1C0257BE0() : -1073741637;
      if ( v7 >= 0 )
      {
        if ( qword_1C0257BE8 )
          CurrentDisplayState = qword_1C0257BE8();
        else
          CurrentDisplayState = -1073741637;
      }
    }
  }
  if ( dword_1C0256D10 == 2 )
    CurrentDisplayState = -1073741801;
  if ( qword_1C0258BA0 )
    v8 = qword_1C0258BA0();
  else
    v8 = -1073741637;
  if ( v8 >= 0 )
  {
    v9 = qword_1C0258BA8 ? qword_1C0258BA8() : 0;
    if ( !v9 && CurrentDisplayState >= 0 )
      CurrentDisplayState = -1073741801;
  }
  if ( dword_1C0256D10 == 3 )
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
    TlgRegisterAggregateProviderEx(&dword_1C0247378);
  }
  if ( dword_1C0256D10 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  v11 = 64LL;
  if ( dword_1C0256D10 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = *(PVOID *)(a1 + 24);
  qword_1C0254A58 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C0254A48 = (__int64)&gtmrAdjustmentListHead;
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
  qword_1C0253658 = (__int64)&gPendingNotifiesList;
  gPendingNotifiesList = (__int64)&gPendingNotifiesList;
  ApiSetEditionInitializeMoveSizeList();
  if ( qword_1C0257B50 )
    v13 = qword_1C0257B50();
  else
    v13 = -1073741637;
  if ( v13 >= 0 && qword_1C0257B58 )
    qword_1C0257B58();
  if ( qword_1C0257B60 )
    v14 = qword_1C0257B60();
  else
    v14 = -1073741637;
  if ( v14 >= 0 && qword_1C0257B68 )
    qword_1C0257B68();
  if ( BCryptGenRandom(0LL, &gCookie, 8u, 2u) < 0 )
    goto LABEL_80;
  *(_QWORD *)&gCookie &= ~0x8000000000000000uLL;
  if ( qword_1C0257BC0 )
    v16 = qword_1C0257BC0();
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C0257BC8 )
    qword_1C0257BC8(1LL);
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
  if ( qword_1C0256E58 )
    qword_1C0256E58(Win32KDriverUnload);
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
    v19 = qword_1C0256E20 ? qword_1C0256E20() : 0LL;
    v20 = qword_1C0256E18 ? qword_1C0256E18() : 0;
    v21 = qword_1C0256E10 ? qword_1C0256E10() : 0LL;
    KeAddSystemServiceTable(v21, gpCountTable, v20, v19, 1);
    if ( !gSessionId )
    {
      if ( qword_1C0256E40 )
        v22 = qword_1C0256E40();
      else
        v22 = 0LL;
      if ( qword_1C0256E30 )
        v23 = qword_1C0256E30();
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
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v48, 1);
  v27 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v48);
  EtwTraceAcquiredExclusiveUserCrit(v28);
  gptiCurrent = v27;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v43);
    while ( 1 )
    {
      v31 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v29 = *v31;
      v31[2] = 0LL;
      if ( !*(_DWORD *)(v29 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      HMUnlockObject(*v31);
      tagDomLock::LockExclusive(DomainLockRef);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*v43);
  }
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  if ( CurrentDisplayState < 0 )
  {
    UserSessionSwitchLeaveCrit(v32);
    goto LABEL_80;
  }
  UserSessionSwitchLeaveCrit(v32);
  if ( !gSessionId )
  {
    if ( !qword_1C0256E48 || (qword_1C0256E48(), !gSessionId) )
      DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  KeQueryPerformanceCounter(&gliQpcFreq);
  RIMInitialize();
  CurrentDisplayState = CoreMsgInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  if ( qword_1C0257B70 )
    v33 = qword_1C0257B70();
  else
    v33 = -1073741637;
  if ( v33 >= 0 && qword_1C0257B78 )
    qword_1C0257B78(&gMagnContext);
  McGenEventRegister_EtwRegister();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C0258D98 )
    qword_1C0258D98();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C024B250,
              (unsigned __int16 *)W32kTraceLoggingEnableCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C024B218, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C024B1A8, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C024B170,
              (unsigned __int16 *)W32kBaseInputEnableCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C024C960,
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
  TlgRegisterAggregateProviderEx(&dword_1C024B1E0);
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( qword_1C0257B80 )
    v34 = qword_1C0257B80();
  else
    v34 = -1073741637;
  if ( v34 >= 0 && qword_1C0257B88 )
    qword_1C0257B88();
  if ( qword_1C0257B90 )
    v35 = qword_1C0257B90();
  else
    v35 = -1073741637;
  if ( v35 >= 0 && qword_1C0257B98 )
    qword_1C0257B98();
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
    || (RtlLoadStringOrError(0x268u, v49, 80, 0), hModuleWin = MmUserProbeAddress, !(unsigned __int8)InitializeGre()) )
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
  dword_1C025319C = LODWORD(OutputBuffer[3]) == 1;
  dword_1C02531A8 = HIDWORD(OutputBuffer[3]) == 0;
  dword_1C02531C4 = LOBYTE(OutputBuffer[6]);
  dword_1C02531BC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C02531A4 = 1;
  dword_1C02531C8 = HIDWORD(OutputBuffer[6]) != 0;
  dword_1C0253150 = 1;
  qword_1C0253118 = 0LL;
  qword_1C0253130 = 0LL;
  qword_1C0253128 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C0253138 = 0LL;
  qword_1C0253140 = 0LL;
  v36 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C0253120 = (v36 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  dword_1C0253148 = 0;
  dword_1C02531D0 = 0;
  giDimTimeOutMs = 1000 * HIDWORD(OutputBuffer[2]);
  qword_1C0253168 = OutputBuffer[5];
  dword_1C0253160 = HIDWORD(OutputBuffer[4]);
  dword_1C0253158 = OutputBuffer[4];
  dword_1C02531CC = BYTE1(OutputBuffer[6]);
  gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v36);
  dword_1C0253174 = dword_1C0253158;
  dword_1C0253184 = dword_1C0253160;
  dword_1C0253178 = -1;
  dword_1C025317C = -1;
  dword_1C0253180 = -1;
  dword_1C0253188 = -1;
  dword_1C025318C = -1;
  dword_1C0253190 = -1;
  byte_1C0253194 = 0;
  dword_1C0253170 = -1;
  gbPowerHighPrecisionBrightnessSupported = 0;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState < 0 )
      goto LABEL_80;
    LODWORD(v41) = gPowerTransitionsState != 0 ? 3 : 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v41, 4LL, 0LL, 0LL, 0, 0);
  }
  ExInitializeRundownProtection(&gWinstaRunRef);
  if ( (int)InputInitialize() < 0 )
    goto LABEL_80;
  CurrentDisplayState = OPMInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  v37 = qword_1C0257BA0 ? qword_1C0257BA0() : -1073741637;
  if ( v37 >= 0 )
  {
    CurrentDisplayState = qword_1C0257BA8 ? qword_1C0257BA8() : -1073741637;
    if ( CurrentDisplayState < 0 )
      goto LABEL_80;
  }
  v38 = qword_1C0257BB0 ? qword_1C0257BB0() : -1073741637;
  if ( v38 >= 0
    && (!qword_1C0257BB8 ? (CurrentDisplayState = -1073741637) : (CurrentDisplayState = qword_1C0257BB8()),
        CurrentDisplayState < 0)
    || (!qword_1C0258D70 ? (v39 = -1073741637) : (v39 = qword_1C0258D70()),
        v39 >= 0
     && (!qword_1C0258D78 ? (CurrentDisplayState = -1073741637) : (CurrentDisplayState = qword_1C0258D78()),
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
