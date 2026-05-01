/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801CEB0C
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800C2520 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$7 @ 0x1800C280E (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1800C280E.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800C6310 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$8 @ 0x1800C84A2 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_1800C84A2.c)
 *     _SearchAppDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor$0 @ 0x1800DBA8F (_SearchAppDesktopExperienceView--ApplyCortanaWindowRegion_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$1 @ 0x1801D163D (_CortanaStoreAppExperienceManager--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$1.c)
 *     _SearchAppDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1801E5020 (_SearchAppDesktopExperienceView--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor$0 @ 0x1801E6E63 (_CortanaDesktopExperienceView--ApplyCortanaWindowRegion_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects_::_1_::dtor$0 @ 0x1801E6FC5 (_CortanaDesktopExperienceView--ApplyCortanaWindowRegionWithCustomRects_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1801EDFDC (_CortanaDesktopExperienceView--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return DeleteObject(v1);
  return result;
}
