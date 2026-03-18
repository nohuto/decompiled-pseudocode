/*
 * XREFs of ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C005CEB0
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C0175900 (MonitorCreateMonitorManager.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C021033C (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C02F04F0 (--1MONITOR_MGR@@QEAA@XZ.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::`scalar deleting destructor'(MONITOR_MGR *P)
{
  MONITOR_MGR::~MONITOR_MGR(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
