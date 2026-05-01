/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801F263C
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800D4A20 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$7 @ 0x1800D4D0E (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1800D4D0E.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800D8810 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$8 @ 0x1800DA9A2 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_1800DA9A2.c)
 *     _SearchAppDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor$0 @ 0x1801008FF (_SearchAppDesktopExperienceView--ApplyCortanaWindowRegion_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$1 @ 0x1801F515D (_CortanaStoreAppExperienceManager--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$1.c)
 *     _SearchAppDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1802082A0 (_SearchAppDesktopExperienceView--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor$0 @ 0x18020A103 (_CortanaDesktopExperienceView--ApplyCortanaWindowRegion_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects_::_1_::dtor$0 @ 0x18020A265 (_CortanaDesktopExperienceView--ApplyCortanaWindowRegionWithCustomRects_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1802110DC (_CortanaDesktopExperienceView--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
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
