/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap_::_1_::dtor$0 @ 0x1800C250E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>>((struct _IMAGELIST **)(a2 + 96));
}
