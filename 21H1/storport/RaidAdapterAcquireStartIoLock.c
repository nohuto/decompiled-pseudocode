/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C000C4F8
 * Callers:
 *     StorportTimerDpc @ 0x1C0001A70 (StorportTimerDpc.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000C420 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0013C54 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C002CD08 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0030790 (RaidInitializePerfOptsPassive.c)
 *     StorAcquireSpinLockEx @ 0x1C0036B08 (StorAcquireSpinLockEx.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00064E8 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 704) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 696), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}
