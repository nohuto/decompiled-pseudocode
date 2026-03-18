/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x14037FC70
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037B118 (PpmCheckCustomRun.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3);
}
