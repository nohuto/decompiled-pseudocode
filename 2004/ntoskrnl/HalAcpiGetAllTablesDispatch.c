/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x1403B7E00
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x1403B801C (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
