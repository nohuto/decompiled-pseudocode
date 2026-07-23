/*
 * XREFs of HalpSetCmosData @ 0x1404CC590
 * Callers:
 *     HalWriteBootRegister @ 0x1409AA5C8 (HalWriteBootRegister.c)
 * Callees:
 *     HalpGetSetCmosData @ 0x1404CC4CC (HalpGetSetCmosData.c)
 */

__int64 __fastcall HalpSetCmosData(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return HalpGetSetCmosData(a1, a2, a3, a4, 1);
}
