/*
 * XREFs of GreIncQuotaCount @ 0x1C003BBA0
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x1C003BA48 (HMChangeOwnerPheProcessWorker.c)
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
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
