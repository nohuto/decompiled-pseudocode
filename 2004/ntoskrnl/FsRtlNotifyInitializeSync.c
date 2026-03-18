/*
 * XREFs of FsRtlNotifyInitializeSync @ 0x1406E1510
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406E08E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406E1100 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __stdcall FsRtlNotifyInitializeSync(PNOTIFY_SYNC *NotifySync)
{
  struct _KEVENT *PoolWithTag; // rbx

  *NotifySync = 0LL;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)528, 0x48uLL, 0x4E725346u);
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  PoolWithTag->Header.LockNV = 1;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
  PoolWithTag[2].Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag[2].Header.WaitListHead.Blink) = 0;
  *NotifySync = (PNOTIFY_SYNC)PoolWithTag;
}
