/*
 * XREFs of UserReAllocPoolWithQuotaZInit @ 0x1C0050000
 * Callers:
 *     <none>
 * Callees:
 *     UserReAllocPoolWithQuota @ 0x1C0050060 (UserReAllocPoolWithQuota.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 __fastcall UserReAllocPoolWithQuotaZInit(void *a1, size_t a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi

  v5 = UserReAllocPoolWithQuota(a1, a2);
  v6 = v5;
  if ( v5 && a3 > a2 )
    memset((void *)(v5 + a2), 0, a3 - a2);
  return v6;
}
