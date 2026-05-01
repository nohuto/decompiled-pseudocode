/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180147BC4
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180048290 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x18014D504 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x180156DA4 (-AppendChainLinkInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJ.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x180157354 (-ClearNextIfMatch@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?GetNextChainLinks@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x180159024 (-GetNextChainLinks@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEA.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18015C7A0 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18015F374 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?get_NextChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x18015FE20 (-get_NextChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEA.c)
 *     ?get_WindowExperienceKind@ViewEventArgsForShowAsViewMode@@UEAAJPEAW4ExperienceKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18028C330 (-get_WindowExperienceKind@ViewEventArgsForShowAsViewMode@@UEAAJPEAW4ExperienceKind@WindowManagem.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180291860 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?get_WindowTitle@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802BFC90 (-get_WindowTitle@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002C270 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180146640 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@det.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v6);
    v6 = v3;
  }
  LODWORD(v7) = 0;
  BYTE4(v7) = 3;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)(a1 + 2),
    0xF59789u,
    ((unsigned int)v3 >> 8) & 1,
    ((unsigned int)v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    v5,
    3);
}
