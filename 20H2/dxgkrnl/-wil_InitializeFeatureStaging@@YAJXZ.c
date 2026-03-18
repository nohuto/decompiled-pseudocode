/*
 * XREFs of ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0305078
 * Callers:
 *     DriverEntry @ 0x1C0305D00 (DriverEntry.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00DA040 (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C00DA1FC (-wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z.c)
 *     ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C03050BC (-wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ.c)
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
