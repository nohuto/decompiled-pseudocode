/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x18007EDF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x18007EE20 (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x18007EEAC (RtlpFcRemoveChangeRegistration.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax

  if ( !byte_18016A508 )
  {
    RtlpFcRemoveChangeRegistration(RegistrationHandle, RegistrationHandle);
    return RtlpFcFreeChangeRegistration(RegistrationHandle);
  }
  return result;
}
