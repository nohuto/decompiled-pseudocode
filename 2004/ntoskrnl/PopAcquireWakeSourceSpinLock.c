/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x140389358
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x140569DA0 (PopUpdateWakeSourceWorker.c)
 *     PopHandleWakeSources @ 0x1409950C0 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x1409951DC (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
