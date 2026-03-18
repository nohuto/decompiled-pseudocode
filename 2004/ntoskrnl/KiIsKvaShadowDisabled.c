/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1403B1C2C
 * Callers:
 *     KiEnableKvaShadowing @ 0x14099BE8C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
