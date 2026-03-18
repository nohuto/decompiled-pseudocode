/*
 * XREFs of wil_details_RegisterFeatureStagingChangeNotification @ 0x1C00BD26C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C00C90AC (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0036698 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

const wil_details_FeatureDescriptor *__fastcall wil_details_RegisterFeatureStagingChangeNotification(
        unsigned __int64 *ObservedChangeStamp)
{
  const wil_details_FeatureDescriptor *i; // rcx
  const wil_details_FeatureDescriptor *result; // rax
  __int64 v3; // r8

  for ( i = wil_details_featureDescriptors_a; ; i = result + 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !result->isAlwaysDisabled && !result->isAlwaysEnabled && !result->changeTime )
    {
      result = (const wil_details_FeatureDescriptor *)RtlRegisterFeatureConfigurationChangeNotification(
                                                        wil_details_OnFeatureConfigurationChange,
                                                        0LL,
                                                        v3,
                                                        &wil_details_featureChangeNotification);
      if ( (_DWORD)result )
        wil_details_featureChangeNotification = 0LL;
      return result;
    }
  }
  return result;
}
