/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1409CEB40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1405AF6D0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive(struct _ERESOURCE *a1)
{
  if ( pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive )
    return (PVOID)pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive();
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}
