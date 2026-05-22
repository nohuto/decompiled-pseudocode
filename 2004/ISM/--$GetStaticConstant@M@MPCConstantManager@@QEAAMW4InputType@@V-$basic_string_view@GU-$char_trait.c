/*
 * XREFs of ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C9F4
 * Callers:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C818 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x18018FDAC (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4InputType@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4InputType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003909C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4InputType@@@2@V-$tuple@$$V@2@@-$_Tr.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@V?$basic_string_view@GU?$char_traits@G@std@@@std@@U?$less@X@2@H@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x18006DB48 (--$find@V-$basic_string_view@GU-$char_traits@G@std@@@std@@U-$less@X@2@H@-$_Tree@V-$_Tmap_traits@.c)
 *     ?CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18006E4BC (-CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 *     ?CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18006E59C (-CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180070908 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

float __fastcall MPCConstantManager::GetStaticConstant<float>(__int64 a1, int a2, __m128i *a3)
{
  const char *v5; // r9
  __int64 v6; // r9
  __int64 *v7; // rcx
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 *v12; // rax
  _QWORD *v13; // rax
  __m128i v15; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v17; // [rsp+68h] [rbp+28h] BYREF
  int *v18; // [rsp+70h] [rbp+30h] BYREF
  char v19; // [rsp+78h] [rbp+38h] BYREF

  v17 = a2;
  v15 = *a3;
  if ( !MPCConstantManager::CheckConstantExistence(a1, a2, &v15) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      18LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCConstantManager.inl",
      v5);
    __debugbreak();
  }
  v15 = *a3;
  if ( MPCConstantManager::CheckModifiedConstantExistence(a1, v17, &v15) )
  {
    v7 = *(__int64 **)(a1 + 72);
    v8 = (__int64 *)v7[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_11;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= v17 )
      {
        v7 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v7 == *(__int64 **)(a1 + 72) || v17 < *((_DWORD *)v7 + 8) )
    {
LABEL_11:
      v18 = &v17;
      v7 = *(__int64 **)std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<enum InputType const &>,std::tuple<>>(
                          (__int64 *)(a1 + 72),
                          (__int64)&v19,
                          (int)v7,
                          v6,
                          &v18);
    }
    v9 = std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::find<std::basic_string_view<unsigned short>,std::less<void>,int>(
           (__int64)(v7 + 5),
           &v15,
           a3);
    v10 = *v9;
    if ( *(_BYTE *)(*v9 + 68LL) != 2 )
      std::_Throw_bad_variant_access();
  }
  else
  {
    v11 = *(__int64 **)(a1 + 56);
    v12 = (__int64 *)v11[1];
    if ( *((_BYTE *)v12 + 25) )
      goto LABEL_21;
    do
    {
      if ( *((_DWORD *)v12 + 8) >= v17 )
      {
        v11 = v12;
        v12 = (__int64 *)*v12;
      }
      else
      {
        v12 = (__int64 *)v12[2];
      }
    }
    while ( !*((_BYTE *)v12 + 25) );
    if ( v11 == *(__int64 **)(a1 + 56) || v17 < *((_DWORD *)v11 + 8) )
    {
LABEL_21:
      v18 = &v17;
      v11 = *(__int64 **)std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<enum InputType const &>,std::tuple<>>(
                           (__int64 *)(a1 + 56),
                           (__int64)&v19,
                           (int)v11,
                           v6,
                           &v18);
    }
    v13 = std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::find<std::basic_string_view<unsigned short>,std::less<void>,int>(
            (__int64)(v11 + 5),
            &v15,
            a3);
    v10 = *v13;
    if ( *(_BYTE *)(*v13 + 68LL) != 2 )
      std::_Throw_bad_variant_access();
  }
  return *(float *)(v10 + 64);
}
