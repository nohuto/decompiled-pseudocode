/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x1403B6FD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x1403B71EC (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
