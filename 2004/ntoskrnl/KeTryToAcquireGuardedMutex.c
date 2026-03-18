/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x140272BA0
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140272BC0 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
