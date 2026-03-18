/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800A352C
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180007CF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002E990 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@details@wil@@QEAAX.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180037048 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4R.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A1FB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A34B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4R.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E90B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@details@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E9AAC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EA240 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016A564 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@details@wil@@QEAAX_N.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Rendering_SharpMagShader@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180194A0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Rendering_SharpMagShader@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180196D94 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180196E18 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4R.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TreeDumping@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180199138 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TreeDumping@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EAE34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QE.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800A35EC (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        int a7)
{
  if ( a7 && (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(a1) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, (const enum wil_ReportingKind *)&a7, 0LL, 0, 1uLL);
  }
}
