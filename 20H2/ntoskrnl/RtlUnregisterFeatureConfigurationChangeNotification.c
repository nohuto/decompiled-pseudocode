/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x14091B8B0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140880294 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax

  CmFcManagerUnregisterFeatureConfigurationChangeNotification(
    (__int64)RegistrationHandle,
    (struct _EX_RUNDOWN_REF *)RegistrationHandle);
  return result;
}
