/*
 * XREFs of ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1C01DBEE4
 * Callers:
 *     ?ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x1C01DBEB0 (-ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B3F4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?ReadDWordWithDefault@MonitorDataStore@DxgMonitor@@UEBAKW4MonitorDataStoreBehavior@2@PEBGK@Z @ 0x1C021BF50 (-ReadDWordWithDefault@MonitorDataStore@DxgMonitor@@UEBAKW4MonitorDataStoreBehavior@2@PEBGK@Z.c)
 *     ?TryReadBool@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_N@Z @ 0x1C03B9770 (-TryReadBool@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_N@Z.c)
 *     ?TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEAK@Z @ 0x1C03B97D0 (-TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEAK@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z @ 0x1C01DC02C (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char v4; // bl
  char v7; // si
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+68h] [rbp+28h] BYREF

  v20 = 0;
  v4 = 0;
  v7 = a2;
  if ( (a2 & 8) != 0 )
  {
    v16 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v17 = *v16;
    v19[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, void **))(v17 + 24))(v16, a2, v19) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v18, v19[0], a3, &v20) )
    {
      v4 = 1;
      *a4 = v20;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v19);
  }
  if ( (v7 & 1) != 0 )
  {
    v13 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v14 = *v13;
    v19[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, __int64, void **))(v14 + 16))(v13, a2, 2LL, v19) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v15, v19[0], a3, &v20) )
    {
      v4 = 1;
      *a4 = v20;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v19);
  }
  if ( (v7 & 2) != 0 )
  {
    v9 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v10 = *v9;
    v19[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, void **))(v10 + 8))(v9, a2, v19) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v11, v19[0], a3, &v20) )
    {
      v4 = 1;
      *a4 = v20;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v19);
  }
  return v4;
}
