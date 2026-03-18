/*
 * XREFs of HalpIommuDestroyDmarPageTable @ 0x140529724
 * Callers:
 *     HalpIommuFreeDmaDomain @ 0x14051AF88 (HalpIommuFreeDmaDomain.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpIommuCleanupPageTable @ 0x1405294E0 (HalpIommuCleanupPageTable.c)
 */

__int64 __fastcall HalpIommuDestroyDmarPageTable(__int64 a1)
{
  __int64 v2; // rcx

  HalpIommuCleanupPageTable(a1);
  HalpMmAllocCtxFree(v2, a1);
  return 0LL;
}
