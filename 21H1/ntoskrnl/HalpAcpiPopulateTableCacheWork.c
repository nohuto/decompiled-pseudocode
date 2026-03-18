/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x1403B6EA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403764C0 (HalpMmAllocCtxFree.c)
 *     HalpAcpiGetAllTables @ 0x1403B71EC (HalpAcpiGetAllTables.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
