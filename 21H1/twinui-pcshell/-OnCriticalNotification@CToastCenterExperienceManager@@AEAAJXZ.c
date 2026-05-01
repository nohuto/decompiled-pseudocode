/*
 * XREFs of ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x18019FFFC
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801A0D94 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001C76C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020D2C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18011CFD4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18019DFB4 (--1EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x18019F1DC (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A30DC (-StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?TurnedScreenOn@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A5EEC (-TurnedScreenOn@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnCriticalNotification(PTP_TIMER *pv)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v6,
    (__int64)"EM_CriticalNotificationActivity");
  v6[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *)v6);
  v2 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
  if ( v2 >= 0 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::TurnedScreenOn((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *)v6);
    v4 = CToastCenterExperienceManager::Launch(pv);
    v3 = v4;
    if ( v4 >= 0 )
    {
      wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, 0);
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x251,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  else
  {
    v3 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x24E,
           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
           (const char *)(unsigned int)v2);
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::~EM_CriticalNotificationActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *)v6);
  return v3;
}
