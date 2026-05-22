/*
 * XREFs of _lambda_a2967a5fef4bd4911d3370ff5cbae9e9_::operator() @ 0x180198520
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_a2967a5fef4bd4911d3370ff5cbae9e9_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180198360 (--$_Callback_once@V-$tuple@$$QEAV_lambda_a2967a5fef4bd4911d3370ff5cbae9e9_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x18002B61C (--$-0AEAY0BD@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18002B7FC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x18002BFF4 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x180036210 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x180036340 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003D1A4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_a2967a5fef4bd4911d3370ff5cbae9e9_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct BamoMPCConstantManagerClientPrincipal *v5; // rbx
  float v6; // [rsp+20h] [rbp-89h] BYREF
  void *v7[3]; // [rsp+28h] [rbp-81h] BYREF
  __m128i v8; // [rsp+40h] [rbp-69h] BYREF
  char v9[40]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v10[4]; // [rsp+78h] [rbp-31h] BYREF
  int v11; // [rsp+98h] [rbp-11h]
  char v12; // [rsp+9Ch] [rbp-Dh]
  _QWORD v13[4]; // [rsp+A0h] [rbp-9h] BYREF
  float v14; // [rsp+C0h] [rbp+17h]
  char v15; // [rsp+C4h] [rbp+1Bh]
  _BYTE v16[40]; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+F0h] [rbp+47h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

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
  v6 = 0.0049999999;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v9,
    (__int64)L"PointScaleFactorXY",
    &v6);
  std::wstring::wstring(v10, (__int64)L"PointScaleFactorStick");
  v11 = 1000593162;
  v12 = 2;
  std::wstring::wstring(v13, (__int64)L"DeadZoneAngle");
  v14 = FLOAT_3_0;
  v15 = 2;
  v6 = FLOAT_0_1;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v16,
    (__int64)L"ThumbStickDeadZone",
    &v6);
  v8.m128i_i64[0] = (__int64)v9;
  v8.m128i_i64[1] = (__int64)&v17;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    (__int64 *)v7,
    &v8);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)v5,
    (*a1 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    v7);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>(
    (__int64)v7,
    (__int64)v7,
    *((char **)v7[0] + 1));
  std::_Deallocate<16,0>(v7[0], (const struct std::nothrow_t *)0x48);
  `eh vector destructor iterator'(
    v9,
    40LL,
    4LL,
    (void (*)(void *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
