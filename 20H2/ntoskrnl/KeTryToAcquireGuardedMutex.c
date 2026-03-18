/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x1402027B0
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x1402027D0 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
