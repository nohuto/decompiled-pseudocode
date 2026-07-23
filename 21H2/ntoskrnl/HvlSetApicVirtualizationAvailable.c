/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x1404F1E58
 * Callers:
 *     KiSetFeatureBits @ 0x14099DB6C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
