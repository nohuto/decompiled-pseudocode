/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x1403AE4D0
 * Callers:
 *     KiSetFeatureBits @ 0x14099DB6C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
