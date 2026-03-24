/*
 * XREFs of ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C005DEC8
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C012A0BC (MonitorGetCCDMonitorID.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C018F74C (MonitorNotifyDeviceNodeReady.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C0191394 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     <none>
 */

struct DXGMONITOR *__fastcall DXGMONITOR::_GetAttachedPhysicalMonitor(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rax

  if ( *((_DWORD *)this + 108) == 1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v3);
  }
  return (struct DXGMONITOR *)*((_QWORD *)this + 55);
}
