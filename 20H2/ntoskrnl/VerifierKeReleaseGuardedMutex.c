/*
 * XREFs of VerifierKeReleaseGuardedMutex @ 0x1409D6480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeReleaseGuardedMutex)();
}
