/*
 * XREFs of ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1800606C8
 * Callers:
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180060650 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x1800606A0 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18030A210 (-ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18030A684 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_4e5ace4978557f95a503fdd97e32a105___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x18030B300 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18030B300.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncher::PublishLauncherVisibilityState(XamlLauncher *this, unsigned __int8 a2)
{
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rax
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  v10 = a2;
  v4 = RtlPublishWnfStateData(WNF_IMSN_LAUNCHERVISIBILITY, 0LL, &v10, 4LL) | 0x10000000;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3BB,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4,
      0);
  v5 = *((_QWORD *)this + 19);
  v9 = 0LL;
  v6 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v5 + 72);
  v7 = **v6;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v7(v6, &GUID_ad23ddfb_50f1_4f9f_ba1f_dda292ae0b6a, &v9) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
}
