/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x1403BB2E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpAcpiGetAllTables @ 0x1403BB62C (HalpAcpiGetAllTables.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
