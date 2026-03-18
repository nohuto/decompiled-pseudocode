/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01224A0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     InputUnInitialize @ 0x1C0007770 (InputUnInitialize.c)
 *     DCompositionSessionUninitialize @ 0x1C001C61C (DCompositionSessionUninitialize.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0020A78 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C00214C8 (MultiUserNtGreCleanup.c)
 *     Win32FreePagedLookasideList @ 0x1C0021AD0 (Win32FreePagedLookasideList.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C00227B8 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V_ea_1C00227B8.c)
 *     ?Destroy@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0022B3C (-Destroy@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     UnloadWin32kCall @ 0x1C0045750 (UnloadWin32kCall.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C0057870 (-CleanupDomainLocks@@YAXXZ.c)
 *     ??1COPM@@QEAA@XZ @ 0x1C005A3F4 (--1COPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C005A500 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C005A970 (UninitializeTelemetryAssertsKM.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C005BAE4 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     CoreMsgUninitialize @ 0x1C005BC60 (CoreMsgUninitialize.c)
 *     RIMUnInitialize @ 0x1C005CC80 (RIMUnInitialize.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1C005D3C0 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C005EC7C (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     IsTelemetryAssertsSupported @ 0x1C005F3C0 (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x1C005F3EC (IsUserkTraceLoggingSupported.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C005F8B4 (McGenEventUnregister_EtwUnregister.c)
 *     WinSqmEndSession @ 0x1C0060F98 (WinSqmEndSession.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     TlgUnregisterAggregateProvider @ 0x1C027A950 (TlgUnregisterAggregateProvider.c)
 *     WppCleanupKm @ 0x1C027AB0C (WppCleanupKm.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1, char a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  OPM *v6; // rbx
  void *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  void (*i)(void); // rsi
  unsigned int v11; // ebx
  PVOID v12; // rbx
  int v13; // eax
  REGHANDLE v14; // rcx
  REGHANDLE v15; // rcx
  REGHANDLE v16; // rcx
  REGHANDLE v17; // rcx
  REGHANDLE v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  PDRIVER_OBJECT v23; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      15,
      (__int64)&WPP_887fffb207bc3747f0ee19f0a3430899_Traceguids);
  v2 = -1073741637;
  if ( qword_1C0252DC0 )
    v3 = qword_1C0252DC0(a1);
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0252DC8 )
    qword_1C0252DC8();
  if ( qword_1C0251B40 )
    v4 = qword_1C0251B40();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0251B48 )
    qword_1C0251B48();
  DCompositionSessionUninitialize((__int64)a1, a2);
  if ( qword_1C0251B60 )
    v5 = qword_1C0251B60();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0251B68 )
    qword_1C0251B68();
  v6 = qword_1C024CBD0;
  if ( qword_1C024CBD0 )
  {
    COPM::~COPM(qword_1C024CBD0);
    OPM::OPMFreeMemory(v6, v7);
  }
  gdwHydraHint |= 0x80u;
  qword_1C024CBD0 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v8 = *(_QWORD **)(gpDispInfo + 24);
    if ( v8 )
    {
      do
      {
        v9 = (_QWORD *)*v8;
        Win32FreePool((__int64)v8);
        v8 = v9;
      }
      while ( v9 );
      *(_QWORD *)(gpDispInfo + 24) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup();
  if ( qword_1C024AD48 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v11 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C024AD48 + 32 * v11 + 24) )
          i();
        ++v11;
      }
      while ( v11 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  CleanupDomainLocks();
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    Win32FreePagedLookasideList((__int64)gpStackRefLookAside);
  v12 = gpUserTypeIsolation;
  if ( gpUserTypeIsolation )
  {
    if ( *(_QWORD *)gpUserTypeIsolation )
      NSInstrumentation::CTypeIsolation<36864,144>::Destroy(*(PVOID *)gpUserTypeIsolation);
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy((__int64)v12);
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
  if ( qword_1C0251B70 )
    v13 = qword_1C0251B70();
  else
    v13 = -1073741637;
  if ( v13 >= 0 && qword_1C0251B78 )
    qword_1C0251B78(&gMagnContext);
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C0252DE0 )
    qword_1C0252DE0();
  if ( gbTraceLoggingInitialized )
  {
    v14 = qword_1C0245270;
    qword_1C0245270 = 0LL;
    dword_1C0245250 = 0;
    EtwUnregister(v14);
    v15 = qword_1C0245238;
    qword_1C0245238 = 0LL;
    dword_1C0245218 = 0;
    EtwUnregister(v15);
    v16 = qword_1C02451C8;
    qword_1C02451C8 = 0LL;
    dword_1C02451A8 = 0;
    EtwUnregister(v16);
    v17 = qword_1C0245190;
    qword_1C0245190 = 0LL;
    dword_1C0245170 = 0;
    EtwUnregister(v17);
    v18 = qword_1C0246A90;
    qword_1C0246A90 = 0LL;
    dword_1C0246A70 = 0;
    EtwUnregister(v18);
    if ( InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
    {
      Win32FreePagedLookasideList((__int64)InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = 0LL;
    }
  }
  TlgUnregisterAggregateProvider(&dword_1C02451E0);
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::`scalar deleting destructor'(gpAsyncKeyEventMonitor);
    gpAsyncKeyEventMonitor = 0LL;
  }
  McGenEventUnregister_EtwUnregister();
  if ( qword_1C0251B80 )
    v19 = qword_1C0251B80();
  else
    v19 = -1073741637;
  if ( v19 >= 0 && qword_1C0251B88 )
    qword_1C0251B88();
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
  if ( qword_1C0252BF0 )
    v20 = qword_1C0252BF0();
  else
    v20 = -1073741637;
  if ( v20 >= 0 && qword_1C0252BF8 )
    v21 = qword_1C0252BF8();
  else
    v21 = 0;
  if ( qword_1C0251C30 )
    v22 = qword_1C0251C30();
  else
    v22 = -1073741637;
  if ( v22 >= 0 && qword_1C0251C38 )
    qword_1C0251C38();
  if ( !v21 )
  {
    if ( qword_1C0251C10 )
      v2 = qword_1C0251C10();
    if ( v2 >= 0 && qword_1C0251C18 )
      qword_1C0251C18();
  }
  TlgUnregisterAggregateProvider(&dword_1C0241378);
  UninitializeTelemetryAssertsKM();
  v23 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    if ( qword_1C02539D0 )
      qword_1C02539D0(v23);
    WppCleanupKm(v23);
  }
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C0252DF8 )
    qword_1C0252DF8();
  UnloadWin32kCall();
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
}
