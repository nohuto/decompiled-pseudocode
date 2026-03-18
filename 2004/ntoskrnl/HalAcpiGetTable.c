/*
 * XREFs of HalAcpiGetTable @ 0x1403C7300
 * Callers:
 *     HalpDbgInitSystem @ 0x14099DCF0 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140335770 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
