/*
 * XREFs of EtwDereferenceSpinLockCounters @ 0x1409385B4
 * Callers:
 *     KiSynchCounterSetCallback @ 0x1408B6A80 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408B6B90 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140787014 (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwDereferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( !--EtwpSpinLockCountersCount )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4520) &= ~0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
