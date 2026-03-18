/*
 * XREFs of ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x1C00160F4
 * Callers:
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x1C001642C (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall wil_details_StagingConfigFeature_HasUniqueState(const struct wil_details_StagingConfigFeature *a1)
{
  int v1; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( *(_DWORD *)a1 )
  {
    v1 = *((_DWORD *)a1 + 1);
    if ( (v1 & 0x300) != 0 || (v1 & 0xC00) != 0 || (v1 & 0x3000) != 0 || (v1 & 0x3F000000) != 0 || (v1 & 2) != 0 )
      return 1;
  }
  return result;
}
