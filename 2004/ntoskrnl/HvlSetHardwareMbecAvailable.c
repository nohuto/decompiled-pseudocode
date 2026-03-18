/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x1404ECAD8
 * Callers:
 *     KiSetFeatureBits @ 0x14099920C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
