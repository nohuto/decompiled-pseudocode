/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C00C90AC
 * Callers:
 *     DriverEntry @ 0x1C0032660 (DriverEntry.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C00BD0AC (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1C00BD26C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00C90F0 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 __fastcall wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  unsigned __int64 initialChangeStamp; // [rsp+30h] [rbp+8h] BYREF

  initialChangeStamp = RtlQueryFeatureConfigurationChangeStamp();
  v0 = wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  if ( !v0 )
    return (unsigned int)wil_details_RegisterFeatureStagingChangeNotification(&initialChangeStamp);
  return v0;
}
