/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x1404F1EE8
 * Callers:
 *     KiSetFeatureBits @ 0x14099CB6C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
