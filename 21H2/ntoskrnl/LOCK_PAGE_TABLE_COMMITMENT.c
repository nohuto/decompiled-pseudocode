/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14031698C
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MmAssignProcessToJob @ 0x140605C30 (MmAssignProcessToJob.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14064C180 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14069F198 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406E9484 (MiFreeToSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockExclusiveEx(a2 + 1232, 0LL);
}
