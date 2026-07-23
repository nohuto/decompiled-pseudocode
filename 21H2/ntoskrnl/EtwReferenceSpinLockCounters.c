/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x14093D080
 * Callers:
 *     KiSynchCounterSetCallback @ 0x1408BB000 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BB110 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407981D0 (EtwpUpdateGlobalGroupMasks.c)
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
