/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C00BB078
 * Callers:
 *     DriverEntry @ 0x1C00BBAC8 (DriverEntry.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C008E07C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1C008E23C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00BB0BC (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx

  RtlQueryFeatureConfigurationChangeStamp();
  v0 = wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  if ( !v0 )
    return (unsigned int)wil_details_RegisterFeatureStagingChangeNotification();
  return v0;
}
