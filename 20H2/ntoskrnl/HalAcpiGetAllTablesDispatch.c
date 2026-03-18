/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x1403BA8A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x1403BAABC (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
