/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x1402A305C
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403EDF80 (MiDeleteEmptyPageTables.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140639628 (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x14063A73C (MiFreeToSubAllocatedRegion.c)
 *     MmAssignProcessToJob @ 0x140671C70 (MmAssignProcessToJob.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406CEA44 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1232, 0LL);
}
