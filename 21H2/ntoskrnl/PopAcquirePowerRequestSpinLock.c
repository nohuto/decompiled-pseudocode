/*
 * XREFs of PopAcquirePowerRequestSpinLock @ 0x1405C6B2C
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x1403698C4 (PopApplyLegacyPowerRequestFlags.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquirePowerRequestSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, LockHandle);
}
