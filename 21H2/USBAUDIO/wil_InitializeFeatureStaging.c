/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0036008
 * Callers:
 *     DriverEntry @ 0x1C002355C (DriverEntry.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0022398 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00360B8 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  _UNKNOWN **i; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v3 = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = &wil_details_featureDescriptors_a; ; ++i )
  {
    if ( i >= (_UNKNOWN **)&wil_details_featureDescriptors_z )
      return v0;
    if ( *i )
      break;
  }
LABEL_6:
  if ( !i )
    return v0;
  if ( *((_BYTE *)i + 29) || *((_BYTE *)i + 30) || *((_BYTE *)i + 28) )
  {
    for ( i += 5; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
    {
      if ( *i )
        goto LABEL_6;
    }
    return v0;
  }
  v0 = RtlRegisterFeatureConfigurationChangeNotification(
         wil_details_ReevaluateOnFeatureConfigurationChange,
         0LL,
         &v3,
         &WPP_MAIN_CB.Dpc.DpcData);
  if ( v0 )
  {
    WPP_MAIN_CB.Dpc.DpcData = 0LL;
    return v0;
  }
  return 0LL;
}
