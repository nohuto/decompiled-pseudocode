/*
 * XREFs of HalpECmosReadByte @ 0x1404CC1F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x1403F9CD0 (HalpIoDelay.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1404BDAEC (WRITE_PORT_USHORT_PAIR.c)
 */

unsigned __int8 __fastcall HalpECmosReadByte(__int16 a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 v2; // bl

  WRITE_PORT_USHORT_PAIR(0x74u, 0x75u, a1);
  HalpIoDelay();
  v1 = __inbyte(0x76u);
  v2 = v1;
  HalpIoDelay();
  return v2;
}
