/*
 * XREFs of ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1C03B6BD4
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C0207F60 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1C03B4DFC (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@Z$$QEAPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@Z @ 0x1C001FA00 (--$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlF.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C004D3F0 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006B7F4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@YAJ0.c)
 */

void __fastcall DxgMonitor::MonitorPnpState::~MonitorPnpState(DxgMonitor::MonitorPnpState *this)
{
  void *v2; // rcx
  char *v3; // [rsp+30h] [rbp+8h] BYREF
  void (__stdcall *v4)(PUNICODE_STRING); // [rsp+38h] [rbp+10h] BYREF

  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    operator delete[](v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = (char *)this + 48;
  v4 = RtlFreeUnicodeString;
  wistd::invoke<void (*)(_UNICODE_STRING *),wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0> *>(
    (__int64 (__fastcall **)(_QWORD))&v4,
    &v3);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)this + 5);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)this + 4);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this + 3);
}
