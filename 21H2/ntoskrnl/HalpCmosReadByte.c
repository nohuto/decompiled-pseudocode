/*
 * XREFs of HalpCmosReadByte @ 0x140365130
 * Callers:
 *     HalpGetSetCmosData @ 0x1404CC28C (HalpGetSetCmosData.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall HalpCmosReadByte(unsigned __int8 a1)
{
  __outbyte(0x70u, a1);
  return __inbyte(0x71u);
}
