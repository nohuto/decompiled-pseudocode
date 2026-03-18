/*
 * XREFs of ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C0018390
 * Callers:
 *     MonitorReleaseMonitorPendingEvent @ 0x1C01586F8 (MonitorReleaseMonitorPendingEvent.c)
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C02F1490 (--1MONITOR_MGR@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MONITOR_MGR::_ReleaseMonitorPendingEvent(PVOID P, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  KIRQL v5; // al
  _QWORD *v6; // r8
  PVOID *v7; // rdx

  if ( !P )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((int *)P + 4) <= 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(P, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 4, 0xFFFFFFFF) == 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
    v6 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v7 = (PVOID *)*((_QWORD *)P + 1), *v7 != P) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v5);
    ExFreePoolWithTag(P, 0);
  }
}
