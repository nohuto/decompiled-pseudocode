/*
 * XREFs of wil_RegisterFeatureStagingChangeNotification @ 0x1405C7564
 * Callers:
 *     CmFcInitSystem1 @ 0x140A582BC (CmFcInitSystem1.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403ED084 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14057FF60 (RtlRegisterFeatureConfigurationChangeNotification.c)
 */

int wil_RegisterFeatureStagingChangeNotification()
{
  __int64 (__fastcall **i)(); // rcx
  __int64 (__fastcall **v1)(); // rax

  for ( i = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a; ; i = v1 + 3 )
  {
    v1 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v1 )
      break;
    if ( !*((_BYTE *)v1 + 13) && !*((_BYTE *)v1 + 14) && !*((_BYTE *)v1 + 12) )
    {
      LODWORD(v1) = RtlRegisterFeatureConfigurationChangeNotification(
                      wil_details_OnFeatureConfigurationChange,
                      0LL,
                      0LL,
                      &wil_details_featureChangeNotification);
      if ( (_DWORD)v1 )
        wil_details_featureChangeNotification = 0LL;
      return (int)v1;
    }
  }
  return (int)v1;
}
