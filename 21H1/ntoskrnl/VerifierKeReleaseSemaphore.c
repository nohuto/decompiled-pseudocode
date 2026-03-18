/*
 * XREFs of VerifierKeReleaseSemaphore @ 0x1409D8340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSemaphore()
{
  return ((__int64 (*)(void))pXdvKeReleaseSemaphore)();
}
