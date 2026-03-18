/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14022E5AC
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403F3750 (MiDeleteEmptyPageTables.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MmAssignProcessToJob @ 0x14062DE50 (MmAssignProcessToJob.c)
 *     MiFreeToSubAllocatedRegion @ 0x140658E00 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140686200 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406C37D0 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1232, 0LL);
}
