/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1C000CAB4
 * Callers:
 *     StorportTimerDpc @ 0x1C0001A70 (StorportTimerDpc.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000CA10 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015AC4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C002D2B8 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0030CD8 (RaidInitializePerfOptsPassive.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006B2C (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 704) )
    KeReleaseInStackQueuedSpinLock(a2);
  else
    RaidAdapterReleaseInterruptLock(a1, (KIRQL)a2->LockQueue.Next);
}
