/*
 * XREFs of HalAcpiGetTable @ 0x1403C9F40
 * Callers:
 *     HalpDbgInitSystem @ 0x1409A3DF0 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14025EF70 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
