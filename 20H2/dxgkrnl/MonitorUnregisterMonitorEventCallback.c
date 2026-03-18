/*
 * XREFs of MonitorUnregisterMonitorEventCallback @ 0x1C02F4068
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005A1C0 (--1VIDPN_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x1C02F1BD8 (-_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z.c)
 */

__int64 __fastcall MonitorUnregisterMonitorEventCallback(__int64 a1, struct HDXGMONITOREVENT__ ***a2)
{
  struct _FAST_MUTEX *v3; // rcx
  __int64 v4; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = *(struct _FAST_MUTEX **)(a1 + 96);
  if ( !v3 )
  {
    v4 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v4 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  return MONITOR_MGR::_RemoveMonitorEventHandler(v3, a2);
}
