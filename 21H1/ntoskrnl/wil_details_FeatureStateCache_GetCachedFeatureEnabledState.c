/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140389164
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140322B30 (wil_details_GetCurrentFeatureEnabledState.c)
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled @ 0x14037FF1C (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabled.c)
 *     Feature_Servicing_30140909__private_IsEnabled @ 0x1403EBB18 (Feature_Servicing_30140909__private_IsEnabled.c)
 *     Feature_Servicing_29814886__private_IsEnabled @ 0x1403EBF4C (Feature_Servicing_29814886__private_IsEnabled.c)
 *     Feature_Servicing_30141497__private_IsEnabled @ 0x1403EC074 (Feature_Servicing_30141497__private_IsEnabled.c)
 *     Feature_Servicing_User_CET_25433400__private_IsEnabled @ 0x1403EC8EC (Feature_Servicing_User_CET_25433400__private_IsEnabled.c)
 *     Feature_Servicing_25906437__private_IsEnabled @ 0x1403F0F38 (Feature_Servicing_25906437__private_IsEnabled.c)
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled @ 0x1403F13E0 (Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled.c)
 *     Feature_Servicing_2102c_29269619__private_IsEnabled @ 0x1403F15F0 (Feature_Servicing_2102c_29269619__private_IsEnabled.c)
 *     Feature_Servicing_2011c_29270241__private_IsEnabled @ 0x1403F1658 (Feature_Servicing_2011c_29270241__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403EBBF4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
