/*
 * XREFs of GreIncQuotaCount @ 0x1C002D460
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x1C002D308 (HMChangeOwnerPheProcessWorker.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall GreIncQuotaCount(__int64 a1)
{
  unsigned int v2; // edx

  GreAcquireHmgrSemaphore();
  v2 = *(_DWORD *)(a1 + 64);
  if ( ++*(_DWORD *)(a1 + 60) > v2 )
    v2 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = v2;
  return GreReleaseHmgrSemaphore();
}
