/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x1404EC478
 * Callers:
 *     KiSetFeatureBits @ 0x1409981AC (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
