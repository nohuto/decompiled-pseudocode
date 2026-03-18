/*
 * XREFs of PopAcquirePowerRequestSpinLock @ 0x14056393C
 * Callers:
 *     PoClearPowerRequestInternal @ 0x14036237C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140362540 (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquirePowerRequestSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, LockHandle);
}
