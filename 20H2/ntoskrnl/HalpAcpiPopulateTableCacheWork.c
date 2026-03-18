/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x1403BA770
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140379260 (HalpMmAllocCtxFree.c)
 *     HalpAcpiGetAllTables @ 0x1403BAABC (HalpAcpiGetAllTables.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
