/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180008F28
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180009020 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z @ 0x180006554 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180009764 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180009834 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(
        wil::details *a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        _DWORD *a5)
{
  int v5; // esi
  volatile __int32 *v7; // rbx
  unsigned int v11; // r15d
  bool v12; // di
  char v13; // dl
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( !a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( (*v7 & 1) != 0 )
    return (*v7 & 8) != 0 && (unsigned int)wil_QueryFeatureState((__int64)a1, a2, a3, a4, 0LL, a5) != 0;
  v14 = 1;
  v11 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
  v12 = (unsigned int)wil_QueryFeatureState((__int64)a1, a2, v5, a4, &v14, a5) != 0;
  v13 = _InterlockedExchange(v7, v14 != 0 ? 11 : 3);
  if ( !v14 && (v13 & 2) == 0 )
    wil::details::SubscribeFeatureStateCacheToConfigurationChanges(v7, 0LL, v11);
  return v12;
}
