/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x1406F5994
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x1406F4B0C (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x1406F5960 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1406F5A00 (PsChargeProcessPagedPoolQuota.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateTablePagedPoolNoZero(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x6274624Fu);
  if ( PoolWithTag && a1 && (int)PsChargeProcessPagedPoolQuota(a1, a2) < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    return 0LL;
  }
  return PoolWithTag;
}
