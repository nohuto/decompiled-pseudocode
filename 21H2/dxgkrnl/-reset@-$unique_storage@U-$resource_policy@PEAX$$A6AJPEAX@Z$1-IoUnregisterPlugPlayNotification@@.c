/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0027E28
 * Callers:
 *     ?Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ @ 0x1C020C5CC (-Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ.c)
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1C020C65C (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021C1A0 (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x1C03B5CF8 (--1USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x1C03B5EEC (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x1C03B6CE0 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx
  NTSTATUS result; // eax

  v4 = *a1;
  if ( v4 )
    result = IoUnregisterPlugPlayNotification(v4);
  *a1 = a2;
  return result;
}
