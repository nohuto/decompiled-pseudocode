/*
 * XREFs of ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A2324
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801A0170 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001C76C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020D2C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180066EA4 (--1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180066ED0 (-StartActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180066F8C (-ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ReturnedToLock@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A2514 (-ReturnedToLock@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::ReturnFocus(ExperienceManagerUtils **this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v2; // rdx
  HWND v3; // rdi
  ExperienceManagerUtils *v4; // rdi
  __int64 (__fastcall *v5)(ExperienceManagerUtils *, GUID *, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edx
  __int64 v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"EM_ReturnFocusActivity");
  v13[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v13);
  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[16], v2);
  if ( !this[16] || !this[83] || GetForegroundWindow() != v3 )
  {
    v10 = -2147418113;
    goto LABEL_16;
  }
  if ( !*((_BYTE *)this + 440) )
  {
    v9 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)this[83] + 24LL))(this[83], 0xFFFFLL);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_17;
    }
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v13);
LABEL_14:
    v10 = 0;
LABEL_16:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, v10);
    v7 = 0;
    goto LABEL_17;
  }
  v12[0] = 0LL;
  v4 = this[78];
  v5 = *(__int64 (__fastcall **)(ExperienceManagerUtils *, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  v6 = v5(v4, &IID_ILockScreenViewManager, &GUID_053bf212_5a22_4a75_87eb_dfca4ea90e02, v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 80LL))(v12[0]);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 808LL;
      goto LABEL_9;
    }
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToLock((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    goto LABEL_14;
  }
  v8 = 807LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
LABEL_17:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v13);
  return v7;
}
