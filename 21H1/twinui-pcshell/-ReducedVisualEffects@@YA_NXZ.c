/*
 * XREFs of ?ReducedVisualEffects@@YA_NXZ @ 0x180052C78
 * Callers:
 *     ?OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180050BD0 (-OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180050D90 (-OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x180086FC0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099010 (-OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180190940 (-OnViewCloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A0EA0 (-OnViewCloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801AB230 (-OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801AB820 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B55A0 (-OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_3bbf153ae8ca8cd098f14c7e321b666e_::operator() @ 0x1801BF1E4 (_lambda_3bbf153ae8ca8cd098f14c7e321b666e_--operator().c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801C089C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1801C2678 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180052C98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@details@wil.c)
 */

bool ReducedVisualEffects(void)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetImpl'::`2'::impl,
    0LL);
  return 0;
}
