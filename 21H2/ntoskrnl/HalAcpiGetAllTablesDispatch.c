/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x1403BB410
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x1403BB62C (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
