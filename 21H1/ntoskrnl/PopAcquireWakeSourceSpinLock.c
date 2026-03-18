/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x1403883E8
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x140569750 (PopUpdateWakeSourceWorker.c)
 *     PopHandleWakeSources @ 0x140993A80 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140993B9C (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
