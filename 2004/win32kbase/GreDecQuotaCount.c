/*
 * XREFs of GreDecQuotaCount @ 0x1C003FEE0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreDecQuotaCount(__int64 a1)
{
  GreAcquireHmgrSemaphore();
  --*(_DWORD *)(a1 + 60);
  return GreReleaseHmgrSemaphore();
}
