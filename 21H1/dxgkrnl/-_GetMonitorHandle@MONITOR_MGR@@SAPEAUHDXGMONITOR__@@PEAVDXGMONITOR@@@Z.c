/*
 * XREFs of ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0009E0C
 * Callers:
 *     MonitorGetMonitorHandle @ 0x1C00EFD00 (MonitorGetMonitorHandle.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01223A0 (DxgkGetMonitorInternalInfo.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C016A684 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016B084 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
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
