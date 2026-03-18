/*
 * XREFs of HalAcpiGetTable @ 0x1403B8380
 * Callers:
 *     HalpAddDevice @ 0x14081E300 (HalpAddDevice.c)
 *     HalpDbgInitSystem @ 0x140A54B30 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140213A40 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
