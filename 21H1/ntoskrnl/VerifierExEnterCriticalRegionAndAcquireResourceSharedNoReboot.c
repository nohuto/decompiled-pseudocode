/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot @ 0x1409DF070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot()
{
  return ((__int64 (*)(void))pXdvExEnterCriticalRegionAndAcquireResourceShared)();
}
