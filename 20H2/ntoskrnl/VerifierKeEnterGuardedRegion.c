/*
 * XREFs of VerifierKeEnterGuardedRegion @ 0x1409D6300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeEnterGuardedRegion()
{
  return ((__int64 (*)(void))pXdvKeEnterGuardedRegion)();
}
