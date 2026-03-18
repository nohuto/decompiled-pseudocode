/*
 * XREFs of ?IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01A9B2C
 * Callers:
 *     MonitorGetIsAutoColorManagementSupported @ 0x1C01A9AC4 (MonitorGetIsAutoColorManagementSupported.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N@Z @ 0x1C01DE228 (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020BB20 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C0209C5C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

bool __fastcall DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(DxgMonitor::MonitorColorState *this)
{
  char v1; // r9

  v1 = 0;
  if ( *((_BYTE *)this + 385) )
    return !DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
  return v1;
}
