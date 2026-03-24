/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14038BD48
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056F1E0 (PopUpdateWakeSourceWorker.c)
 *     PopHandleWakeSources @ 0x140998410 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x14099852C (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
