/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@QEAA_NXZ @ 0x1800E5E44
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006B030 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800D22F4 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800D30C4 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4D34 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E5D80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_31359196@@@details@wil@@Q.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_31359196>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_31359196>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_31359196>::ReportUsage(a1, v2, v3);
  return v2;
}
