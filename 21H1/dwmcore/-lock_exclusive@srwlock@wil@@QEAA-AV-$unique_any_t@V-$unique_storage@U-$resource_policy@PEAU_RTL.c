/*
 * XREFs of ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180151D84
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4918 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4C30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4D34 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E73BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E7D0C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359137@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E92B4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359137.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E93B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWi.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_exclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockExclusive(a1);
  *a2 = a1;
  return a2;
}
