/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004CBAC
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18004CB30 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007EF20 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002E638 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z @ 0x18004CCF4 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH2@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800507D4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(__int64 a1, __int64 a2, unsigned __int8 a3, int a4)
{
  unsigned int v4; // ebp
  volatile __int32 *v5; // rbx
  unsigned int v6; // r14d
  bool v9; // si

  v4 = a3;
  v5 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  v6 = a2;
  if ( a4 )
    v5 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( (*v5 & 9) == 1 )
    return 0;
  if ( (*v5 & 1) != 0 )
    return (unsigned int)wil_QueryFeatureState(a1, a2, a3) != 0;
  if ( !dword_1800E305C )
    wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  v9 = (unsigned int)wil_QueryFeatureState(a1, v6, v4) != 0;
  _InterlockedExchange(v5, 11);
  return v9;
}
