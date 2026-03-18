/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C01417D4
 * Callers:
 *     ?Feature_Servicing_2103c_31321304__private_IsEnabled@@YAHXZ @ 0x1C00CE514 (-Feature_Servicing_2103c_31321304__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_2102c_30001498__private_IsEnabled@@YAHXZ @ 0x1C00D0940 (-Feature_Servicing_2102c_30001498__private_IsEnabled@@YAHXZ.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C0141808 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C00CE584 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(volatile signed __int32 *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *(unsigned int *)a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *(unsigned int *)a1, a2);
}
