/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x1403BB170
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140379460 (HalpMmAllocCtxFree.c)
 *     HalpAcpiGetAllTables @ 0x1403BB4BC (HalpAcpiGetAllTables.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
