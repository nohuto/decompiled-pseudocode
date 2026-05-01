/*
 * XREFs of ?GetRuntimeClassName@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800CC0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetRuntimeClassName(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        HSTRING *a2)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName((char *)this + 56);
}
