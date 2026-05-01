/*
 * XREFs of ??1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1800442E0
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180043894 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     _CActionCenterExperienceManager::RaisePropertyChangedEvent_::_1_::dtor$0 @ 0x180103F50 (_CActionCenterExperienceManager--RaisePropertyChangedEvent_--_1_--dtor$0.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1801B4B4C (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     _CControlCenterExperienceManager::RaisePropertyChangedEvent_::_1_::dtor$0 @ 0x1801B4D3B (_CControlCenterExperienceManager--RaisePropertyChangedEvent_--_1_--dtor$0.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1801C52AC (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     _CToastCenterExperienceManager::RaisePropertyChangedEvent_::_1_::dtor$0 @ 0x1801C5497 (_CToastCenterExperienceManager--RaisePropertyChangedEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004A7A8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
