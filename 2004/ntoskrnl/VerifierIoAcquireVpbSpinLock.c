/*
 * XREFs of VerifierIoAcquireVpbSpinLock @ 0x1409CF670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAcquireVpbSpinLock()
{
  return ((__int64 (*)(void))pXdvIoAcquireVpbSpinLock)();
}
