/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@details@wil@@QEAA_NXZ @ 0x180044470
 * Callers:
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004353C (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180043280 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180043A6C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
