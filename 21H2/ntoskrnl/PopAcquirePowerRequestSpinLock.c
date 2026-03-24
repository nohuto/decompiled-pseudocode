/*
 * XREFs of PopAcquirePowerRequestSpinLock @ 0x14056540C
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140281F9C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140282160 (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquirePowerRequestSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, LockHandle);
}
