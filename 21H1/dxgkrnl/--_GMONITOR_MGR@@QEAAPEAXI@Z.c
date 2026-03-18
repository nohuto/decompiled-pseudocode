/*
 * XREFs of ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C005BF60
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C0185EA4 (MonitorCreateMonitorManager.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C020D29C (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C02ECF20 (--1MONITOR_MGR@@QEAA@XZ.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::`scalar deleting destructor'(MONITOR_MGR *P)
{
  MONITOR_MGR::~MONITOR_MGR(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
