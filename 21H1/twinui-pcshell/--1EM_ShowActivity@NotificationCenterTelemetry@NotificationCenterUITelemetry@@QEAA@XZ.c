/*
 * XREFs of ??1EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18019E0E8
 * Callers:
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801A2CFC (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     _CToastCenterExperienceManager::Show_::_1_::dtor$0 @ 0x1801A2E18 (_CToastCenterExperienceManager--Show_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C8A4 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::~EM_ShowActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
