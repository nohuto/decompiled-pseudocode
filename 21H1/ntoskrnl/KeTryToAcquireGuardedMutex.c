/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x140340D10
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140340D30 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
