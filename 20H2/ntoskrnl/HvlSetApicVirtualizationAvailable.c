/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x1404F0338
 * Callers:
 *     KiSetFeatureBits @ 0x14099F24C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
