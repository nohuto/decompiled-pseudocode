/*
 * XREFs of VerifierKeReleaseInterruptSpinLock @ 0x1409D0490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseInterruptSpinLock()
{
  return ((__int64 (*)(void))pXdvKeReleaseInterruptSpinLock)();
}
