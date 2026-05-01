/*
 * XREFs of ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18032C8C4
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18032DC90 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::InitializeJumpViewExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.JumpView",
    0x2Au,
    0x29u);
  v5 = v4(a2, v14, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (__int64 *)((char *)this + 136);
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
    v10 = **v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
    v5 = v10(v9, &GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0, v8);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 510LL;
  }
  else
  {
    v7 = 509LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v6;
}
