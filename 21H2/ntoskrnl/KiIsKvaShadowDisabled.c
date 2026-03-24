/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1403B5C1C
 * Callers:
 *     KiEnableKvaShadowing @ 0x14099F860 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
