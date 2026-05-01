/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340@@@details@wil@@QEAA_NXZ @ 0x18009B670
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801D6EDC (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?GetStoreAppPFN@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D7200 (-GetStoreAppPFN@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1801E2CD0 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009B11C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOf.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009B5AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340@@@de.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340>::ReportUsage(a1, v2, v3);
  return v2;
}
