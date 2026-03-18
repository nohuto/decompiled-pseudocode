/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x1404EC488
 * Callers:
 *     KiSetFeatureBits @ 0x1409981AC (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
