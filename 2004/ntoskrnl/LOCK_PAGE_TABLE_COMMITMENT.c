/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14024A02C
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403EF2E0 (MiDeleteEmptyPageTables.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406045E8 (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406056FC (MiFreeToSubAllocatedRegion.c)
 *     MmAssignProcessToJob @ 0x1406598B0 (MmAssignProcessToJob.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406EFD48 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1232, 0LL);
}
