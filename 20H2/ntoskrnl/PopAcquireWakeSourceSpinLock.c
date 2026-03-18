/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14038B5F8
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056D7D0 (PopUpdateWakeSourceWorker.c)
 *     PopHandleWakeSources @ 0x14099B220 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x14099B33C (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
