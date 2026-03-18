/*
 * XREFs of ?IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01E0728
 * Callers:
 *     MonitorIsAdvancedColorEnabled @ 0x1C01E06B4 (MonitorIsAdvancedColorEnabled.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209834 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020BB20 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03B03A8 (MonitorEnableDisableAdvancedColor.c)
 * Callees:
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x1C01E0760 (DxgkIsConsoleSessionDispBrokerEnabled.c)
 */

bool __fastcall DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(DxgMonitor::MonitorColorState *this)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  DxgkIsConsoleSessionDispBrokerEnabled(&v3);
  if ( v3 )
    return 0;
  else
    return *((_BYTE *)this + 384);
}
