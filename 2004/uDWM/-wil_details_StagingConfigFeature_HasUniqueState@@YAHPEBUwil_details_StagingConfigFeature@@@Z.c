/*
 * XREFs of ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x18007FCCC
 * Callers:
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x18004E024 (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18004E0F8 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall wil_details_StagingConfigFeature_HasUniqueState(const struct wil_details_StagingConfigFeature *a1)
{
  unsigned int v1; // edx
  _BOOL8 result; // rax

  result = 0;
  if ( *(_DWORD *)a1 )
  {
    v1 = *((_DWORD *)a1 + 1);
    if ( ((v1 | ((v1 | (v1 >> 2)) >> 2)) & 0x300) != 0 || (v1 & 0x3F000000) != 0 || (v1 & 2) != 0 )
      return 1;
  }
  return result;
}
