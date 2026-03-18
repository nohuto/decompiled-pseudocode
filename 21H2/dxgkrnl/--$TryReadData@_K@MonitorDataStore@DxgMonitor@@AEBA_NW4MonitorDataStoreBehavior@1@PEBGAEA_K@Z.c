/*
 * XREFs of ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z @ 0x1C02191F8
 * Callers:
 *     ?TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_K@Z @ 0x1C02191E0 (-TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_K@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEA_K@Z @ 0x1C02192A4 (--$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEA_K@Z.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
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
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  void *v20; // [rsp+38h] [rbp-8h] BYREF

  v19 = 0LL;
  v4 = 0;
  v7 = a2;
  if ( (a2 & 8) != 0 )
  {
    v13 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v14 = *v13;
    v20 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, void **))(v14 + 24))(v13, a2, &v20) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(v15, v20, a3, &v19) )
    {
      v4 = 1;
      *a4 = v19;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20);
  }
  if ( (v7 & 1) != 0 )
  {
    v16 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v17 = *v16;
    v20 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, __int64, void **))(v17 + 16))(v16, a2, 2LL, &v20) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(v18, v20, a3, &v19) )
    {
      v4 = 1;
      *a4 = v19;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20);
  }
  if ( (v7 & 2) != 0 )
  {
    v9 = *(__int64 **)(a1 + 16);
    LOBYTE(a2) = 1;
    v10 = *v9;
    v20 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, void **))(v10 + 8))(v9, a2, &v20) >= 0
      && (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(v11, v20, a3, &v19) )
    {
      v4 = 1;
      *a4 = v19;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20);
  }
  return v4;
}
