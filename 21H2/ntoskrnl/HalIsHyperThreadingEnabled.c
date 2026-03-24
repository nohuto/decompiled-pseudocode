/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x1403AE380
 * Callers:
 *     KiSetFeatureBits @ 0x14099CB6C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
