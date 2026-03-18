/*
 * XREFs of ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C00095AC
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C0118150 (DxgkGetMonitorInternalInfo.c)
 *     MonitorGetMonitorHandle @ 0x1C01251F0 (MonitorGetMonitorHandle.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0187E70 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0188870 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 * Callees:
 *     <none>
 */

struct HDXGMONITOR__ *__fastcall MONITOR_MGR::_GetMonitorHandle(struct DXGMONITOR *a1, __int64 a2)
{
  __int64 v4; // rax

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  return a1;
}
