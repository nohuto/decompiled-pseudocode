/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14038BE98
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056F420 (PopUpdateWakeSourceWorker.c)
 *     PopHandleWakeSources @ 0x140999410 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x14099952C (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
