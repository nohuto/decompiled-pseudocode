/*
 * XREFs of ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02F40E4
 * Callers:
 *     MonitorSetEnforceWideColorMode @ 0x1C02F0374 (MonitorSetEnforceWideColorMode.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016B084 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C02F1D50 (-_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z.c)
 */

__int64 __fastcall DXGMONITOR::SetEnforceWideColorMode(DXGMONITOR *this, unsigned __int8 a2)
{
  int v5; // esi

  if ( *((_BYTE *)this + 701) == a2 )
    return 255LL;
  v5 = DXGMONITOR::_SaveWCGEnforcedToMonitorStore(this, a2);
  if ( v5 >= 0 )
    *((_BYTE *)this + 701) = a2;
  DXGMONITOR::_MonitorTelemetry((__int64)this, 5LL, 0LL);
  return (unsigned int)v5;
}
