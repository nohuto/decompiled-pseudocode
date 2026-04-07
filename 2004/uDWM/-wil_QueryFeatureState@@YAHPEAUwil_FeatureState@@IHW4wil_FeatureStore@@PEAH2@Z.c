/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z @ 0x18004DFA4
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004DE5C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x18004E024 (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x18004E300 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 */

__int64 __fastcall wil_QueryFeatureState(
        struct wil_FeatureState *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int *a5,
        _DWORD *a6)
{
  __int64 result; // rax

  if ( a5 )
    *a5 = 0;
  *a6 = 1;
  result = wil_RtlStagingConfig_QueryFeatureState(a1, a2, a3, a5);
  if ( !(_DWORD)result )
    return wil_StagingConfig_QueryFeatureState(a4, a1, a2, a3, a5);
  return result;
}
