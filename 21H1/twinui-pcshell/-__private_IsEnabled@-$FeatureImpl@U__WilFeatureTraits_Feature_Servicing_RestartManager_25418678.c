/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418678@@@details@wil@@QEAA_NXZ @ 0x180093260
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18012DFA0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180298290 (-UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418678@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180092D08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RestartManager.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418678@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180092F10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418678@@@detai.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RestartManager_25418678>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RestartManager_25418678>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RestartManager_25418678>::ReportUsage(a1, v2, v3);
  return v2;
}
