/*
 * XREFs of GreDecQuotaCount @ 0x1C00A24C0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreDecQuotaCount(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d

  GreAcquireHmgrSemaphore(a1, a2, a3);
  --*(_DWORD *)(a1 + 60);
  return GreReleaseHmgrSemaphore(v5, v4, v6);
}
