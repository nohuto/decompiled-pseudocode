/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     DCompositionSessionUninitialize @ 0x1C0006AEC (DCompositionSessionUninitialize.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C000BB40 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C000C588 (MultiUserNtGreCleanup.c)
 *     Win32FreePagedLookasideList @ 0x1C000CB90 (Win32FreePagedLookasideList.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C000D878 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V_ea_1C000D878.c)
 *     ?Destroy@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C000DBFC (-Destroy@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     InputUnInitialize @ 0x1C001E9CC (InputUnInitialize.c)
 *     UnloadWin32kCall @ 0x1C0035EEC (UnloadWin32kCall.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C0049AE0 (-CleanupDomainLocks@@YAXXZ.c)
 *     ??1COPM@@QEAA@XZ @ 0x1C004C814 (--1COPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C004C920 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C004CD90 (UninitializeTelemetryAssertsKM.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C004E124 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     CoreMsgUninitialize @ 0x1C004E270 (CoreMsgUninitialize.c)
 *     RIMUnInitialize @ 0x1C004F110 (RIMUnInitialize.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1C004F850 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C005121C (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     IsTelemetryAssertsSupported @ 0x1C0051868 (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x1C0051894 (IsUserkTraceLoggingSupported.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C0051D50 (McGenEventUnregister_EtwUnregister.c)
 *     WinSqmEndSession @ 0x1C005437C (WinSqmEndSession.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     TlgUnregisterAggregateProvider @ 0x1C0280950 (TlgUnregisterAggregateProvider.c)
 *     WppCleanupKm @ 0x1C0280B0C (WppCleanupKm.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1, char a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  OPM *v6; // rbx
  void *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  void (*i)(void); // rsi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  PVOID v16; // rbx
  int v17; // eax
  REGHANDLE v18; // rcx
  REGHANDLE v19; // rcx
  REGHANDLE v20; // rcx
  REGHANDLE v21; // rcx
  REGHANDLE v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  PDRIVER_OBJECT v27; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      15,
      (__int64)&WPP_887fffb207bc3747f0ee19f0a3430899_Traceguids);
  v2 = -1073741637;
  if ( qword_1C0258D80 )
    v3 = qword_1C0258D80(a1);
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0258D88 )
    qword_1C0258D88();
  if ( qword_1C0257B00 )
    v4 = qword_1C0257B00();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0257B08 )
    qword_1C0257B08();
  DCompositionSessionUninitialize((__int64)a1, a2);
  if ( qword_1C0257B20 )
    v5 = qword_1C0257B20();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0257B28 )
    qword_1C0257B28();
  v6 = qword_1C0252BF0;
  if ( qword_1C0252BF0 )
  {
    COPM::~COPM(qword_1C0252BF0);
    OPM::OPMFreeMemory(v6, v7);
  }
  gdwHydraHint |= 0x80u;
  qword_1C0252BF0 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v10 = *(_QWORD **)(gpDispInfo + 24);
    if ( v10 )
    {
      do
      {
        v11 = (_QWORD *)*v10;
        Win32FreePool((__int64)v10, v8, v9);
        v10 = v11;
      }
      while ( v11 );
      *(_QWORD *)(gpDispInfo + 24) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup();
  if ( qword_1C0250D48 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v13 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C0250D48 + 32 * v13 + 24) )
          i();
        ++v13;
      }
      while ( v13 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  CleanupDomainLocks();
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    Win32FreePagedLookasideList((__int64)gpStackRefLookAside);
  v16 = gpUserTypeIsolation;
  if ( gpUserTypeIsolation )
  {
    if ( *(_QWORD *)gpUserTypeIsolation )
      NSInstrumentation::CTypeIsolation<36864,144>::Destroy(*(PVOID *)gpUserTypeIsolation);
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy((__int64)v16);
    ExFreePoolWithTag(gpUserTypeIsolation, 0);
    gpUserTypeIsolation = 0LL;
  }
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  if ( ghSectionShared )
  {
    gpsi = 0LL;
    if ( gpvSharedBase )
    {
      RtlDestroyHeap(gpvSharedAlloc);
      MmUnmapViewInSessionSpace(gpvSharedBase);
    }
    ObfDereferenceObject(ghSectionShared);
  }
  if ( gpDispInfo )
    Win32FreePool(gpDispInfo, v14, v15);
  if ( gpkdiStatic )
    Win32FreePool(gpkdiStatic, v14, v15);
  if ( ghSectionKernelHandleTable )
  {
    if ( gpKernelHandleTable )
      MmUnmapViewInSessionSpace(gpKernelHandleTable);
    ObfDereferenceObject(ghSectionKernelHandleTable);
  }
  if ( qword_1C0257B30 )
    v17 = qword_1C0257B30();
  else
    v17 = -1073741637;
  if ( v17 >= 0 && qword_1C0257B38 )
    qword_1C0257B38(&gMagnContext);
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C0258DA0 )
    qword_1C0258DA0();
  if ( gbTraceLoggingInitialized )
  {
    v18 = qword_1C024B270;
    qword_1C024B270 = 0LL;
    dword_1C024B250 = 0;
    EtwUnregister(v18);
    v19 = qword_1C024B238;
    qword_1C024B238 = 0LL;
    dword_1C024B218 = 0;
    EtwUnregister(v19);
    v20 = qword_1C024B1C8;
    qword_1C024B1C8 = 0LL;
    dword_1C024B1A8 = 0;
    EtwUnregister(v20);
    v21 = qword_1C024B190;
    qword_1C024B190 = 0LL;
    dword_1C024B170 = 0;
    EtwUnregister(v21);
    v22 = qword_1C024C980;
    qword_1C024C980 = 0LL;
    dword_1C024C960 = 0;
    EtwUnregister(v22);
    if ( InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
    {
      Win32FreePagedLookasideList((__int64)InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = 0LL;
    }
  }
  TlgUnregisterAggregateProvider(&dword_1C024B1E0);
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::`scalar deleting destructor'(gpAsyncKeyEventMonitor);
    gpAsyncKeyEventMonitor = 0LL;
  }
  McGenEventUnregister_EtwUnregister();
  if ( qword_1C0257B40 )
    v23 = qword_1C0257B40();
  else
    v23 = -1073741637;
  if ( v23 >= 0 && qword_1C0257B48 )
    qword_1C0257B48();
  CoreMsgUninitialize();
  RIMUnInitialize();
  if ( gpW32FastMutex )
  {
    ExFreePoolWithTag(gpW32FastMutex, 0);
    gpW32FastMutex = 0LL;
  }
  if ( !gSessionId )
  {
    KeRemoveSystemServiceTable(1LL);
    if ( !gSessionId )
      KeRemoveSystemServiceTable(2LL);
  }
  if ( gpCountTable )
  {
    ExFreePoolWithTag(gpCountTable, 0);
    gpCountTable = 0LL;
  }
  FreeWin32KSyscallFilter();
  if ( qword_1C0258BB0 )
    v24 = qword_1C0258BB0();
  else
    v24 = -1073741637;
  if ( v24 >= 0 && qword_1C0258BB8 )
    v25 = qword_1C0258BB8();
  else
    v25 = 0;
  if ( qword_1C0257BF0 )
    v26 = qword_1C0257BF0();
  else
    v26 = -1073741637;
  if ( v26 >= 0 && qword_1C0257BF8 )
    qword_1C0257BF8();
  if ( !v25 )
  {
    if ( qword_1C0257BD0 )
      v2 = qword_1C0257BD0();
    if ( v2 >= 0 && qword_1C0257BD8 )
      qword_1C0257BD8();
  }
  TlgUnregisterAggregateProvider(&dword_1C0247378);
  UninitializeTelemetryAssertsKM();
  v27 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    if ( qword_1C0259990 )
      qword_1C0259990(v27);
    WppCleanupKm(v27);
  }
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C0258DB8 )
    qword_1C0258DB8();
  UnloadWin32kCall();
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
}
