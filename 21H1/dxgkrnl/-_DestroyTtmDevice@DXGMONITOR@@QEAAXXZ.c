/*
 * XREFs of ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F44AC
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016CC0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02ED968 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     MonitorSetAppOverride @ 0x1C02EFF38 (MonitorSetAppOverride.c)
 *     MonitorSetUsageClass @ 0x1C02F0828 (MonitorSetUsageClass.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02F3FBC (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C0299FA8 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_DestroyTtmDevice(char **this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( this[72] )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
    DXGSESSIONMGR::DestroyTtmDevice(*((CSERIALIZEDWORKQUEUE ****)Global + 88), this[72]);
    this[72] = 0LL;
  }
}
