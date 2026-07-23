/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x1404F1E68
 * Callers:
 *     KiSetFeatureBits @ 0x14099DB6C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
