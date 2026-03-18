/*
 * XREFs of wil_InitializeFeatureStagingFromBuffers @ 0x140A3B5E4
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A3B340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1405CB638 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140A3B608 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 */

__int64 wil_InitializeFeatureStagingFromBuffers()
{
  unsigned int v0; // ebx

  v0 = wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers();
  wil_details_EvaluateFeatureDependencies();
  return v0;
}
