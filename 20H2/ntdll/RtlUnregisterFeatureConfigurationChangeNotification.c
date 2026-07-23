/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x18007EEF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x18007EF20 (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x18007EFAC (RtlpFcRemoveChangeRegistration.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax

  if ( !byte_18016C508 )
  {
    RtlpFcRemoveChangeRegistration(RegistrationHandle, RegistrationHandle);
    return RtlpFcFreeChangeRegistration(RegistrationHandle);
  }
  return result;
}
