/*
 * XREFs of ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C
 * Callers:
 *     ??_GMonitorEventDeferral@@UEAAPEAXI@Z @ 0x1C006B460 (--_GMonitorEventDeferral@@UEAAPEAXI@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C020643C (MonitorNotifyDeviceNodeReady.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02087D4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C020D1A0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03AFC58 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C03B013C (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorSetAppOverride @ 0x1C03B0ED4 (MonitorSetAppOverride.c)
 *     MonitorSetUsageClass @ 0x1C03B14A8 (MonitorSetUsageClass.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3618 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

void __fastcall MonitorEventDeferral::~MonitorEventDeferral(MonitorEventDeferral *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &MonitorEventDeferral::`vftable';
  if ( !v1 )
  {
    if ( *((_DWORD *)this + 16) )
      MonitorEventDeferral::FlushEventsWithContext(this, 0LL);
  }
}
