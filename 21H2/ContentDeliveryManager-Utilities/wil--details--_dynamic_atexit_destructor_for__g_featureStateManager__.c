/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800DACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180016E88 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180017790 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(
        __int64 a1,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  int v2; // eax

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_6;
  v2 = (int)wil::details::g_pfnDllShutdownInProgress;
  if ( wil::details::g_pfnDllShutdownInProgress )
    v2 = wil::details::g_pfnDllShutdownInProgress();
  if ( v2 )
  {
LABEL_6:
    wil::details::g_featureStateManager = 0;
    if ( lpMem )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release((char *)lpMem);
  }
  else
  {
    wil::details::FeatureStateManager::`scalar deleting destructor'(
      (wil::details::FeatureStateManager *)&wil::details::g_featureStateManager,
      a2);
  }
}
