/*
 * XREFs of PopAcquirePowerRequestSpinLock @ 0x14055F90C
 * Callers:
 *     PoClearPowerRequestInternal @ 0x14033D2AC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x14033D470 (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquirePowerRequestSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, LockHandle);
}
