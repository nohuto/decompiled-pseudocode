/*
 * XREFs of ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150174
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E8EF8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_323.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E98F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_exclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockExclusive(a1);
  *a2 = a1;
  return a2;
}
