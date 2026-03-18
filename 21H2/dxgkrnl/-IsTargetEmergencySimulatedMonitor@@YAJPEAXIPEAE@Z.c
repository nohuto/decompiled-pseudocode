/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C01D5A2C
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01D476C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C01D58F0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C01B0AC4 (MonitorGetMonitorType.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(__int64 a1, __int64 a2, bool *a3)
{
  int MonitorHandle; // ebx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  struct HDXGMONITOR__ *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(a1, a2, 0, (void *)0x4D495044, &v8);
  if ( MonitorHandle >= 0 )
  {
    v7 = 0;
    MonitorHandle = MonitorGetMonitorType(v8, &v7);
    if ( MonitorHandle >= 0 )
      *a3 = v7 == 5;
    MonitorReleaseMonitorHandle(a1, (__int64)v8, (void *)0x4D495044);
  }
  return (unsigned int)MonitorHandle;
}
