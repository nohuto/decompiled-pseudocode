/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     InputUnInitialize @ 0x1C0007D60 (InputUnInitialize.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WinSqmEndSession @ 0x1C0071CF4 (WinSqmEndSession.c)
 *     DCompositionSessionUninitialize @ 0x1C008133C (DCompositionSessionUninitialize.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0084168 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C0084BB8 (MultiUserNtGreCleanup.c)
 *     Win32FreePagedLookasideList @ 0x1C00851C0 (Win32FreePagedLookasideList.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C0085EA8 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V_ea_1C0085EA8.c)
 *     ?Destroy@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C008622C (-Destroy@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     UnloadWin32kCall @ 0x1C00A66F0 (UnloadWin32kCall.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00B7340 (-CleanupDomainLocks@@YAXXZ.c)
 *     ??1COPM@@QEAA@XZ @ 0x1C00BA574 (--1COPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C00BA680 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C00BAAF0 (UninitializeTelemetryAssertsKM.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00BBF60 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     CoreMsgUninitialize @ 0x1C00BC0A0 (CoreMsgUninitialize.c)
 *     RIMUnInitialize @ 0x1C00BD250 (RIMUnInitialize.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00BD990 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C00BEFEC (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     IsTelemetryAssertsSupported @ 0x1C00BF72C (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x1C00BF758 (IsUserkTraceLoggingSupported.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C00BFBD4 (McGenEventUnregister_EtwUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     TlgUnregisterAggregateProvider @ 0x1C0278B04 (TlgUnregisterAggregateProvider.c)
 *     WppCleanupKm @ 0x1C0278CC0 (WppCleanupKm.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  OPM *v5; // rbx
  void *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  void (*i)(void); // rsi
  unsigned int v10; // ebx
  PVOID v11; // rbx
  int v12; // eax
  REGHANDLE v13; // rcx
  REGHANDLE v14; // rcx
  REGHANDLE v15; // rcx
  REGHANDLE v16; // rcx
  REGHANDLE v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  PDRIVER_OBJECT v22; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      15,
      (__int64)&WPP_887fffb207bc3747f0ee19f0a3430899_Traceguids);
  v1 = -1073741637;
  if ( qword_1C0250DC0 )
    v2 = qword_1C0250DC0(a1);
  else
    v2 = -1073741637;
  if ( v2 >= 0 && qword_1C0250DC8 )
    qword_1C0250DC8();
  if ( qword_1C024FB40 )
    v3 = qword_1C024FB40();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C024FB48 )
    qword_1C024FB48();
  DCompositionSessionUninitialize();
  if ( qword_1C024FB60 )
    v4 = qword_1C024FB60();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C024FB68 )
    qword_1C024FB68();
  v5 = qword_1C024ABD8;
  if ( qword_1C024ABD8 )
  {
    COPM::~COPM(qword_1C024ABD8);
    OPM::OPMFreeMemory(v5, v6);
  }
  gdwHydraHint |= 0x80u;
  qword_1C024ABD8 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v7 = *(_QWORD **)(gpDispInfo + 24);
    if ( v7 )
    {
      do
      {
        v8 = (_QWORD *)*v7;
        Win32FreePool((__int64)v7);
        v7 = v8;
      }
      while ( v8 );
      *(_QWORD *)(gpDispInfo + 24) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup();
  if ( qword_1C0248D48 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v10 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C0248D48 + 32 * v10 + 24) )
          i();
        ++v10;
      }
      while ( v10 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  CleanupDomainLocks();
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    Win32FreePagedLookasideList((__int64)gpStackRefLookAside);
  v11 = gpUserTypeIsolation;
  if ( gpUserTypeIsolation )
  {
    if ( *(_QWORD *)gpUserTypeIsolation )
      NSInstrumentation::CTypeIsolation<36864,144>::Destroy(*(PVOID *)gpUserTypeIsolation);
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy((__int64)v11);
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
    Win32FreePool(gpDispInfo);
  if ( gpkdiStatic )
    Win32FreePool(gpkdiStatic);
  if ( ghSectionKernelHandleTable )
  {
    if ( gpKernelHandleTable )
      MmUnmapViewInSessionSpace(gpKernelHandleTable);
    ObfDereferenceObject(ghSectionKernelHandleTable);
  }
  if ( qword_1C024FB70 )
    v12 = qword_1C024FB70();
  else
    v12 = -1073741637;
  if ( v12 >= 0 && qword_1C024FB78 )
    qword_1C024FB78(&gMagnContext);
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C0250DE0 )
    qword_1C0250DE0();
  if ( gbTraceLoggingInitialized )
  {
    v13 = qword_1C0243270;
    qword_1C0243270 = 0LL;
    dword_1C0243250 = 0;
    EtwUnregister(v13);
    v14 = qword_1C0243238;
    qword_1C0243238 = 0LL;
    dword_1C0243218 = 0;
    EtwUnregister(v14);
    v15 = qword_1C02431C8;
    qword_1C02431C8 = 0LL;
    dword_1C02431A8 = 0;
    EtwUnregister(v15);
    v16 = qword_1C0243190;
    qword_1C0243190 = 0LL;
    dword_1C0243170 = 0;
    EtwUnregister(v16);
    v17 = qword_1C0244A90;
    qword_1C0244A90 = 0LL;
    dword_1C0244A70 = 0;
    EtwUnregister(v17);
    if ( InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
    {
      Win32FreePagedLookasideList((__int64)InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = 0LL;
    }
  }
  TlgUnregisterAggregateProvider(&dword_1C02431E0);
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::`scalar deleting destructor'(gpAsyncKeyEventMonitor);
    gpAsyncKeyEventMonitor = 0LL;
  }
  McGenEventUnregister_EtwUnregister();
  if ( qword_1C024FB80 )
    v18 = qword_1C024FB80();
  else
    v18 = -1073741637;
  if ( v18 >= 0 && qword_1C024FB88 )
    qword_1C024FB88();
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
  if ( qword_1C0250BF0 )
    v19 = qword_1C0250BF0();
  else
    v19 = -1073741637;
  if ( v19 >= 0 && qword_1C0250BF8 )
    v20 = qword_1C0250BF8();
  else
    v20 = 0;
  if ( qword_1C024FC30 )
    v21 = qword_1C024FC30();
  else
    v21 = -1073741637;
  if ( v21 >= 0 && qword_1C024FC38 )
    qword_1C024FC38();
  if ( !v20 )
  {
    if ( qword_1C024FC10 )
      v1 = qword_1C024FC10();
    if ( v1 >= 0 && qword_1C024FC18 )
      qword_1C024FC18();
  }
  TlgUnregisterAggregateProvider(&dword_1C023F378);
  UninitializeTelemetryAssertsKM();
  v22 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    if ( qword_1C02519D0 )
      qword_1C02519D0(v22);
    WppCleanupKm(v22);
  }
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C0250DF8 )
    qword_1C0250DF8();
  UnloadWin32kCall();
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
}
