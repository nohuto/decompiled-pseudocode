/*
 * XREFs of ?QueryInterface@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800CB550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,void>::QueryInterface(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 40;
  if ( !a1 )
    v1 = 80LL;
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(v1);
}
