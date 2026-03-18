/*
 * XREFs of ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C02F42E0
 * Callers:
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02F024C (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02F05BC (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016B084 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02F19AC (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::SetSDRWhiteLevel(DXGMONITOR *this, int a2)
{
  int v5; // esi

  if ( *((_DWORD *)this + 172) == a2 )
    return 255LL;
  v5 = DXGMONITOR::_SaveSDRWhiteLevelToMonitorStore(this, a2);
  if ( v5 >= 0 )
    *((_DWORD *)this + 172) = a2;
  DXGMONITOR::_MonitorTelemetry((__int64)this, 4LL, 0LL);
  return (unsigned int)v5;
}
