/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x180042A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18000D850 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000DB18 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__()
{
  int v0; // eax

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_6;
  v0 = (int)wil::details::g_pfnDllShutdownInProgress;
  if ( wil::details::g_pfnDllShutdownInProgress )
    v0 = wil::details::g_pfnDllShutdownInProgress();
  if ( v0 )
  {
LABEL_6:
    wil::details::g_featureStateManager = 0;
    if ( qword_1800550E8 )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release((char *)qword_1800550E8);
  }
  else
  {
    wil::details::FeatureStateManager::`scalar deleting destructor'((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
