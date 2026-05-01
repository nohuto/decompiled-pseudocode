/*
 * XREFs of ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C4B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001CBE0 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180021218 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801AE870 (--1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801B11F8 (-StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C29D0 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C3018 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewDestroyed(
        CToastCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  LSTATUS ValueW; // eax
  bool v7; // zf
  unsigned int v8; // eax
  unsigned int pvData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pdwType; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v13[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"EM_ViewDestroyedActivity");
  v13[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v13);
  if ( !*((_QWORD *)this + 76)
    || (v3 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)((char *)this - 88)),
        v4 = v3,
        v3 >= 0) )
  {
    pdwType = 0;
    pcbData[0] = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
               L"AllowAutoAppRestartOnCrash",
               0x10000012u,
               &pdwType,
               &pvData,
               pcbData);
    if ( !ValueW )
    {
      if ( pdwType == 4 )
      {
        if ( pvData <= 1 )
        {
          v7 = pvData == 1;
          goto LABEL_11;
        }
      }
      else if ( pcbData[0] == 4 && (unsigned __int16)(pvData - 48) <= 1u )
      {
        ValueW = 0;
        v7 = (_WORD)pvData == 49;
LABEL_11:
        LOBYTE(ValueW) = v7;
        if ( !ValueW )
          goto LABEL_16;
      }
    }
    v8 = *((_DWORD *)this + 133);
    if ( v8 < 5 )
    {
      *((_DWORD *)this + 133) = v8 + 1;
      pdwType = 0;
      pcbData[0] = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
        L"AllowAutoAppRestartOnCrash",
        0x10000012u,
        &pdwType,
        &pvData,
        pcbData);
      v3 = CToastCenterExperienceManager::LookupToastQueue((CToastCenterExperienceManager *)((char *)this - 88));
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 1139LL;
        goto LABEL_15;
      }
    }
LABEL_16:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, 0);
    v4 = 0;
    goto LABEL_17;
  }
  v5 = 1126LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_17:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v13);
  return v4;
}
