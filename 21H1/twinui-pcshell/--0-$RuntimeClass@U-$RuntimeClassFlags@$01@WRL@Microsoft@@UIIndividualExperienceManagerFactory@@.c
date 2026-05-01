/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIndividualExperienceManagerFactory@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18018A07C
 * Callers:
 *     ??$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180189C1C (--$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@VControlCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18018F6DC (--$MakeAndInitialize@VControlCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180192B7C (--$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019B188 (--$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@.c)
 *     ??$MakeAndInitialize@VTaskContinuityActivitiesExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019C028 (--$MakeAndInitialize@VTaskContinuityActivitiesExperienceManagerFactory@@UIUnknown@@$$V@Details@W.c)
 *     ??$MakeAndInitialize@VToastCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019D33C (--$MakeAndInitialize@VToastCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801A6968 (--$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micros.c)
 *     ??$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801AA62C (--$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micr.c)
 *     ??$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801AC1A8 (--$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VStartExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801AEB64 (--$MakeAndInitialize@VStartExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPE.c)
 *     ??$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801B81F0 (--$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801BE564 (--$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micros.c)
 *     ??$MakeAndInitialize@VScreenClippingExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801C37C0 (--$MakeAndInitialize@VScreenClippingExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microso.c)
 *     ??$MakeAndInitialize@VInsightsExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801CBAFC (--$MakeAndInitialize@VInsightsExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VSearchAppExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801D210C (--$MakeAndInitialize@VSearchAppExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039524 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::`vftable'{for `IIndividualExperienceManagerFactory'};
  *(_QWORD *)(a1 + 8) = &ScreenClippingExperienceManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
