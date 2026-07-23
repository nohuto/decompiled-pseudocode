/*
 * XREFs of HalpExtGetAcpiTable @ 0x1404C44A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalpExtGetAcpiTable(__int64 a1, int a2, int a3, int a4)
{
  return HalpAcpiGetTable(HalpExtLoaderBlock, a2, a3, a4);
}
