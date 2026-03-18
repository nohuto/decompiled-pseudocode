/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x1404ECAC8
 * Callers:
 *     KiSetFeatureBits @ 0x14099920C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
