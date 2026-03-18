/*
 * XREFs of MonitorCleanupGlobal @ 0x1C006B194
 * Callers:
 *     DxgkUnload @ 0x1C0301B10 (DxgkUnload.c)
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x1C03B1678 (-DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ.c)
 *     ?DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ @ 0x1C03B342C (-DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ.c)
 *     ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C03B4AF4 (-MonitorCleanupAdditionalTiming@@YAXXZ.c)
 */

__int64 __fastcall MonitorCleanupGlobal(__int64 a1, __int64 a2)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rbx

  WdLogNewEntry5_WdTrace(a1, a2);
  IoUnregisterPlugPlayNotification(MONITOR_MGR::_pInterfaceNotificationHandle);
  v2 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  Flink = MONITOR_MGR::_MonitorPendingEventTraceHead.Flink;
  KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v2);
  if ( Flink != &MONITOR_MGR::_MonitorPendingEventTraceHead )
    WdLogSingleEntry0(2LL);
  MONITOR_MGR::DestroyStaticUSB4Class();
  MonitorCleanupAdditionalTiming();
  DxgMonitor::EDIDCACHE::DeleteGlobalCache();
  return 0LL;
}
