/*
 * XREFs of ?UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18012CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18012CE60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@details@wil@@QE.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18012DB38 (-erase@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::UnregisterForSystemContext(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v6; // rcx
  const char *v7; // r9
  int v8; // edi
  int v9; // edi
  __int64 appended; // rax
  __int64 v11; // r11
  __int64 v12; // rbp
  _QWORD *v13; // rax
  const char *v14; // r9
  __int64 v15; // r10
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // rbp
  _QWORD *v22; // rax
  const char *v23; // r9
  __int64 v24; // r10
  __int64 v25; // rbp
  _QWORD *v26; // rax
  const char *v27; // r9
  __int64 v28; // r10
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v31; // [rsp+50h] [rbp+18h] BYREF
  __int64 v32; // [rsp+58h] [rbp+20h] BYREF

  v31 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_HeatSystemContext>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetImpl'::`2'::impl,
    1u,
    a3);
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 3;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          301LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v7);
        __debugbreak();
      }
      if ( !a1[27] )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          285LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v7);
        __debugbreak();
      }
      appended = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v31, 8uLL);
      v12 = *(_QWORD *)(v11 + 48) & appended;
      while ( 1 )
      {
        v13 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                v11,
                &v32,
                v12);
        if ( v15 == *v13 )
          break;
        if ( *(_QWORD *)(v15 + 16) == a3 )
          goto LABEL_12;
      }
      v15 = *(_QWORD *)(v11 + 8);
LABEL_12:
      if ( v15 == a1[29] )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          287LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v14);
        __debugbreak();
      }
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
        v11,
        &v31);
      if ( !a1[30] )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[27] + 32LL))(a1[27], a1 + 1);
        if ( v16 < 0 )
        {
          v17 = 293LL;
LABEL_45:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v16);
          return (unsigned int)v16;
        }
        v18 = a1[27];
        if ( v18 )
        {
          a1[27] = 0LL;
LABEL_48:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    else
    {
      if ( !a1[15] )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          269LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v7);
        __debugbreak();
      }
      v19 = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v31, 8uLL);
      v21 = *(_QWORD *)(v20 + 48) & v19;
      while ( 1 )
      {
        v22 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                v20,
                &v32,
                v21);
        if ( v24 == *v22 )
          break;
        if ( *(_QWORD *)(v24 + 16) == a3 )
          goto LABEL_26;
      }
      v24 = *(_QWORD *)(v20 + 8);
LABEL_26:
      if ( v24 == a1[17] )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          271LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v23);
        __debugbreak();
      }
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
        v20,
        &v31);
      if ( !a1[18] )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[15] + 32LL))(a1[15], a1 + 1);
        if ( v16 < 0 )
        {
          v17 = 277LL;
          goto LABEL_45;
        }
        v18 = a1[15];
        if ( v18 )
        {
          a1[15] = 0LL;
          goto LABEL_48;
        }
      }
    }
  }
  else
  {
    if ( !a1[6] )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        253LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        v7);
      __debugbreak();
    }
    v25 = a1[13] & std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v31, 8uLL);
    while ( 1 )
    {
      v26 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
              (__int64)(a1 + 7),
              &v32,
              v25);
      if ( v28 == *v26 )
        break;
      if ( *(_QWORD *)(v28 + 16) == a3 )
        goto LABEL_40;
    }
    v28 = a1[8];
LABEL_40:
    if ( v28 == a1[8] )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        255LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        v27);
      __debugbreak();
    }
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
      a1 + 7,
      &v31);
    if ( !a1[9] )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[6] + 32LL))(a1[6], a1 + 1);
      if ( v16 < 0 )
      {
        v17 = 261LL;
        goto LABEL_45;
      }
      v18 = a1[6];
      if ( v18 )
      {
        a1[6] = 0LL;
        goto LABEL_48;
      }
    }
  }
  return 0LL;
}
