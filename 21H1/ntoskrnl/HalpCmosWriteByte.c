/*
 * XREFs of HalpCmosWriteByte @ 0x140362680
 * Callers:
 *     HalpGetSetCmosData @ 0x1404C6EAC (HalpGetSetCmosData.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall HalpCmosWriteByte(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 result; // al

  __outbyte(0x70u, a1);
  result = a2;
  __outbyte(0x71u, a2);
  return result;
}
