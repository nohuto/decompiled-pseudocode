/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14038C474
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140331358 (wil_details_GetCurrentFeatureEnabledState.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled @ 0x14038251C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled.c)
 *     Feature_MSRC76458_DisableTransactedRename__private_IsEnabled @ 0x1403EFBDC (Feature_MSRC76458_DisableTransactedRename__private_IsEnabled.c)
 *     Feature_Servicing_AzureVMHang__private_IsEnabled @ 0x1403F01C4 (Feature_Servicing_AzureVMHang__private_IsEnabled.c)
 *     Feature_Servicing_CopyFileImprovement__private_IsEnabled @ 0x1403F022C (Feature_Servicing_CopyFileImprovement__private_IsEnabled.c)
 *     Feature_Servicing_SetVadPageSize__private_IsEnabled @ 0x1403F2038 (Feature_Servicing_SetVadPageSize__private_IsEnabled.c)
 *     Feature_Servicing_37028738__private_IsEnabled @ 0x1403F420C (Feature_Servicing_37028738__private_IsEnabled.c)
 *     Feature_Servicing_2206c_38536160__private_IsEnabled @ 0x1403F6778 (Feature_Servicing_2206c_38536160__private_IsEnabled.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     Feature_Servicing_AddInitProcessProperty__private_IsEnabled @ 0x1403F7748 (Feature_Servicing_AddInitProcessProperty__private_IsEnabled.c)
 *     Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled @ 0x1403F7828 (Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403EFC44 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
