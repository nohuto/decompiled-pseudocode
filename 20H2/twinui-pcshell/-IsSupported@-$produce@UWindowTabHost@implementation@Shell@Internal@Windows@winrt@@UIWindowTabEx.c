/*
 * XREFs of ?IsSupported@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800CC590
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSupported@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1800CC5EC (-IsSupported@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800CEEDC (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ?shim@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@QEAAAEAUWindowTabHost@implementation@Shell@Internal@Windows@3@XZ @ 0x1800D0578 (-shim@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExte.c)
 */

void __noreturn winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::IsSupported()
{
  __int64 v0; // rax
  winrt::Windows::Internal::Shell::implementation::WindowTabHost *v1; // rcx
  __int64 *v2; // rdx
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v0 = winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension,void>::shim();
  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
    &v4,
    v0 + 48);
  try
  {
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::IsSupported(v1);
  }
  catch ( ... )
  {
    v2 = &v3;
    *((_DWORD *)v2 + 16) = *(_DWORD *)winrt::to_hresult(v2 + 8);
  }
}
