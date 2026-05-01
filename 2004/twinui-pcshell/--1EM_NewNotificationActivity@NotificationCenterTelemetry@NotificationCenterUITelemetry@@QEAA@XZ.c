/*
 * XREFs of ??1EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801C1BA0
 * Callers:
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C4488 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::OnNewNotification_::_1_::dtor$0 @ 0x1801C4538 (_CToastCenterExperienceManager--OnNewNotification_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001CD18 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::~EM_NewNotificationActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
