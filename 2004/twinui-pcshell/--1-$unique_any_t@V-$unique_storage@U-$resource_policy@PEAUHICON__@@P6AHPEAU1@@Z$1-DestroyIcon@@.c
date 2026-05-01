/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18037BFD8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor$4 @ 0x1800D38F0 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TabProxyWindow_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor$5 @ 0x1800D3900 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TabProxyWindow_--_1_--dtor$5.c)
 *     ??1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800D3A8C (--1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$5 @ 0x1800D4CD8 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1800D4CD8.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2 @ 0x1800D5AA0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFr_ea_1800D5AA0.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2_::_1_::dtor$2 @ 0x1800D66FE (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconF_ea_1800D66FE.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800D6AA0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::dtor$8 @ 0x1800D84C9 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsyn_ea_1800D84C9.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::dtor$9 @ 0x1800D84F8 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsyn_ea_1800D84F8.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1800DBA60 (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIco.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>(
        HICON *a1)
{
  HICON v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return DestroyIcon(v1);
  return result;
}
