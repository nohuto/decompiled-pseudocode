/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1403B5D8C
 * Callers:
 *     KiEnableKvaShadowing @ 0x1409A0790 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
