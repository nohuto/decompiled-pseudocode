/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1403C25B8
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A59FA4 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
