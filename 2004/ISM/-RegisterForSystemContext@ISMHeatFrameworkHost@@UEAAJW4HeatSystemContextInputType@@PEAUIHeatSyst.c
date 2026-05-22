/*
 * XREFs of ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18012CA80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAXXZ @ 0x180035E90 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x180037DDC (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045248 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_unverified@$$CB_KU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@$$QEB_KU_Not_a_node_tag@1@@Z @ 0x18012B720 (--$_Insert_unverified@$$CB_KU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_.c)
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x18012C4D0 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18012CEF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@details@wil@@QE.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801459DC (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x180146C70 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ISMHeatFrameworkHost::RegisterForSystemContext(
        __int64 a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, _BYTE *))
{
  int v4; // edi
  __int64 v6; // rcx
  const char *v7; // r9
  int v8; // edi
  int v9; // edi
  __int64 appended; // rax
  _QWORD *v11; // r11
  __int64 v12; // rdi
  _QWORD *v13; // rax
  const char *v14; // r9
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  struct VirtualTouchpadContextProvider *Instance; // rdi
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  const char *v22; // r9
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rax
  _QWORD *v26; // r11
  __int64 v27; // rdi
  _QWORD *v28; // rax
  const char *v29; // r9
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // rcx
  struct DisplayOcclusionContextProvider *v33; // rdi
  __int64 v34; // rcx
  const char *v35; // r9
  int v36; // eax
  __int64 v37; // rdi
  _QWORD *v38; // rax
  const char *v39; // r9
  __int64 v40; // r10
  __int64 v41; // rax
  __int64 v42; // rcx
  int v44; // eax
  const char *v45; // r9
  int v46; // eax
  _BYTE v47[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v48[64]; // [rsp+30h] [rbp-50h] BYREF
  char v49; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  void (__fastcall ***v51)(_QWORD, _BYTE *); // [rsp+B0h] [rbp+30h] BYREF
  struct VirtualTouchpadContextProvider *v52; // [rsp+B8h] [rbp+38h] BYREF

  v51 = a3;
  v4 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_HeatSystemContext>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetImpl'::`2'::impl,
    a2);
  v8 = v4 - 1;
  if ( v8 )
  {
    v9 = v8 - 3;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          234LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v7);
        __debugbreak();
      }
      appended = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v51, 8uLL);
      v12 = appended & v11[6];
      while ( 1 )
      {
        v13 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                (__int64)v11,
                &v52,
                v12);
        if ( v15 == *v13 )
          break;
        if ( *(void (__fastcall ****)(_QWORD, _BYTE *))(v15 + 16) == a3 )
        {
          v16 = v11[1];
          goto LABEL_10;
        }
      }
      v16 = v11[1];
      v15 = v16;
LABEL_10:
      if ( v15 != v16 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          213LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v14);
        __debugbreak();
      }
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Insert_unverified<unsigned __int64 const,std::_Not_a_node_tag>(
        v11,
        (__int64)v47,
        (const unsigned __int8 *)&v51);
      v17 = *(_QWORD *)(a1 + 216);
      if ( !v17 )
      {
        Instance = VirtualTouchpadContextProvider::GetInstance();
        v52 = Instance;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v52);
        v19 = *(_QWORD *)(a1 + 216);
        *(_QWORD *)(a1 + 216) = Instance;
        if ( v19 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          Instance = *(struct VirtualTouchpadContextProvider **)(a1 + 216);
        }
        v20 = (*(__int64 (__fastcall **)(struct VirtualTouchpadContextProvider *, __int64))(*(_QWORD *)Instance + 24LL))(
                Instance,
                a1 + 8);
        if ( v20 < 0 )
        {
          v21 = 220LL;
LABEL_49:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v20);
          return (unsigned int)v20;
        }
        v17 = *(_QWORD *)(a1 + 216);
      }
      v49 = 0;
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 40LL))(v17, v48) >= 0 )
      {
        v23 = ISMHeatFrameworkHost::BroadcastContextMessage((_QWORD *)a1, (__int64)v48, v51, v22);
        v24 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v23);
LABEL_56:
          std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy((__int64)v48);
          return v24;
        }
      }
    }
    else
    {
      v25 = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v51, 8uLL);
      v27 = v25 & v26[6];
      while ( 1 )
      {
        v28 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                (__int64)v26,
                &v52,
                v27);
        if ( v30 == *v28 )
          break;
        if ( *(void (__fastcall ****)(_QWORD, _BYTE *))(v30 + 16) == a3 )
        {
          v31 = v26[1];
          goto LABEL_27;
        }
      }
      v31 = v26[1];
      v30 = v31;
LABEL_27:
      if ( v30 != v31 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          192LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v29);
        __debugbreak();
      }
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Insert_unverified<unsigned __int64 const,std::_Not_a_node_tag>(
        v26,
        (__int64)v47,
        (const unsigned __int8 *)&v51);
      v32 = *(_QWORD *)(a1 + 120);
      if ( !v32 )
      {
        v33 = DisplayOcclusionContextProvider::GetInstance();
        v52 = v33;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v52);
        v34 = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 120) = v33;
        if ( v34 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          v33 = *(struct DisplayOcclusionContextProvider **)(a1 + 120);
        }
        v20 = (*(__int64 (__fastcall **)(struct DisplayOcclusionContextProvider *, __int64))(*(_QWORD *)v33 + 24LL))(
                v33,
                a1 + 8);
        if ( v20 < 0 )
        {
          v21 = 199LL;
          goto LABEL_49;
        }
        v32 = *(_QWORD *)(a1 + 120);
      }
      v49 = 0;
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v32 + 40LL))(v32, v48) >= 0 )
      {
        v36 = ISMHeatFrameworkHost::BroadcastContextMessage((_QWORD *)a1, (__int64)v48, v51, v35);
        v24 = v36;
        if ( v36 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xCE,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v36);
          goto LABEL_56;
        }
      }
    }
    goto LABEL_57;
  }
  v37 = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v51, 8uLL) & *(_QWORD *)(a1 + 104);
  while ( 1 )
  {
    v38 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
            a1 + 56,
            &v52,
            v37);
    if ( v40 == *v38 )
      break;
    if ( *(void (__fastcall ****)(_QWORD, _BYTE *))(v40 + 16) == a3 )
    {
      v41 = *(_QWORD *)(a1 + 64);
      goto LABEL_44;
    }
  }
  v41 = *(_QWORD *)(a1 + 64);
  v40 = v41;
LABEL_44:
  if ( v40 != v41 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      162LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      v39);
    __debugbreak();
  }
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Insert_unverified<unsigned __int64 const,std::_Not_a_node_tag>(
    (_QWORD *)(a1 + 56),
    (__int64)v47,
    (const unsigned __int8 *)&v51);
  v42 = *(_QWORD *)(a1 + 48);
  if ( v42 )
  {
    v49 = 0;
    if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v42 + 40LL))(v42, v48) >= 0 )
    {
      v46 = ISMHeatFrameworkHost::BroadcastContextMessage((_QWORD *)a1, (__int64)v48, v51, v45);
      v24 = v46;
      if ( v46 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          (const char *)(unsigned int)v46);
        goto LABEL_56;
      }
    }
LABEL_57:
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy((__int64)v48);
    return 0LL;
  }
  v20 = InputConfigContextProvider::Create((struct ISystemContextProvider **)(a1 + 48));
  if ( v20 < 0 )
  {
    v21 = 171LL;
    goto LABEL_49;
  }
  v44 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48), a1 + 8);
  v24 = v44;
  if ( v44 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v44);
    return v24;
  }
  return 0LL;
}
