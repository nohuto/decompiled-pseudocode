/*
 * XREFs of VerifierKeLeaveGuardedRegion @ 0x1409D03E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeLeaveGuardedRegion()
{
  return ((__int64 (*)(void))pXdvKeLeaveGuardedRegion)();
}
