/*
 * XREFs of wil_RegisterFeatureStagingChangeNotification @ 0x1405CB564
 * Callers:
 *     CmFcInitSystem1 @ 0x140A5893C (CmFcInitSystem1.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403EFBB4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14058C750 (RtlRegisterFeatureConfigurationChangeNotification.c)
 */

_BYTE *wil_RegisterFeatureStagingChangeNotification()
{
  __int64 (__fastcall **i)(); // rcx
  _BYTE *result; // rax

  for ( i = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a; ; i = (__int64 (__fastcall **)())(result + 32) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !result[21] && !result[22] && !result[20] )
    {
      result = (_BYTE *)RtlRegisterFeatureConfigurationChangeNotification(
                          (__int64)wil_details_OnFeatureConfigurationChange,
                          0LL,
                          0LL,
                          (__int64)&wil_details_featureChangeNotification);
      if ( (_DWORD)result )
        wil_details_featureChangeNotification = 0LL;
      return result;
    }
  }
  return result;
}
