/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x1403BED20
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x1403BED38 (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
