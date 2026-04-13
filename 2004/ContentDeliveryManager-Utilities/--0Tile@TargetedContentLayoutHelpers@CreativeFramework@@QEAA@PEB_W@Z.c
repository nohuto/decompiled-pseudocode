/*
 * XREFs of ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800A7FF0
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std::allocator_std::_Func_class_bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800A7C80 (std--_Func_impl_std--_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std_ea_1800A7C80.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std::allocator_std::_Func_class_bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800A7D70 (std--_Func_impl_std--_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std_ea_1800A7D70.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006B134 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B30C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x18008B3D4 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x1800A7F60 (-stoul@std@@YAKAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
wchar_t *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(wchar_t *this, wchar_t *a2)
{
  unsigned __int64 v3; // r8
  wchar_t *v4; // rdx
  unsigned __int64 v5; // rdi
  wchar_t *v6; // rdx
  wchar_t *v7; // rdx
  wchar_t v9[4]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  unsigned __int64 v11; // [rsp+48h] [rbp-38h]
  wchar_t String[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  unsigned __int64 v14; // [rsp+68h] [rbp-18h]

  *((_QWORD *)this + 3) = 7LL;
  *((_QWORD *)this + 2) = 0LL;
  *this = 0;
  v14 = 7LL;
  v13 = 0LL;
  String[0] = 0;
  if ( *a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a2[v3] );
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring::assign((void **)String, (char *)a2, v3);
  v5 = std::wstring::find((char *)String, L"!", 0LL, asc_180110F68[0] != 0);
  *((_BYTE *)this + 48) = 0;
  if ( this != String )
    std::wstring::assign((void **)this, (void **)String, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v5 == -1LL )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((double *)this + 5) = (double)(int)std::stoul(String, v4);
  }
  else
  {
    v11 = 7LL;
    v10 = 0LL;
    v9[0] = 0;
    std::wstring::assign((void **)v9, (void **)String, 0LL, v5);
    *((double *)this + 4) = (double)(int)std::stoul(v9, v6);
    if ( v11 >= 8 )
      operator delete(*(void **)v9);
    v11 = 7LL;
    v10 = 0LL;
    v9[0] = 0;
    std::wstring::assign((void **)v9, (void **)String, v5 + 1, 0xFFFFFFFFFFFFFFFFuLL);
    *((double *)this + 5) = (double)(int)std::stoul(v9, v7);
    if ( v11 >= 8 )
      operator delete(*(void **)v9);
  }
  if ( v14 >= 8 )
    operator delete(*(void **)String);
  return this;
}
