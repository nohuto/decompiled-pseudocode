/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180064BBC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064A10 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheck.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180064C5C (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  int v6; // r9d
  unsigned int v7; // r8d

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x98C3BD, 0, a3, a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = (32 * (FeatureEnabledState & 3)) | ((FeatureEnabledState & 0x40) != 0 ? 0x200 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x100
                                                                                           : 0);
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
      v6 = 16;
    v7 |= v6;
  }
  *(_DWORD *)a2 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 1)) & 8;
  return a2;
}
