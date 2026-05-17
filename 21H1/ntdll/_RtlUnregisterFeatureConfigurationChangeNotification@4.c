/*
 * XREFs of _RtlUnregisterFeatureConfigurationChangeNotification@4 @ 0x4B2AB4A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcFreeChangeRegistration@4 @ 0x4B2AB4C2 (_RtlpFcFreeChangeRegistration@4.c)
 *     _RtlpFcRemoveChangeRegistration@8 @ 0x4B2AB526 (_RtlpFcRemoveChangeRegistration@8.c)
 */

int __thiscall RtlUnregisterFeatureConfigurationChangeNotification(void *this, int a2)
{
  int result; // eax

  if ( !byte_4B3A5DA8 )
  {
    RtlpFcRemoveChangeRegistration(this, a2);
    return RtlpFcFreeChangeRegistration(a2);
  }
  return result;
}
