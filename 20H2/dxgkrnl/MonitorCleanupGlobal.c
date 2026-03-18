/*
 * XREFs of MonitorCleanupGlobal @ 0x1C005D06C
 * Callers:
 *     DxgkUnload @ 0x1C02604C0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0305D00 (DriverEntry.c)
 * Callees:
 *     ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02F7460 (-MonitorCleanupAdditionalTiming@@YAXXZ.c)
 */

__int64 __fastcall MonitorCleanupGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  IoUnregisterPlugPlayNotification(MONITOR_MGR::_pInterfaceNotificationHandle);
  v4 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  Flink = MONITOR_MGR::_MonitorPendingEventTraceHead.Flink;
  KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v4);
  if ( Flink != &MONITOR_MGR::_MonitorPendingEventTraceHead )
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    WdLogEvent5_WdError(v8);
  }
  MonitorCleanupAdditionalTiming();
  return 0LL;
}
