/*
 * XREFs of VerifierIoReleaseVpbSpinLock @ 0x1409CFE80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReleaseVpbSpinLock()
{
  return ((__int64 (*)(void))pXdvIoReleaseVpbSpinLock)();
}
