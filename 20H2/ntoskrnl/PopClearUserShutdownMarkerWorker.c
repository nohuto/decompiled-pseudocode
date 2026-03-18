/*
 * XREFs of PopClearUserShutdownMarkerWorker @ 0x140776560
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032FF84 (PopOkayToQueueNextWorkItem.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F6650 (PopBsdHandleRequest.c)
 */

void PopClearUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~4u;
  PopBsdHandleRequest(8);
  PopOkayToQueueNextWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
