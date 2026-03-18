/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x1403A6120
 * Callers:
 *     KiSetFeatureBits @ 0x14099920C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
