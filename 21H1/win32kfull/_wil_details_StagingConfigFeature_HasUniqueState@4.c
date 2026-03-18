/*
 * XREFs of _wil_details_StagingConfigFeature_HasUniqueState@4 @ 0xF2ED0
 * Callers:
 *     _wil_details_StagingConfig_QueryFeatureState@16 @ 0xF314E (_wil_details_StagingConfig_QueryFeatureState@16.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall wil_details_StagingConfigFeature_HasUniqueState(_DWORD *this)
{
  int v1; // eax
  BOOL result; // eax

  result = 0;
  if ( *this )
  {
    v1 = this[1];
    if ( (v1 & 0x3F003F00) != 0 || (v1 & 2) != 0 )
      return 1;
  }
  return result;
}
