/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01D476C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C01D4920 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C01D47C8 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C01D4830 (MonitorIsUsingSimulatedMonitor.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C01D5A2C (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3)
{
  int v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h]

  v5 = 0;
  v6 = 0;
  *a3 = 0;
  MonitorIsUsingSimulatedMonitor(a1);
  MonitorGetNumConnectedMonitor(a1, &v5);
  return 0LL;
}
