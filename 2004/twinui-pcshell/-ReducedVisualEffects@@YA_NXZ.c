/*
 * XREFs of ?ReducedVisualEffects@@YA_NXZ @ 0x1800536A8
 * Callers:
 *     ?OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180051600 (-OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800517C0 (-OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800876B0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A0F50 (-OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A5F78 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewCloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B4620 (-OnViewCloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C49B0 (-OnViewCloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801CED40 (-OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801CF330 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D9060 (-OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_3bbf153ae8ca8cd098f14c7e321b666e_::operator() @ 0x1801E2CA4 (_lambda_3bbf153ae8ca8cd098f14c7e321b666e_--operator().c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801E435C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1801E6138 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800536C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@details@wil.c)
 */

bool ReducedVisualEffects(void)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetImpl'::`2'::impl,
    0LL);
  return 0;
}
