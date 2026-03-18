/*
 * XREFs of HalpGetCmosData @ 0x1404C6E90
 * Callers:
 *     HalReadBootRegister @ 0x1409A59D4 (HalReadBootRegister.c)
 * Callees:
 *     HalpGetSetCmosData @ 0x1404C6EAC (HalpGetSetCmosData.c)
 */

__int64 __fastcall HalpGetCmosData(int a1, int a2, int a3, int a4)
{
  return HalpGetSetCmosData(a1, a2, a3, a4, 0);
}
