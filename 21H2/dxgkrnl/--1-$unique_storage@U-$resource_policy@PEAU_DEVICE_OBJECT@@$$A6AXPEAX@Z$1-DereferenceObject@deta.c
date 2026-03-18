/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C004D3F0
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C004D3D8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-Derefe.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021C1A0 (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     InvalidateChildRelationsOnAdapterCallback @ 0x1C02F2610 (InvalidateChildRelationsOnAdapterCallback.c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1C03B5C9C (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     ??1Usb4HostRouterPoFxRef@DxgMonitor@@QEAA@XZ @ 0x1C03B5D30 (--1Usb4HostRouterPoFxRef@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1C03B6BD4 (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 */

LONG_PTR __fastcall wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>(
        DxgkCompositionObject **a1)
{
  DxgkCompositionObject *v1; // rcx
  LONG_PTR result; // rax

  v1 = *a1;
  if ( v1 )
    return DxgkCompositionObject::Release(v1);
  return result;
}
