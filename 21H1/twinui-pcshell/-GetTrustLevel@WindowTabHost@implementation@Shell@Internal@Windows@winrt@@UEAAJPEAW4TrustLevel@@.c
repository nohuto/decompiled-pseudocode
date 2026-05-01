/*
 * XREFs of ?GetTrustLevel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800B80C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetTrustLevel(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        enum TrustLevel *a2)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetTrustLevel((char *)this + 56);
}
