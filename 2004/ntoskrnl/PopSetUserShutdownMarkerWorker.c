/*
 * XREFs of PopSetUserShutdownMarkerWorker @ 0x140767580
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14035F184 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdHandleRequest @ 0x1403F21A4 (PopBsdHandleRequest.c)
 */

void PopSetUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) |= 4u;
  PopBsdHandleRequest(8);
  PopOkayToQueueNextWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
