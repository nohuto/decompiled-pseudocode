/*
 * XREFs of VerifierIoReleaseCancelSpinLock @ 0x1409D5E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReleaseCancelSpinLock()
{
  return ((__int64 (*)(void))pXdvIoReleaseCancelSpinLock)();
}
