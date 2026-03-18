/*
 * XREFs of ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0393078
 * Callers:
 *     EditionBaseDriverEntryInitialize @ 0x1C011E380 (EditionBaseDriverEntryInitialize.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C037B0AC (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C037B25C (-wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z.c)
 *     ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C03930BC (-wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ.c)
 */

__int64 wil_InitializeFeatureStaging(void)
{
  unsigned int v0; // ebx
  unsigned __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = RtlQueryFeatureConfigurationChangeStamp();
  v0 = wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  if ( !v0 )
    return (unsigned int)wil_details_RegisterFeatureStagingChangeNotification(&v2);
  return v0;
}
