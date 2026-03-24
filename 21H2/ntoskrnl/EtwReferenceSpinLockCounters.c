/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x14093CEB0
 * Callers:
 *     KiSynchCounterSetCallback @ 0x1408BAEA0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BAFB0 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402EE5A0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140797FD0 (EtwpUpdateGlobalGroupMasks.c)
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
