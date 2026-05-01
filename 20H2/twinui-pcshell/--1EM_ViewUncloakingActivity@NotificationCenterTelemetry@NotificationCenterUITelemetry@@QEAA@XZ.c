/*
 * XREFs of ??1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180061BC4
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180061970 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CActionCenterExperienceManager::OnViewUncloaking_::_1_::dtor$0 @ 0x180104F0F (_CActionCenterExperienceManager--OnViewUncloaking_--_1_--dtor$0.c)
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B4600 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CControlCenterExperienceManager::OnViewUncloaking_::_1_::dtor$0 @ 0x1801B47B6 (_CControlCenterExperienceManager--OnViewUncloaking_--_1_--dtor$0.c)
 *     ?OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C4A80 (-OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CToastCenterExperienceManager::OnViewUncloaking_::_1_::dtor$0 @ 0x1801C4C0A (_CToastCenterExperienceManager--OnViewUncloaking_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004A7A8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
