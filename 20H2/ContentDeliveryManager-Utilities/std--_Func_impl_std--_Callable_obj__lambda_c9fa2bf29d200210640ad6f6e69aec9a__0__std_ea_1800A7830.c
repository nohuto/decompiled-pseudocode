/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std::allocator_std::_Func_class_bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800A7830
 * Callers:
 *     <none>
 * Callees:
 *     ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A65AC (-push_back@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Tar.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800A7BA0 (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::_Func_impl_std::_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std::allocator_std::_Func_class_bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        __int64 a2,
        HSTRING *a3)
{
  __int64 v3; // rbx
  const wchar_t *StringRawBuffer; // rdx
  unsigned __int64 v5; // rdx
  void *v7[7]; // [rsp+28h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  StringRawBuffer = WindowsGetStringRawBuffer(*a3, 0LL);
  v5 = CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
         (CreativeFramework::TargetedContentLayoutHelpers::Tile *)v7,
         StringRawBuffer);
  std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::push_back((unsigned __int64 *)(v3 + 64), v5);
  if ( v7[3] >= (void *)8 )
    operator delete(v7[0]);
  return 1;
}
