/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140381A30
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037CE48 (PpmCheckCustomRun.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3);
}
