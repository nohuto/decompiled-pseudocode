/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x1403A86A0
 * Callers:
 *     KiSetFeatureBits @ 0x14099F24C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
