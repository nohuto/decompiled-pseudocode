/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C011B39C
 * Callers:
 *     Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C00CE7D8 (Feature_Servicing_2109c_34956946__private_IsEnabled.c)
 *     Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled @ 0x1C00CE948 (Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled.c)
 *     Feature_Servicing_FixExtraSuppression_26190189__private_IsEnabled @ 0x1C00CE9B8 (Feature_Servicing_FixExtraSuppression_26190189__private_IsEnabled.c)
 *     Feature_Servicing_2108c_32183379__private_IsEnabled @ 0x1C00D1108 (Feature_Servicing_2108c_32183379__private_IsEnabled.c)
 *     Feature_Servicing_2108c_32449232__private_IsEnabled @ 0x1C00D1670 (Feature_Servicing_2108c_32449232__private_IsEnabled.c)
 *     Feature_Servicing_2105c_32092283__private_IsEnabled @ 0x1C00D23BC (Feature_Servicing_2105c_32092283__private_IsEnabled.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C011B3D0 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C00CE848 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(volatile signed __int32 *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *(unsigned int *)a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *(unsigned int *)a1, a2);
}
