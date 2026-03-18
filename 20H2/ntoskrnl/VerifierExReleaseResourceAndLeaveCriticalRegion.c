/*
 * XREFs of VerifierExReleaseResourceAndLeaveCriticalRegion @ 0x1409E5390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViResourceReleaseSanityChecks @ 0x1409E56A8 (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceAndLeaveCriticalRegion(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x800) != 0 )
    ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseResourceAndLeaveCriticalRegion)(a1);
}
