/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x1409398B0
 * Callers:
 *     KiSynchCounterSetCallback @ 0x1408B7DA0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408B7EB0 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140780310 (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwReferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( ++EtwpSpinLockCountersCount == 1 )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4520) |= 0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
