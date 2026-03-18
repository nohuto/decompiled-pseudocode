/*
 * XREFs of VerifierKeTryToAcquireGuardedMutex @ 0x1409D0640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeTryToAcquireGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeTryToAcquireGuardedMutex)();
}
