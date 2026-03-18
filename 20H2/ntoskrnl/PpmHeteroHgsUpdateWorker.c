/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x140576190
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B4E88 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  LOBYTE(v0) = 1;
  PpmHeteroHgsUpdateQueued = 0;
  return PpmReinitializeHeteroEngine(v0);
}
