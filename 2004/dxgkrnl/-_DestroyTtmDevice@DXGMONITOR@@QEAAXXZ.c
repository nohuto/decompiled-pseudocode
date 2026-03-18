/*
 * XREFs of ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F8A1C
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018BCBC (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1ED8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     MonitorSetAppOverride @ 0x1C02F44A8 (MonitorSetAppOverride.c)
 *     MonitorSetUsageClass @ 0x1C02F4D98 (MonitorSetUsageClass.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02F852C (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C029E498 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_DestroyTtmDevice(char **this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( this[72] )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
    DXGSESSIONMGR::DestroyTtmDevice(*((CSERIALIZEDWORKQUEUE ****)Global + 102), this[72]);
    this[72] = 0LL;
  }
}
