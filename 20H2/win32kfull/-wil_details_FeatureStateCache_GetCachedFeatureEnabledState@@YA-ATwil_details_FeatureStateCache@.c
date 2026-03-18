/*
 * XREFs of ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C015C068
 * Callers:
 *     ?Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ @ 0x1C015BF98 (-Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_Perf_FindWindowEx__private_IsEnabled@@YAHXZ @ 0x1C015C000 (-Feature_Servicing_Perf_FindWindowEx__private_IsEnabled@@YAHXZ.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C015C19C (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     ?Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabled@@YAHXZ @ 0x1C015D210 (-Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ @ 0x1C015D478 (-Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_MSRC74780_RejectRecursiveNtGdiStarDoc__private_IsEnabled@@YAHXZ @ 0x1C015D5CC (-Feature_MSRC74780_RejectRecursiveNtGdiStarDoc__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ @ 0x1C015DA88 (-Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled@@YAHXZ @ 0x1C015EA14 (-Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_HidParseSystem32Load__private_IsEnabled@@YAHXZ @ 0x1C015F3C8 (-Feature_Servicing_HidParseSystem32Load__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C015C09C (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
