/*
 * XREFs of ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C020CC8C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01579C0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXG.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B3F4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001CB44 (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C001CBB4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ??$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@Z$$QEAPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@Z @ 0x1C001FA00 (--$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlF.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1C0027EA0 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV-$unique_ptr@U_KEY_BASIC_INFORMATION@@U-$byte_a.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C020CE28 (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(
        struct _ERESOURCE *this,
        __int64 a2)
{
  __int64 *SharedWaiters; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // r9
  char v9; // r14
  int v10; // esi
  ULONG i; // edx
  int SubkeyInfoFromRegistry; // edi
  struct _KEY_BASIC_INFORMATION *v13; // rcx
  struct _KEY_BASIC_INFORMATION *v15; // rbx
  struct _KEY_BASIC_INFORMATION *v16; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  void *v18; // [rsp+40h] [rbp-40h] BYREF
  PERESOURCE Resource; // [rsp+48h] [rbp-38h] BYREF
  struct _UNICODE_STRING v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+68h] [rbp-18h]

  SharedWaiters = (__int64 *)this[2].SharedWaiters;
  KeyHandle = 0LL;
  LOBYTE(a2) = 1;
  v22 = *(_DWORD *)L"S";
  v20.Buffer = (wchar_t *)&v21;
  v21 = *(_QWORD *)L"MODES";
  *(_QWORD *)&v20.Length = 786442LL;
  v4 = *SharedWaiters;
  v18 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, void **))(v4 + 16))(SharedWaiters, a2, 2LL, &v18);
  v6 = v5;
  if ( v5 < 0 || (v7 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, v18, &v20), v6 = v7, v7 < 0) )
  {
    WdLogSingleEntry1(7LL, v6);
  }
  else
  {
    RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
      &Resource,
      this,
      1);
    v9 = 0;
    v10 = 1;
    for ( i = 0; ; i = v10++ )
    {
      v16 = 0LL;
      SubkeyInfoFromRegistry = DxgkRetrieveSubkeyInfoFromRegistry(KeyHandle, i, (void **)&v16, v8);
      if ( SubkeyInfoFromRegistry < 0 )
      {
        v13 = v16;
        if ( !v16 )
          goto LABEL_6;
        goto LABEL_18;
      }
      v15 = v16;
      SubkeyInfoFromRegistry = DxgMonitor::MonitorModes::_ProcessMonitorResolutionKey(
                                 (DxgMonitor::MonitorModes *)this,
                                 KeyHandle,
                                 v16);
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v9 = 1;
      if ( v15 )
        operator delete[](v15);
    }
    if ( !v15 )
      goto LABEL_6;
    v13 = v15;
LABEL_18:
    operator delete[](v13);
LABEL_6:
    LODWORD(v6) = 0;
    if ( !v9 )
      LODWORD(v6) = SubkeyInfoFromRegistry;
    if ( Resource )
    {
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegion();
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v18);
  return (unsigned int)v6;
}
