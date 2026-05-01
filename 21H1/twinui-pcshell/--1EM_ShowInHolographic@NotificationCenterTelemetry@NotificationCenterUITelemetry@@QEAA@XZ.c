/*
 * XREFs of ??1EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18019E114
 * Callers:
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A2E2C (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::ShowInHolographic_::_1_::dtor$0 @ 0x1801A2FC6 (_CToastCenterExperienceManager--ShowInHolographic_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18019E86C (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::~EM_ShowInHolographic(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
