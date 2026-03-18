/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180150070
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4918 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4C30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4D34 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E73BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E7D0C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961.c)
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800E8E90 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359137@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E92B4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359137.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E93B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWi.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A8D50 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
