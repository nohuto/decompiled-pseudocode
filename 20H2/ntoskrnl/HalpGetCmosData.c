/*
 * XREFs of HalpGetCmosData @ 0x1404CA8A0
 * Callers:
 *     HalReadBootRegister @ 0x1409AC780 (HalReadBootRegister.c)
 * Callees:
 *     HalpGetSetCmosData @ 0x1404CA8BC (HalpGetSetCmosData.c)
 */

__int64 __fastcall HalpGetCmosData(int a1, int a2, int a3, int a4)
{
  return HalpGetSetCmosData(a1, a2, a3, a4, 0);
}
