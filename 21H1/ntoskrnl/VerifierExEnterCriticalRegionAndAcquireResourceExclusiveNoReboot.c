/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot @ 0x1409DEFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot()
{
  return ((__int64 (*)(void))pXdvExEnterCriticalRegionAndAcquireResourceExclusive)();
}
