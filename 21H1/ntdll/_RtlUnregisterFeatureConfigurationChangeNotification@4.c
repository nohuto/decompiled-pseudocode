/*
 * XREFs of _RtlUnregisterFeatureConfigurationChangeNotification@4 @ 0x4B2AB4A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcFreeChangeRegistration@4 @ 0x4B2AB4C2 (_RtlpFcFreeChangeRegistration@4.c)
 *     _RtlpFcRemoveChangeRegistration@8 @ 0x4B2AB526 (_RtlpFcRemoveChangeRegistration@8.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax

  if ( !byte_4B3A5DA8 )
  {
    RtlpFcRemoveChangeRegistration();
    return RtlpFcFreeChangeRegistration(RegistrationHandle);
  }
  return result;
}
