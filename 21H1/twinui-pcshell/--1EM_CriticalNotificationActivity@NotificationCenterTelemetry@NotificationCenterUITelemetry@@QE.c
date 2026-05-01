/*
 * XREFs of ??1EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18019DFB4
 * Callers:
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x18019FFFC (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::OnCriticalNotification_::_1_::dtor$0 @ 0x1801A00EC (_CToastCenterExperienceManager--OnCriticalNotification_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C8A4 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::~EM_CriticalNotificationActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
