/*
 * XREFs of PiInitializeDDBCache @ 0x140B2E514
 * Callers:
 *     PpInitializeBootDDB @ 0x140B2E474 (PpInitializeBootDDB.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 */

__int64 PiInitializeDDBCache()
{
  RtlInitializeGenericTableAvl(
    &PiDDBCacheTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiCompareDDBCacheEntries,
    (PRTL_AVL_ALLOCATE_ROUTINE)PnpAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)CMFFreeFn,
    0LL);
  qword_140D3CF50 = (__int64)&PiDDBCacheList;
  PiDDBCacheList = &PiDDBCacheList;
  return 0LL;
}
