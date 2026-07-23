/*
 * XREFs of HalAcpiGetTable @ 0x1403CAA80
 * Callers:
 *     HalpDbgInitSystem @ 0x1409A2540 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
