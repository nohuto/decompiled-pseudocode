/*
 * XREFs of ?_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z @ 0x1C01577D4
 * Callers:
 *     MonitorCancelSkippedDepartures @ 0x1C0157684 (MonitorCancelSkippedDepartures.c)
 * Callees:
 *     ?CancelSkippedDepartures@MonitorUsb4State@DxgMonitor@@QEAAXXZ @ 0x1C01581C0 (-CancelSkippedDepartures@MonitorUsb4State@DxgMonitor@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CancelSkippedDepartures(MONITOR_MGR *this, unsigned int a2)
{
  __int64 v2; // rbx
  int MonitorInstance; // edi
  DxgMonitor::MonitorUsb4State *v5; // rcx
  struct DXGMONITOR *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  v7 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v2, 0, &v7);
  if ( MonitorInstance >= 0 )
  {
    v5 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)v7 + 33);
    if ( *((_BYTE *)v5 + 8) )
      DxgMonitor::MonitorUsb4State::CancelSkippedDepartures(v5);
  }
  else
  {
    WdLogSingleEntry2(2LL, v2, this);
  }
  return (unsigned int)MonitorInstance;
}
