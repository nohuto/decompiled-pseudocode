/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1403ABFAC
 * Callers:
 *     KiEnableKvaShadowing @ 0x14099A6F0 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
