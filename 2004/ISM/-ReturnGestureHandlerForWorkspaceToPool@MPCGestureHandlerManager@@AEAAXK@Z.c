/*
 * XREFs of ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x18006BB10
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006AFAC (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180069EF4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006AC28 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_18006AC28.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006C198 (-erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_pol_ea_18006C198.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18006C3D4 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 */

void __fastcall MPCGestureHandlerManager::ReturnGestureHandlerForWorkspaceToPool(
        MPCGestureHandlerManager *this,
        unsigned int a2)
{
  __int64 *v2; // rdi
  _QWORD *v4; // rax
  const char *v5; // r9
  unsigned int v6; // r10d
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int *v19; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v20; // [rsp+58h] [rbp+28h] BYREF
  __int64 v21; // [rsp+60h] [rbp+30h] BYREF

  v20 = a2;
  v2 = (__int64 *)((char *)this + 8);
  v4 = (_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
                   (char *)this + 8,
                   &v19,
                   &v20);
  v7 = *v2;
  if ( *v4 == *v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      205LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v5);
    __debugbreak();
  }
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *v2;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    do
    {
      if ( *(_DWORD *)(v8 + 32) >= v6 )
      {
        v7 = v8;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
    v9 = *v2;
  }
  if ( v7 == v9 || v6 < *(_DWORD *)(v7 + 32) )
  {
    v19 = &v20;
    v10 = std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            v2,
            &v21,
            (__int64 *)v7,
            (__int64)v5,
            &v19);
    v6 = v20;
    v7 = *v10;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 168LL) & 0xFFFFFF7F) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      207LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v5);
    __debugbreak();
  }
  v11 = *v2;
  v12 = *(_QWORD *)(*v2 + 8);
  if ( *(_BYTE *)(v12 + 25) )
    goto LABEL_21;
  do
  {
    if ( *(_DWORD *)(v12 + 32) >= v6 )
    {
      v11 = v12;
      v12 = *(_QWORD *)v12;
    }
    else
    {
      v12 = *(_QWORD *)(v12 + 16);
    }
  }
  while ( !*(_BYTE *)(v12 + 25) );
  if ( v11 == *v2 || v6 < *(_DWORD *)(v11 + 32) )
  {
LABEL_21:
    v19 = &v20;
    v11 = *std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
             v2,
             &v21,
             (__int64 *)v11,
             (__int64)v5,
             &v19);
  }
  *(_DWORD *)(*(_QWORD *)(v11 + 40) + 912LL) = 0;
  v13 = *v2;
  v14 = *(_QWORD *)(*v2 + 8);
  if ( *(_BYTE *)(v14 + 25) )
    goto LABEL_29;
  do
  {
    if ( *(_DWORD *)(v14 + 32) >= v20 )
    {
      v13 = v14;
      v14 = *(_QWORD *)v14;
    }
    else
    {
      v14 = *(_QWORD *)(v14 + 16);
    }
  }
  while ( !*(_BYTE *)(v14 + 25) );
  if ( v13 == *v2 || v20 < *(_DWORD *)(v13 + 32) )
  {
LABEL_29:
    v19 = &v20;
    v13 = *std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
             v2,
             &v21,
             (__int64 *)v13,
             (__int64)v5,
             &v19);
  }
  v15 = (__int64 *)*((_QWORD *)this + 6);
  v16 = (__int64 *)(v13 + 40);
  if ( *((__int64 **)this + 7) == v15 )
  {
    std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> const &>(
      (__int64 *)this + 5,
      (__int64)v15,
      v16);
  }
  else
  {
    v17 = *v16;
    *v15 = *v16;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    *((_QWORD *)this + 6) += 8LL;
  }
  std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
    v2,
    &v20);
}
