/*
 * XREFs of ?AddRef@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAAKXZ @ 0x1800DC560
 * Callers:
 *     ?AddRef@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@W7EAAKXZ @ 0x1800FF460 (-AddRef@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@W_ea_1800FF460.c)
 *     ?AddRef@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBA@EAAKXZ @ 0x1800FF470 (-AddRef@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@W_ea_1800FF470.c)
 *     ?AddRef@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBI@EAAKXZ @ 0x1800FF480 (-AddRef@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@W_ea_1800FF480.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::immersive_shell_component,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef(a1 + 40);
}
