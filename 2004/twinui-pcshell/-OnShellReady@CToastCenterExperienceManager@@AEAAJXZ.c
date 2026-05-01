/*
 * XREFs of ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C45F0
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801C48A8 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_36ea44b9487b6fb32d15d1d93feaf54d___ @ 0x180095EDC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Exper.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x1801B08F4 (-ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C3018 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C9894 (-SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C990C (-SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CToastCenterExperienceManager::OnShellReady(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD); // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rsi
  __int64 v13; // rbx
  int Instance; // eax
  __int64 v15; // rdx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, char *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  CToastCenterExperienceManager *v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *((_BYTE *)this + 441) = 1;
  v2 = *((_QWORD *)this + 50);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 50) = 0LL;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::ReadyToLaunch();
  v18 = 0LL;
  v3 = *((_QWORD *)this + 78);
  v4 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v5 = v4(v3, &unk_180530080, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v17 = 0LL;
    v7 = v18;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v18 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    v22 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.ActionCenter",
      0x2Eu,
      0x2Du);
    v9 = v8(v7, v22, &v17);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 552LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      goto LABEL_25;
    }
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v17;
    v12 = **v17;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 84);
    v9 = v12(v11, &GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861, (char *)this + 672);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 554LL;
      goto LABEL_9;
    }
    v19 = this;
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_36ea44b9487b6fb32d15d1d93feaf54d___(
      &v20,
      (__int64)&v19);
    v13 = v20;
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 84) + 64LL))(
                 *((_QWORD *)this + 84),
                 v20,
                 (char *)this + 680);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 59);
      Instance = CoCreateInstance(
                   &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
                   0LL,
                   0x17u,
                   &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
                   (LPVOID *)this + 59);
      v6 = Instance;
      if ( Instance >= 0 )
      {
        Instance = CToastCenterExperienceManager::SubscribeToNewNotificationWnf(this);
        v6 = Instance;
        if ( Instance >= 0 )
        {
          Instance = CToastCenterExperienceManager::SubscribeToCriticalNotificationWnf(this);
          v6 = Instance;
          if ( Instance >= 0 )
          {
            Instance = CToastCenterExperienceManager::LookupToastQueue(this);
            v6 = Instance;
            if ( Instance >= 0 )
            {
              v6 = 0;
LABEL_22:
              if ( v13 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
              goto LABEL_24;
            }
            v15 = 580LL;
          }
          else
          {
            v15 = 578LL;
          }
        }
        else
        {
          v15 = 575LL;
        }
      }
      else
      {
        v15 = 572LL;
      }
    }
    else
    {
      v15 = 566LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x224,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_25:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v6;
}
