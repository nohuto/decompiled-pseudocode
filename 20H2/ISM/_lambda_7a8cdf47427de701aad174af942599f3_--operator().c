/*
 * XREFs of _lambda_7a8cdf47427de701aad174af942599f3_::operator() @ 0x180189A3C
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_7a8cdf47427de701aad174af942599f3_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1801898F0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_7a8cdf47427de701aad174af942599f3_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18002B88C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x18002C084 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x1800362E0 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x180036410 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003D284 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_7a8cdf47427de701aad174af942599f3_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct BamoMPCConstantManagerClientPrincipal *v5; // rbx
  void *v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __m128i v7; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-30h] BYREF
  char v9; // [rsp+60h] [rbp-10h]
  char v10; // [rsp+64h] [rbp-Ch]
  __int64 v11; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v5 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  std::wstring::wstring(v8, (__int64)L"AllowDownleveling");
  v9 = 1;
  v10 = 1;
  v7.m128i_i64[0] = (__int64)v8;
  v7.m128i_i64[1] = (__int64)&v11;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    (__int64 *)v6,
    &v7);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)v5,
    (*a1 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    v6);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>(
    (__int64)v6,
    (__int64)v6,
    *((char **)v6[0] + 1));
  std::_Deallocate<16,0>(v6[0], (const struct std::nothrow_t *)0x48);
  `eh vector destructor iterator'(
    (char *)v8,
    40LL,
    1LL,
    (void (*)(void *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
