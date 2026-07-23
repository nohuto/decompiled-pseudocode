/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x1403216DC
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405FE4DC (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140640FA0 (MiAllocateFromSubAllocatedRegion.c)
 *     MmAssignProcessToJob @ 0x1406F55A0 (MmAssignProcessToJob.c)
 *     MiFreeToSubAllocatedRegion @ 0x140700864 (MiFreeToSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockExclusiveEx(a2 + 1232, 0LL);
}
