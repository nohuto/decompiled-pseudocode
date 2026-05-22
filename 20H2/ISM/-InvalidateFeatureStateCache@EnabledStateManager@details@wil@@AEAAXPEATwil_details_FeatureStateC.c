/*
 * XREFs of ?InvalidateFeatureStateCache@EnabledStateManager@details@wil@@AEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003DF3C
 * Callers:
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180065A98 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::EnabledStateManager::InvalidateFeatureStateCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3)
{
  __int64 result; // rax

  result = a3 != 0 ? -3 : -520;
  _InterlockedAnd(a2, result);
  return result;
}
