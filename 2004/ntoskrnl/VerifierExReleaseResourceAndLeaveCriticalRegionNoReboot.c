/*
 * XREFs of VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x1409DF3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViResourceReleaseSanityChecks @ 0x1409DF688 (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseResourceAndLeaveCriticalRegion)(a1);
}
