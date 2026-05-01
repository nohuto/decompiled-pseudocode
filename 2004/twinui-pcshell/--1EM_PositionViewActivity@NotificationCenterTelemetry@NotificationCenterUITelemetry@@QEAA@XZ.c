/*
 * XREFs of ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180018644
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18001857C (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _CActionCenterExperienceManager::PositionView_::_1_::dtor$0 @ 0x18010081E (_CActionCenterExperienceManager--PositionView_--_1_--dtor$0.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801B4CC8 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _CControlCenterExperienceManager::PositionView_::_1_::dtor$0 @ 0x1801B4ECB (_CControlCenterExperienceManager--PositionView_--_1_--dtor$0.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C51C4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::PositionView_::_1_::dtor$0 @ 0x1801C5653 (_CToastCenterExperienceManager--PositionView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001CD18 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
