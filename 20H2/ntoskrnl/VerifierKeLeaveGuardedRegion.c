/*
 * XREFs of VerifierKeLeaveGuardedRegion @ 0x1409D6400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeLeaveGuardedRegion()
{
  return ((__int64 (*)(void))pXdvKeLeaveGuardedRegion)();
}
