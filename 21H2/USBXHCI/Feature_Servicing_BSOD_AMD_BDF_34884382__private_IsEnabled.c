/*
 * XREFs of Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled @ 0x1C0019074
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000C884 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003C080 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1C003C2D0 (Interrupter_IoWorkItemRequeueDpc.c)
 *     Interrupter_CreateInterrupter @ 0x1C006CEC0 (Interrupter_CreateInterrupter.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0019478 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C0019624 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v2; // edx
  int v3; // ecx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_BSOD_AMD_BDF_34884382__private_featureState,
                                &wil_details_featureDescriptors_a);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    v3,
    v2,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1);
  return v1;
}
