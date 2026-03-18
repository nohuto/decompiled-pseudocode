/*
 * XREFs of PopAcquirePowerRequestSpinLock @ 0x14055FF5C
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140275FBC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140276180 (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquirePowerRequestSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, LockHandle);
}
