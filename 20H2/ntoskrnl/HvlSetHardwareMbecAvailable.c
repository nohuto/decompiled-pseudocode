/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x1404F0348
 * Callers:
 *     KiSetFeatureBits @ 0x14099F24C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
