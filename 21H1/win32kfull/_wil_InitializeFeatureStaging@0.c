/*
 * XREFs of _wil_InitializeFeatureStaging@0 @ 0x292034
 * Callers:
 *     _EditionBaseDriverEntryInitialize@0 @ 0xECAA0 (_EditionBaseDriverEntryInitialize@0.c)
 * Callees:
 *     _wil_details_EvaluateFeatureDependencies@0 @ 0x27A084 (_wil_details_EvaluateFeatureDependencies@0.c)
 *     _wil_details_RegisterFeatureStagingChangeNotification@4 @ 0x27A1D4 (_wil_details_RegisterFeatureStagingChangeNotification@4.c)
 *     _wil_details_PopulateInitialConfiguredFeatureStates@0 @ 0x292070 (_wil_details_PopulateInitialConfiguredFeatureStates@0.c)
 */

_BYTE *__stdcall wil_InitializeFeatureStaging()
{
  int v0; // esi

  RtlQueryFeatureConfigurationChangeStamp();
  v0 = wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  if ( !v0 )
    return wil_details_RegisterFeatureStagingChangeNotification();
  return (_BYTE *)v0;
}
