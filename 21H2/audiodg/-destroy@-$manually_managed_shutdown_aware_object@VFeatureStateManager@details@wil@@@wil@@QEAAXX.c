/*
 * XREFs of ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x14001CBEC
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x14002DC80 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x140020FEC (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x14003B8E8 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::destroy(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager[0] = 0;
    if ( lpMem )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(lpMem);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager((wil::details::FeatureStateManager *)wil::details::g_featureStateManager);
  }
}
