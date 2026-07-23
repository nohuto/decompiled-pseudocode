/*
 * XREFs of _RtlRegisterFeatureConfigurationChangeNotification@16 @ 0x4B2B23D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcEnsureSubscriptionManagerStarted@4 @ 0x4B2B222D (_RtlpFcEnsureSubscriptionManagerStarted@4.c)
 *     _RtlpFcInsertChangeRegistration@8 @ 0x4B2B2428 (_RtlpFcInsertChangeRegistration@8.c)
 *     _RtlpFcAllocateChangeRegistration@8 @ 0x4B2B2462 (_RtlpFcAllocateChangeRegistration@8.c)
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax
  PTP_WORK *v5; // esi

  if ( byte_4B3A5DA8 )
    return -1073741058;
  result = RtlpFcEnsureSubscriptionManagerStarted();
  if ( result >= 0 )
  {
    v5 = (PTP_WORK *)RtlpFcAllocateChangeRegistration(Callback, Context);
    if ( v5 )
    {
      RtlpFcInsertChangeRegistration();
      if ( ObservedChangeStamp )
      {
        while ( MEMORY[0x7FFE0714] != MEMORY[0x7FFE0718] )
          _mm_pause();
        if ( MEMORY[0x7FFE0710] != *(_DWORD *)ObservedChangeStamp
          || MEMORY[0x7FFE0714] != *((_DWORD *)ObservedChangeStamp + 1) )
        {
          TpPostWork(v5[5]);
        }
      }
      *RegistrationHandle = v5;
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
