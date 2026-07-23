/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1409149F0
 * Callers:
 *     wil_RegisterFeatureStagingChangeNotification @ 0x1405C6564 (wil_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087933C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  return CmFcManagerRegisterFeatureConfigurationChangeNotification(
           (__int64)Callback,
           (__int64)Callback,
           (__int64)Context,
           ObservedChangeStamp,
           (__int64 *)RegistrationHandle);
}
