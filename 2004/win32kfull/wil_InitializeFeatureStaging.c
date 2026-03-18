/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0394078
 * Callers:
 *     EditionBaseDriverEntryInitialize @ 0x1C011CE00 (EditionBaseDriverEntryInitialize.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C037C0AC (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1C037C25C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C03940BC (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
