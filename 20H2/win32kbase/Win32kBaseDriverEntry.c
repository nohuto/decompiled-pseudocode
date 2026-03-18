/*
 * XREFs of Win32kBaseDriverEntry @ 0x1C0294600
 * Callers:
 *     <none>
 * Callees:
 *     GetWin32kDriverObject @ 0x1C0004960 (GetWin32kDriverObject.c)
 *     CreateKernelSemaphore @ 0x1C0009110 (CreateKernelSemaphore.c)
 *     RIMInitialize @ 0x1C0009170 (RIMInitialize.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C004B870 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     IsValidGuiThreadContext @ 0x1C004CDDC (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C004CF08 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C004D618 (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32AllocPagedLookasideList @ 0x1C0072710 (Win32AllocPagedLookasideList.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x1C0072AB4 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     PowerIsDimTimeOutManual @ 0x1C008B030 (PowerIsDimTimeOutManual.c)
 *     RtlLoadStringOrError @ 0x1C008D960 (RtlLoadStringOrError.c)
 *     InitializeWin32KSyscallFilter @ 0x1C008E730 (InitializeWin32KSyscallFilter.c)
 *     CreateKernelEvent @ 0x1C008F2F0 (CreateKernelEvent.c)
 *     InputInitialize @ 0x1C009C054 (InputInitialize.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00A3750 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     InitializeWin32kCall @ 0x1C00A6140 (InitializeWin32kCall.c)
 *     CoreMsgInitialize @ 0x1C00A942C (CoreMsgInitialize.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B5408 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     OPMInitialize @ 0x1C00B80D8 (OPMInitialize.c)
 *     WinSqmStartSession @ 0x1C00B8AC8 (WinSqmStartSession.c)
 *     InitializeGraphicsInfrastructure @ 0x1C00B9D78 (InitializeGraphicsInfrastructure.c)
 *     WinSqmIsOptedInEx @ 0x1C00BA860 (WinSqmIsOptedInEx.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C00BAC34 (InitializeTelemetryAssertsKMByName.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C00BCD60 (-CheckInitialSessions@@YAJXZ.c)
 *     ApiSetEditionInitializeMoveSizeList @ 0x1C00BE844 (ApiSetEditionInitializeMoveSizeList.c)
 *     IsTelemetryAssertsSupported @ 0x1C00BF72C (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x1C00BF758 (IsUserkTraceLoggingSupported.c)
 *     McGenEventRegister_EtwRegister @ 0x1C00BFD54 (McGenEventRegister_EtwRegister.c)
 *     RetrieveCurrentDisplayState @ 0x1C00CB3B0 (RetrieveCurrentDisplayState.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     SysEntryGetW32pServiceLimitFilter @ 0x1C01F6A38 (SysEntryGetW32pServiceLimitFilter.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C0278804 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C02788F8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0291078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 *     Win32UserInitialize @ 0x1C0291A10 (Win32UserInitialize.c)
 *     InitializeGre @ 0x1C0293010 (InitializeGre.c)
 *     InitCreateUserCrit @ 0x1C0293B84 (InitCreateUserCrit.c)
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
  int v15; // eax
  int v16; // eax
  struct _KEVENT *PoolWithTag; // rax
  __int64 v18; // rdi
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  unsigned int W32pServiceLimitFilter; // eax
  __int64 v24; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
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
    dword_1C02498F4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    CurrentDisplayState = -1073741823;
LABEL_15:
  if ( dword_1C024ED30 == 1 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C0250DF0 )
    qword_1C0250DF0();
  if ( CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = InitializeWppLogging(v6);
    if ( CurrentDisplayState >= 0 )
    {
      v7 = qword_1C024FC20 ? qword_1C024FC20() : -1073741637;
      if ( v7 >= 0 )
      {
        if ( qword_1C024FC28 )
          CurrentDisplayState = qword_1C024FC28();
        else
          CurrentDisplayState = -1073741637;
      }
    }
  }
  if ( dword_1C024ED30 == 2 )
    CurrentDisplayState = -1073741801;
  if ( qword_1C0250BE0 )
    v8 = qword_1C0250BE0();
  else
    v8 = -1073741637;
  if ( v8 >= 0 )
  {
    v9 = qword_1C0250BE8 ? qword_1C0250BE8() : 0;
    if ( !v9 && CurrentDisplayState >= 0 )
      CurrentDisplayState = -1073741801;
  }
  if ( dword_1C024ED30 == 3 )
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
    TlgRegisterAggregateProviderEx(&dword_1C023F378);
  }
  if ( dword_1C024ED30 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  v11 = 64LL;
  if ( dword_1C024ED30 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = *(PVOID *)(a1 + 24);
  qword_1C024CAC8 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C024CAB8 = (__int64)&gtmrAdjustmentListHead;
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
  qword_1C024B6C8 = (__int64)&gPendingNotifiesList;
  gPendingNotifiesList = (__int64)&gPendingNotifiesList;
  ApiSetEditionInitializeMoveSizeList();
  if ( qword_1C024FB90 )
    v13 = qword_1C024FB90();
  else
    v13 = -1073741637;
  if ( v13 >= 0 && qword_1C024FB98 )
    qword_1C024FB98();
  if ( qword_1C024FBA0 )
    v14 = qword_1C024FBA0();
  else
    v14 = -1073741637;
  if ( v14 >= 0 && qword_1C024FBA8 )
    qword_1C024FBA8();
  if ( BCryptGenRandom(0LL, &gCookie, 8u, 2u) < 0 )
    goto LABEL_80;
  *(_QWORD *)&gCookie &= ~0x8000000000000000uLL;
  if ( qword_1C024FC00 )
    v15 = qword_1C024FC00();
  else
    v15 = -1073741637;
  if ( v15 >= 0 && qword_1C024FC08 )
    qword_1C024FC08(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  v16 = CheckInitialSessions();
  CurrentDisplayState = v16;
  if ( v16 && v16 != -1073741771 )
  {
    if ( v16 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_80;
  }
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
    RtlSetActiveConsoleId((unsigned int)gSessionId);
  if ( qword_1C024EE78 )
    qword_1C024EE78(Win32KDriverUnload);
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
    v18 = qword_1C024EE40 ? qword_1C024EE40() : 0LL;
    v19 = qword_1C024EE38 ? qword_1C024EE38() : 0;
    v20 = qword_1C024EE30 ? qword_1C024EE30() : 0LL;
    KeAddSystemServiceTable(v20, gpCountTable, v19, v18, 1);
    if ( !gSessionId )
    {
      if ( qword_1C024EE60 )
        v21 = qword_1C024EE60();
      else
        v21 = 0LL;
      if ( qword_1C024EE50 )
        v22 = qword_1C024EE50();
      else
        v22 = 0LL;
      W32pServiceLimitFilter = (unsigned int)SysEntryGetW32pServiceLimitFilter();
      KeAddSystemServiceTable(v22, gpCountTable, W32pServiceLimitFilter, v21, 2);
    }
  }
  if ( !(unsigned int)InitCreateUserCrit() )
    goto LABEL_89;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v24);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v58, 1);
  v26 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v58, v27, v28, v29);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v26;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
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
    if ( !qword_1C024EE68 || (qword_1C024EE68(), !gSessionId) )
      DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  KeQueryPerformanceCounter(&gliQpcFreq);
  RIMInitialize();
  CurrentDisplayState = CoreMsgInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  if ( qword_1C024FBB0 )
    v43 = qword_1C024FBB0();
  else
    v43 = -1073741637;
  if ( v43 >= 0 && qword_1C024FBB8 )
    qword_1C024FBB8(&gMagnContext);
  McGenEventRegister_EtwRegister();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C0250DD8 )
    qword_1C0250DD8();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C0243250,
              (unsigned __int16 *)W32kTraceLoggingEnableCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C0243218, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C02431A8, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C0243170,
              (unsigned __int16 *)W32kBaseInputEnableCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C0244A70,
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
  TlgRegisterAggregateProviderEx(&dword_1C02431E0);
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( qword_1C024FBC0 )
    v44 = qword_1C024FBC0();
  else
    v44 = -1073741637;
  if ( v44 >= 0 && qword_1C024FBC8 )
    qword_1C024FBC8();
  if ( qword_1C024FBD0 )
    v45 = qword_1C024FBD0();
  else
    v45 = -1073741637;
  if ( v45 >= 0 && qword_1C024FBD8 )
    qword_1C024FBD8();
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
    || (RtlLoadStringOrError(0x268u, v59, 80, 0), hModuleWin = MmUserProbeAddress, !InitializeGre()) )
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
  dword_1C024B19C = LODWORD(OutputBuffer[3]) == 1;
  dword_1C024B1A8 = HIDWORD(OutputBuffer[3]) == 0;
  dword_1C024B1C4 = LOBYTE(OutputBuffer[6]);
  dword_1C024B1BC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C024B1A4 = 1;
  dword_1C024B1C8 = HIDWORD(OutputBuffer[6]) != 0;
  dword_1C024B150 = 1;
  qword_1C024B118 = 0LL;
  qword_1C024B130 = 0LL;
  qword_1C024B128 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C024B138 = 0LL;
  qword_1C024B140 = 0LL;
  v46 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C024B120 = (v46 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  dword_1C024B148 = 0;
  dword_1C024B1D0 = 0;
  giDimTimeOutMs = 1000 * HIDWORD(OutputBuffer[2]);
  qword_1C024B168 = OutputBuffer[5];
  dword_1C024B160 = HIDWORD(OutputBuffer[4]);
  dword_1C024B158 = OutputBuffer[4];
  dword_1C024B1CC = BYTE1(OutputBuffer[6]);
  gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v46);
  dword_1C024B174 = dword_1C024B158;
  dword_1C024B184 = dword_1C024B160;
  dword_1C024B178 = -1;
  dword_1C024B17C = -1;
  dword_1C024B180 = -1;
  dword_1C024B188 = -1;
  dword_1C024B18C = -1;
  dword_1C024B190 = -1;
  byte_1C024B194 = 0;
  dword_1C024B170 = -1;
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
  v47 = qword_1C024FBE0 ? qword_1C024FBE0() : -1073741637;
  if ( v47 >= 0 )
  {
    CurrentDisplayState = qword_1C024FBE8 ? qword_1C024FBE8() : -1073741637;
    if ( CurrentDisplayState < 0 )
      goto LABEL_80;
  }
  v48 = qword_1C024FBF0 ? qword_1C024FBF0() : -1073741637;
  if ( v48 >= 0
    && (!qword_1C024FBF8 ? (CurrentDisplayState = -1073741637) : (CurrentDisplayState = qword_1C024FBF8()),
        CurrentDisplayState < 0)
    || (!qword_1C0250DB0 ? (v49 = -1073741637) : (v49 = qword_1C0250DB0()),
        v49 >= 0
     && (!qword_1C0250DB8 ? (CurrentDisplayState = -1073741637) : (CurrentDisplayState = qword_1C0250DB8()),
         CurrentDisplayState < 0)) )
  {
LABEL_80:
    Win32KDriverUnload(0LL);
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
