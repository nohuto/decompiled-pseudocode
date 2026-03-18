/*
 * XREFs of ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8
 * Callers:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C001E350 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01A267C (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01B6930 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEAE@Z @ 0x1C01E2680 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01E4480 (DpiPdoDispatchInternalIoctl.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEAE@Z @ 0x1C01F252C (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01F465C (-_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0205ED8 (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C020643C (MonitorNotifyDeviceNodeReady.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02087D4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C020D1A0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3618 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z @ 0x1C03B3BCC (-_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B4664 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C03B5660 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(_QWORD *a1, __int64 a2, char a3)
{
  struct _ERESOURCE *v4; // rdi

  *a1 = a2;
  if ( a2 )
  {
    v4 = (struct _ERESOURCE *)(a2 + 24);
    if ( a3 == 1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v4, 1u);
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v4, 1u);
    }
  }
  return a1;
}
