/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x140563D34
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
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
