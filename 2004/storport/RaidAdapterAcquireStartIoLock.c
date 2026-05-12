/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C000CAE8
 * Callers:
 *     StorportTimerDpc @ 0x1C0001A70 (StorportTimerDpc.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000CA10 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015AC4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C002D2B8 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0030CD8 (RaidInitializePerfOptsPassive.c)
 *     StorAcquireSpinLockEx @ 0x1C0037088 (StorAcquireSpinLockEx.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00069A8 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 704) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 696), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}
