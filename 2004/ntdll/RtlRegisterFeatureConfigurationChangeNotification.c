/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1800093B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcInsertChangeRegistration @ 0x180009438 (RtlpFcInsertChangeRegistration.c)
 *     RtlpFcAllocateChangeRegistration @ 0x18000948C (RtlpFcAllocateChangeRegistration.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180009518 (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     TpPostWork @ 0x1800128C0 (TpPostWork.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  PTP_WORK *v11; // rbx

  if ( byte_18016A508 )
    return -1073741058;
  result = RtlpFcEnsureSubscriptionManagerStarted();
  if ( result >= 0 )
  {
    v9 = RtlpFcAllocateChangeRegistration(Callback, Context);
    v11 = (PTP_WORK *)v9;
    if ( v9 )
    {
      RtlpFcInsertChangeRegistration(v10, v9);
      if ( ObservedChangeStamp )
      {
        if ( MEMORY[0x7FFE0710] != *ObservedChangeStamp )
          TpPostWork(v11[5]);
      }
      *RegistrationHandle = v11;
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
