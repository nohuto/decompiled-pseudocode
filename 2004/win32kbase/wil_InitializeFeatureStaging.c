/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0293078
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C027A07C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1C027A22C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C02930BC (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
