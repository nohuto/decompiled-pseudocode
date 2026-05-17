/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x18007EDF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x18007EE20 (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x18007EEAC (RtlpFcRemoveChangeRegistration.c)
 */

__int64 __fastcall RtlUnregisterFeatureConfigurationChangeNotification(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_18016A508 )
  {
    RtlpFcRemoveChangeRegistration(a1, a1);
    return RtlpFcFreeChangeRegistration(a1);
  }
  return result;
}
