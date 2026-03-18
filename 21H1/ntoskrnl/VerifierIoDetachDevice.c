/*
 * XREFs of VerifierIoDetachDevice @ 0x1409CFA60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoDetachDevice()
{
  return ((__int64 (*)(void))pXdvIoDetachDevice)();
}
