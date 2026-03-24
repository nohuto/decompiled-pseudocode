/*
 * XREFs of HalpPicWriteEndOfInterrupt @ 0x1404DCF10
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x1403F9CD0 (HalpIoDelay.c)
 */

void HalpPicWriteEndOfInterrupt()
{
  __outbyte(0xA0u, 0x20u);
  __outbyte(0x20u, 0x20u);
  __inbyte(0x20u);
  HalpIoDelay();
}
