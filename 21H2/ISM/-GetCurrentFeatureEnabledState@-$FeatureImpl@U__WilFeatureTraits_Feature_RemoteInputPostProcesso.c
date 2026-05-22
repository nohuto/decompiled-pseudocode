/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18003F66C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003F5A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoteInputPostProcessor.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003F1AC (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // r9d
  int v7; // edx

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x122B756,
                                        1LL,
                                        a3,
                                        a4);
  v6 = 0;
  *a2 = 0LL;
  if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
    v6 = 64;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x40) != 0 ? 0x800 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x400
                                                                                           : 0);
  *(_DWORD *)a2 = v6 | v7 | ((v6 | (unsigned int)v7) >> 6) & 1;
  return a2;
}
