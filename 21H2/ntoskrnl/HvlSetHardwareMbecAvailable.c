/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x14054382C
 * Callers:
 *     KiSetFeatureBits @ 0x140A56CDC (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
