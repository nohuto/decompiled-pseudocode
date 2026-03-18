/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14038A1D4
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140360740 (wil_details_GetCurrentFeatureEnabledState.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled @ 0x14038075C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled.c)
 *     Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled @ 0x1403EC714 (Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled.c)
 *     Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled @ 0x1403ED274 (Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled.c)
 *     Feature_Servicing_2110c_34820170__private_IsEnabled @ 0x1403ED2DC (Feature_Servicing_2110c_34820170__private_IsEnabled.c)
 *     Feature_Servicing_Apply_Layered_Group_Policy_33504626__private_IsEnabled @ 0x1403ED344 (Feature_Servicing_Apply_Layered_Group_Policy_33504626__private_IsEnabled.c)
 *     Feature_Servicing_2107_32739750__private_IsEnabled @ 0x1403F213C (Feature_Servicing_2107_32739750__private_IsEnabled.c)
 *     Feature_Servicing_2104_31612686__private_IsEnabled @ 0x1403F28E8 (Feature_Servicing_2104_31612686__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403EC77C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
