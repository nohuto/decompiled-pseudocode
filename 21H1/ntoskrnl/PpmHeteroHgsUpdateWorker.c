/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x140572110
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A4748 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  LOBYTE(v0) = 1;
  PpmHeteroHgsUpdateQueued = 0;
  return PpmReinitializeHeteroEngine(v0);
}
