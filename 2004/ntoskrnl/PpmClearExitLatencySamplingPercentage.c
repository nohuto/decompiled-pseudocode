/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x140560354
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     KeFlushProcessWriteBuffers @ 0x1402FCFDC (KeFlushProcessWriteBuffers.c)
 */

LONG PpmClearExitLatencySamplingPercentage()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
  PpmExitLatencySamplingPercentageSet = 0;
  PpmExitLatencySamplingPercentage = 0;
  _InterlockedOr(v1, 0);
  KeFlushProcessWriteBuffers(1);
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
