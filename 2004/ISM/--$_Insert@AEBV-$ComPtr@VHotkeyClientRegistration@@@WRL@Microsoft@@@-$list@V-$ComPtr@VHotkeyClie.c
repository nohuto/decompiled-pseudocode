/*
 * XREFs of ??$_Insert@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@Z @ 0x18019D92C
 * Callers:
 *     ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801A1320 (-RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::_Insert<Microsoft::WRL::ComPtr<HotkeyClientRegistration> const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v6; // rsi
  size_t size_of; // rax
  _QWORD *v8; // rdi
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  size_of = std::_Get_size_of_n<24>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v8[2] = *a3;
  result = wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v8 + 2);
  *v8 = a2;
  v8[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v8;
  *v6 = v8;
  return result;
}
