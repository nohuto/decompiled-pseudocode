/*
 * XREFs of ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x18006F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4InputType@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4InputType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003909C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4InputType@@@2@V-$tuple@$$V@2@@-$_Tr.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069138 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006D7A8 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$ba.c)
 *     ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x18006F228 (-GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@V-.c)
 *     StubCallback @ 0x180070290 (StubCallback.c)
 *     ?value@?$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ @ 0x180070C4C (-value@-$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ.c)
 */

__int64 __fastcall MPCConstantManager::OnCallbacksChanged(
        MPCConstantManager *this,
        struct BamoMPCConstantManagerClientStub *a2)
{
  int v2; // r15d
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r14
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  char *v10; // rsi
  __int64 **v11; // r9
  __int64 *v12; // rcx
  __int64 *v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  const char *v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  char v24[8]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v25; // [rsp+38h] [rbp-81h] BYREF
  __int128 v26; // [rsp+48h] [rbp-71h]
  __int128 v27; // [rsp+60h] [rbp-59h] BYREF
  _DWORD *v28; // [rsp+70h] [rbp-49h]
  __int128 v29; // [rsp+80h] [rbp-39h] BYREF
  __int64 v30; // [rsp+90h] [rbp-29h]
  _BYTE v31[32]; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v32[80]; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  _QWORD *v34; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v35; // [rsp+130h] [rbp+77h] BYREF
  _DWORD *v36; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = (int)a2;
  if ( a2 && (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8) )
  {
    v5 = (__int64 *)*((_QWORD *)this + 9);
    v6 = *v5;
    v35 = *v5;
    while ( (__int64 *)v6 != v5 )
    {
      v7 = (_DWORD *)(v6 + 32);
      v8 = *(_QWORD **)(v6 + 40);
      v9 = (_QWORD *)*v8;
      v34 = (_QWORD *)*v8;
      while ( v9 != v8 )
      {
        v10 = (char *)(v9 + 4);
        MPCConstantManager::GetPROPVARIANTFromConstantValue(v4, (__int64)v32, v9[8]);
        v11 = (__int64 **)((char *)this + 56);
        v12 = (__int64 *)*((_QWORD *)this + 7);
        v13 = (__int64 *)v12[1];
        if ( *((_BYTE *)v13 + 25) )
          goto LABEL_15;
        v14 = *v7;
        do
        {
          if ( *((_DWORD *)v13 + 8) >= v14 )
          {
            v12 = v13;
            v13 = (__int64 *)*v13;
          }
          else
          {
            v13 = (__int64 *)v13[2];
          }
        }
        while ( !*((_BYTE *)v13 + 25) );
        if ( v12 == *v11 || v14 < *((_DWORD *)v12 + 8) )
        {
LABEL_15:
          v36 = v7;
          v12 = *(__int64 **)std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<enum InputType const &>,std::tuple<>>(
                               (__int64 *)this + 7,
                               (__int64)v24,
                               (int)v12,
                               (__int64)v11,
                               &v36);
        }
        std::map<std::wstring,std::variant<unsigned long,bool,float>>::_Try_emplace<std::wstring const &,>(
          v12 + 5,
          (__int64)&v25,
          v10);
        MPCConstantManager::GetPROPVARIANTFromConstantValue(v15, (__int64)v31, *(_QWORD *)(v25 + 64));
        if ( !v32[24] || !v31[24] )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            364LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v16);
          __debugbreak();
        }
        v18 = std::optional<tagPROPVARIANT>::value(v31);
        v26 = *(_OWORD *)v18;
        v36 = *(_DWORD **)(v18 + 16);
        v19 = std::optional<tagPROPVARIANT>::value(v32);
        if ( *((_QWORD *)v10 + 3) >= 8uLL )
          v10 = *(char **)v10;
        v20 = *v7;
        v27 = v26;
        v21 = *(_OWORD *)v19;
        v28 = v36;
        v22 = *(_QWORD *)(v19 + 16);
        v29 = v21;
        v30 = v22;
        StubCallback(v2, v20, (int)v10, (int)&v29, (__int64)&v27);
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v34);
        v9 = v34;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v35);
      v6 = v35;
    }
  }
  return 0LL;
}
