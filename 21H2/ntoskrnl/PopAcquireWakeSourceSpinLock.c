/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x140396620
 * Callers:
 *     PopProcessDeviceWakeSource @ 0x140A51700 (PopProcessDeviceWakeSource.c)
 *     PopIsMostRecentWakeAttended @ 0x140A5179C (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140A517EC (PopNewWakeInfo.c)
 *     PopHandleWakeSources @ 0x140A51888 (PopHandleWakeSources.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
