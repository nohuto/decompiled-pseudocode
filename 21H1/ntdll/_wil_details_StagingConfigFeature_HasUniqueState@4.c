/*
 * XREFs of _wil_details_StagingConfigFeature_HasUniqueState@4 @ 0x4B3068E7
 * Callers:
 *     _wil_details_StagingConfig_QueryFeatureState@16 @ 0x4B306B98 (_wil_details_StagingConfig_QueryFeatureState@16.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall wil_details_StagingConfigFeature_HasUniqueState(_DWORD *this)
{
  return *this && ((this[1] & 0x3F003F00) != 0 || (this[1] & 2) != 0);
}
