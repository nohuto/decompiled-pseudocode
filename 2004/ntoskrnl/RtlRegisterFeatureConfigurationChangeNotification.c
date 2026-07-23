/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x14057FF60
 * Callers:
 *     wil_RegisterFeatureStagingChangeNotification @ 0x1405C7564 (wil_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 *     KeIsBugCheckActive @ 0x1403981CC (KeIsBugCheckActive.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x140867B10 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  char v8; // cl
  ULONG_PTR v9; // r10
  ULONG_PTR BugCheckParameter4; // [rsp+38h] [rbp+0h]

  if ( ObGetCurrentIrql() <= 1u )
    return CmFcRegisterFeatureConfigurationChangeNotification(
             Callback,
             Context,
             ObservedChangeStamp,
             RegistrationHandle);
  if ( !KeIsBugCheckActive(0LL) && PoPowerDownActionInProgress == v8 )
    KeBugCheckEx(0xAu, (ULONG_PTR)RtlQueryFeatureConfiguration, v9, 0LL, BugCheckParameter4);
  return -1073741637;
}
