/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x1403BF8F0
 * Callers:
 *     KiSetFeatureBits @ 0x140A56CDC (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
