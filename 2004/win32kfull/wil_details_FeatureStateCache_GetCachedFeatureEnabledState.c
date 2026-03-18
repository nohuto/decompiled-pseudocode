/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C01581A0
 * Callers:
 *     Feature_Servicing_2108c_32183379__private_IsEnabled @ 0x1C0158138 (Feature_Servicing_2108c_32183379__private_IsEnabled.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C01582D4 (wil_details_GetCurrentFeatureEnabledState.c)
 *     ?Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ @ 0x1C0158FE8 (-Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ.c)
 *     Feature_Servicing_2110c_35205399__private_IsEnabled @ 0x1C0159068 (Feature_Servicing_2110c_35205399__private_IsEnabled.c)
 *     Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C0159424 (Feature_Servicing_2109c_34956946__private_IsEnabled.c)
 *     Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled @ 0x1C015948C (Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled.c)
 *     Feature_Servicing_2108c_33766748__private_IsEnabled @ 0x1C0159848 (Feature_Servicing_2108c_33766748__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C01581D4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
