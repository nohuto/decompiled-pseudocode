/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x18009BACC
 * Callers:
 *     Feature_Servicing_2206c_38427506__private_IsEnabled @ 0x18009B470 (Feature_Servicing_2206c_38427506__private_IsEnabled.c)
 *     Feature_SearchPackagePaths__private_IsEnabled @ 0x18009C4E0 (Feature_SearchPackagePaths__private_IsEnabled.c)
 *     Feature_Servicing_AppServerAI__private_IsEnabled @ 0x18009C970 (Feature_Servicing_AppServerAI__private_IsEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(_DWORD *a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp+8h]

  LODWORD(v3) = *a1;
  if ( (*a1 & 1) != 0 )
    return v3;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, v3, a2);
}
