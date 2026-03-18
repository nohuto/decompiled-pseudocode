/*
 * XREFs of ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C001CF0C
 * Callers:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C007B178 (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C007B32C (-wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C007B390 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 *     ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C00F90BC (-wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ.c)
 * Callees:
 *     <none>
 */

const struct wil_details_FeatureDescriptor *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= wil_details_featureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return (const struct wil_details_FeatureDescriptor *)a1;
}
