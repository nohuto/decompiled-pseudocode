/*
 * XREFs of ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x1C03B5EEC
 * Callers:
 *     ?ReleaseGlobalResources@DXGMONITOR@@QEBAXXZ @ 0x1C0157914 (-ReleaseGlobalResources@DXGMONITOR@@QEBAXXZ.c)
 *     _lambda_3f5bab62b2f873cd95dd11ae8bfb13c7_::operator() @ 0x1C0157BEC (_lambda_3f5bab62b2f873cd95dd11ae8bfb13c7_--operator().c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1C03B5C9C (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     ?_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z @ 0x1C03B6AA0 (-_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0027E28 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0027E5C (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     ?RemoveUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJXZ @ 0x1C03B6118 (-RemoveUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(
        DxgMonitor::MonitorUsb4State *this,
        char a2)
{
  if ( !a2 )
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (void **)this + 12,
      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 4,
    0LL);
  DxgMonitor::Usb4HostRouterPoFxRef::RemoveUsb4HRPowerRef((DxgMonitor::MonitorUsb4State *)((char *)this + 64));
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 8,
    0LL);
}
