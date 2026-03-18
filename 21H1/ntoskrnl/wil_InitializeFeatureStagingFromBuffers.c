/*
 * XREFs of wil_InitializeFeatureStagingFromBuffers @ 0x140A355E4
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A35340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1405C6638 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140A35608 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 */

__int64 wil_InitializeFeatureStagingFromBuffers()
{
  unsigned int v0; // ebx

  v0 = wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers();
  wil_details_EvaluateFeatureDependencies();
  return v0;
}
