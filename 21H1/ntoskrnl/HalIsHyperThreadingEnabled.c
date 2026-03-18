/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x1403A9DF0
 * Callers:
 *     KiSetFeatureBits @ 0x1409981AC (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
