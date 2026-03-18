/*
 * XREFs of ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x1C006B150
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C020FDD0 (MonitorCreateMonitorManager.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02BFA44 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1C03B3260 (--1MONITOR_MGR@@UEAA@XZ.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::`vector deleting destructor'(MONITOR_MGR *P, char a2)
{
  MONITOR_MGR::~MONITOR_MGR(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
