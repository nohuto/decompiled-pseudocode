/*
 * XREFs of ?OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B47A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001CBE0 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180021218 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801AE870 (--1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801B11F8 (-StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1801B4BB8 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnViewDestroyed(
        CControlCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _QWORD v4[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v4,
    (__int64)"EM_ViewDestroyedActivity");
  v4[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v4);
  CControlCenterExperienceManager::OnVisibilityChanged((CControlCenterExperienceManager *)((char *)this - 88));
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v4, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v4);
  return 0LL;
}
