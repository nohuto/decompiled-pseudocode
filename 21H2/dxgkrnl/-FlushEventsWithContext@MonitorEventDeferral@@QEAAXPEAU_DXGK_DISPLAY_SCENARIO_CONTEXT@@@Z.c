/*
 * XREFs of ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C020643C (MonitorNotifyDeviceNodeReady.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02087D4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C020D1A0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03AFC58 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C03B013C (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorSetAppOverride @ 0x1C03B0ED4 (MonitorSetAppOverride.c)
 *     MonitorSetUsageClass @ 0x1C03B14A8 (MonitorSetUsageClass.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3618 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MonitorEventDeferral::FlushEventsWithContext(
        MonitorEventDeferral *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 i; // rdi

  if ( *((_QWORD *)this + 1) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
      (***((void (__fastcall ****)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))this
         + 1))(
        *((_QWORD *)this + 1),
        *((unsigned int *)this + 6 * i + 4),
        *((unsigned int *)this + 6 * i + 5),
        *((_QWORD *)this + 3 * i + 3),
        *((_DWORD *)this + 6 * i + 8),
        a2);
    *((_DWORD *)this + 16) = 0;
  }
  else
  {
    WdLogSingleEntry0(1LL);
  }
}
