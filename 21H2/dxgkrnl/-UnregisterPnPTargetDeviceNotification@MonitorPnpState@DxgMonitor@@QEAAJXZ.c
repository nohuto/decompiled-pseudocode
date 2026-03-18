/*
 * XREFs of ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x1C03B6CE0
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02076C0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0225FB8 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B55CC (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0027E28 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0027E5C (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@QEAAXXZ @ 0x1C006B8F0 (-reset@-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wi.c)
 */

__int64 __fastcall DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(
        DxgMonitor::MonitorPnpState *this,
        __int64 a2)
{
  __int64 v3; // rsi
  NTSTATUS v4; // eax
  unsigned int v5; // eax

  LODWORD(v3) = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( *((_QWORD *)this + 7) )
  {
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)this + 3, 0);
    v3 = v4;
    if ( v4 < 0 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      WdLogSingleEntry2(2LL, v5, v3);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)this + 3,
    0LL);
  wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset((struct _UNICODE_STRING *)this + 3);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 4,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 5,
    0LL);
  return (unsigned int)v3;
}
