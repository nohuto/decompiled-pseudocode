/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x1406719E4
 * Callers:
 *     ExpAllocateLowLevelTable @ 0x1406719B0 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1406E2798 (ExpAllocateTablePagedPool.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x140671A50 (PsChargeProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
