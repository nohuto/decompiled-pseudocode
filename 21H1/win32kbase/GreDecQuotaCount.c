/*
 * XREFs of GreDecQuotaCount @ 0x1C0031340
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall GreDecQuotaCount(__int64 a1)
{
  GreAcquireHmgrSemaphore();
  --*(_DWORD *)(a1 + 60);
  return GreReleaseHmgrSemaphore();
}
