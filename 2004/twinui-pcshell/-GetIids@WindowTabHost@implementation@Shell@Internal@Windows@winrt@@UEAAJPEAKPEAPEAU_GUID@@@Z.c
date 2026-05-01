/*
 * XREFs of ?GetIids@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800CA4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetIids(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetIids((char *)this + 56);
}
