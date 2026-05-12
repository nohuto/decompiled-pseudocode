/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1C000B974
 * Callers:
 *     StorportTimerDpc @ 0x1C0001110 (StorportTimerDpc.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000B8D0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015F54 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C002E120 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0031B48 (RaidInitializePerfOptsPassive.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B6C (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 720) )
    KeReleaseInStackQueuedSpinLock(a2);
  else
    RaidAdapterReleaseInterruptLock(a1, (KIRQL)a2->LockQueue.Next);
}
