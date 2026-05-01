/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180441FD4
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800D6260 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$8 @ 0x1800D655A (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1800D655A.c)
 *     __lambda_688f7da27bd069ce265bc30902a9ac85_::operator()_::_1_::dtor$1 @ 0x18044253A (__lambda_688f7da27bd069ce265bc30902a9ac85_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?close@select_result@wil@@SAXU12@@Z @ 0x180445540 (-close@select_result@wil@@SAXU12@@Z.c)
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::select_result),&public: static void wil::select_result::close(wil::select_result),wistd::integral_constant<unsigned __int64,0>,wil::select_result,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::select_result),&public: static void wil::select_result::close(wil::select_result),wistd::integral_constant<unsigned __int64,0>,wil::select_result,void *,0,std::nullptr_t>>>(
        __int128 *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)a1 )
  {
    v2 = *a1;
    return wil::select_result::close(&v2);
  }
  return result;
}
