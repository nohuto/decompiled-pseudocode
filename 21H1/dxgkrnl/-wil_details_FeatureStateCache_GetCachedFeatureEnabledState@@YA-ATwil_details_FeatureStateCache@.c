/*
 * XREFs of ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0025370
 * Callers:
 *     ?Feature_Servicing_2101c_30313313__private_IsEnabled@@YAHXZ @ 0x1C00252E0 (-Feature_Servicing_2101c_30313313__private_IsEnabled@@YAHXZ.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C00254A4 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     ?Feature_Servicing_2102c_30071911__private_IsEnabled@@YAHXZ @ 0x1C0025D10 (-Feature_Servicing_2102c_30071911__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_HLBDD_27913584__private_IsEnabled@@YAHXZ @ 0x1C0025FBC (-Feature_Servicing_HLBDD_27913584__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_2103c_29815990__private_IsEnabled@@YAHXZ @ 0x1C0026188 (-Feature_Servicing_2103c_29815990__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00253A4 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
