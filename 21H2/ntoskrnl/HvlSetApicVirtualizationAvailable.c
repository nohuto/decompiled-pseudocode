/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x1404F1ED8
 * Callers:
 *     KiSetFeatureBits @ 0x14099CB6C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
