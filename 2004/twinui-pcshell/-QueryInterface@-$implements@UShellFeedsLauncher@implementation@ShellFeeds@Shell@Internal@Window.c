/*
 * XREFs of ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DCCD0
 * Callers:
 *     ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FF490 (-QueryInterface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@In_ea_1800FF490.c)
 *     ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FF4A0 (-QueryInterface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@In_ea_1800FF4A0.c)
 *     ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FF4B0 (-QueryInterface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@In_ea_1800FF4B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::immersive_shell_component,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 40);
}
