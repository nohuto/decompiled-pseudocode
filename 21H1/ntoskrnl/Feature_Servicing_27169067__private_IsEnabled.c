/*
 * XREFs of Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0
 * Callers:
 *     PoFxPrepareDevice @ 0x14036AC30 (PoFxPrepareDevice.c)
 *     PopFxCreateDeviceCommon @ 0x1403BA8E8 (PopFxCreateDeviceCommon.c)
 *     PopFxDestroyDeviceDpm @ 0x1403C91E8 (PopFxDestroyDeviceDpm.c)
 *     PopFxDestroyDeviceCommon @ 0x1403C9340 (PopFxDestroyDeviceCommon.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405786F8 (PopFxAcpiUnregisterDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140723798 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PoFxAbandonDevice @ 0x140734340 (PoFxAbandonDevice.c)
 *     PopFxUnregisterDevice @ 0x14079C1FC (PopFxUnregisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14079CBDC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14033A8A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140389164 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_27169067__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_27169067__private_featureState,
                                (__int64)&Feature_Servicing_27169067__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_27169067__private_reporting,
    0x19E912Bu,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_2102c_29269619_logged_traits,
    v1,
    v3);
  return v1;
}
