/*
 * XREFs of ?GetPROPVARIANT@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@W4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18006F6AC
 * Callers:
 *     ?GetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Proxy@@@Z @ 0x18006EFA0 (-GetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEA.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4InputType@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4InputType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003903C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4InputType@@@2@V-$tuple@$$V@2@@-$_Tr.c)
 *     ??$find@V?$basic_string_view@GU?$char_traits@G@std@@@std@@U?$less@X@2@H@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x18006E118 (--$find@V-$basic_string_view@GU-$char_traits@G@std@@@std@@U-$less@X@2@H@-$_Tree@V-$_Tmap_traits@.c)
 *     ?CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18006EA8C (-CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 *     ?CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18006EB6C (-CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$.c)
 *     ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x18006F7F8 (-GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@V-.c)
 */

_OWORD *__fastcall MPCConstantManager::GetPROPVARIANT(__int64 a1, _OWORD *a2, int a3, __m128i *a4)
{
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 *v9; // rax
  __m128i *v10; // rdx
  __int64 v11; // r9
  __int64 *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _BYTE v16[16]; // [rsp+30h] [rbp-20h] BYREF
  __m128i v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+80h] [rbp+30h] BYREF
  int *v19; // [rsp+88h] [rbp+38h] BYREF

  v18 = a3;
  v17 = *a4;
  if ( MPCConstantManager::CheckModifiedConstantExistence(a1, a3, &v17) )
  {
    v8 = *(__int64 **)(a1 + 72);
    v9 = (__int64 *)v8[1];
    if ( *((_BYTE *)v9 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v9 + 8) >= v18 )
      {
        v8 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
    if ( v8 == *(__int64 **)(a1 + 72) || v18 < *((_DWORD *)v8 + 8) )
    {
LABEL_9:
      v19 = &v18;
      v8 = *(__int64 **)std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<enum InputType const &>,std::tuple<>>(
                          (__int64 *)(a1 + 72),
                          (__int64)v16,
                          (int)v8,
                          v7,
                          &v19);
    }
    v10 = &v17;
  }
  else
  {
    v17 = *a4;
    if ( !MPCConstantManager::CheckConstantExistence(a1, v18, &v17) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      return a2;
    }
    v8 = *(__int64 **)(a1 + 56);
    v12 = (__int64 *)v8[1];
    if ( *((_BYTE *)v12 + 25) )
      goto LABEL_19;
    do
    {
      if ( *((_DWORD *)v12 + 8) >= v18 )
      {
        v8 = v12;
        v12 = (__int64 *)*v12;
      }
      else
      {
        v12 = (__int64 *)v12[2];
      }
    }
    while ( !*((_BYTE *)v12 + 25) );
    if ( v8 == *(__int64 **)(a1 + 56) || v18 < *((_DWORD *)v8 + 8) )
    {
LABEL_19:
      v19 = &v18;
      v8 = *(__int64 **)std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<enum InputType const &>,std::tuple<>>(
                          (__int64 *)(a1 + 56),
                          (__int64)&v17,
                          (int)v8,
                          v11,
                          &v19);
    }
    v10 = (__m128i *)v16;
  }
  v13 = std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::find<std::basic_string_view<unsigned short>,std::less<void>,int>(
          (__int64)(v8 + 5),
          v10,
          a4);
  MPCConstantManager::GetPROPVARIANTFromConstantValue(v14, a2, *(_QWORD *)(*v13 + 64LL));
  return a2;
}
