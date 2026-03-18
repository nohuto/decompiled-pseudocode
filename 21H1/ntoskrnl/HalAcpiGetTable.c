/*
 * XREFs of HalAcpiGetTable @ 0x1403C64F0
 * Callers:
 *     HalpDbgInitSystem @ 0x14099C550 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1402F8740 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
