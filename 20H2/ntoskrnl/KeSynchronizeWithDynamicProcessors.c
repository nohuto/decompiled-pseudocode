/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x1406CC0DC
 * Callers:
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x140893798 (IoEnableIrpCredits.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140958580 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 */

void KeSynchronizeWithDynamicProcessors()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v0, 0);
    if ( (KiDynamicProcessorLock.Count & 1) == 0 )
    {
      ExAcquireFastMutex(&KiDynamicProcessorLock);
      KeReleaseGuardedMutex(&KiDynamicProcessorLock);
    }
  }
}
