/*
 * XREFs of KiIsRfdsMitigationDesired @ 0x140418C84
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403D5E00 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsRfdsMitigationDesired()
{
  return (KiFeatureSettings & 0x8000000) == 0;
}
