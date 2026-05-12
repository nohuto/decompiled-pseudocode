/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C001D140
 * Callers:
 *     Feature_Servicing_2206C_37999740__private_IsEnabled @ 0x1C001CB78 (Feature_Servicing_2206C_37999740__private_IsEnabled.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C001D274 (wil_details_GetCurrentFeatureEnabledState.c)
 *     Feature_Servicing_2205c_38617647__private_IsEnabled @ 0x1C001E278 (Feature_Servicing_2205c_38617647__private_IsEnabled.c)
 *     Feature_Servicing_2206C_38835677__private_IsEnabled @ 0x1C001E2E0 (Feature_Servicing_2206C_38835677__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C001D174 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
