/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1403B459C
 * Callers:
 *     KiEnableKvaShadowing @ 0x1409A1F8C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
