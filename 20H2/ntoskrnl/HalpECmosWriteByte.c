/*
 * XREFs of HalpECmosWriteByte @ 0x1404CA860
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x1403F7AA0 (HalpIoDelay.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1404BC12C (WRITE_PORT_USHORT_PAIR.c)
 */

void __fastcall HalpECmosWriteByte(__int16 a1, unsigned __int8 a2)
{
  WRITE_PORT_USHORT_PAIR(0x74u, 0x75u, a1);
  HalpIoDelay();
  __outbyte(0x76u, a2);
  HalpIoDelay();
}
