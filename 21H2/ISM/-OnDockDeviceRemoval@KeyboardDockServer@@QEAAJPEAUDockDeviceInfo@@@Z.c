/*
 * XREFs of ?OnDockDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x180126A88
 * Callers:
 *     ?OnDeviceRemoval@DockProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801885B0 (-OnDeviceRemoval@DockProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18006C124 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18006C744 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 */

__int64 __fastcall KeyboardDockServer::OnDockDeviceRemoval(__int64 **this, struct DockDeviceInfo *a2)
{
  __int64 **v2; // r14
  const char *v4; // r9
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 *i; // rdi
  int v8; // eax
  __int64 *v9; // rdi
  __int64 v10; // r9
  _QWORD *v11; // r9
  _QWORD *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = this + 12;
  LODWORD(v15) = *(_DWORD *)a2;
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
    this + 12,
    &v16,
    (unsigned int *)&v15);
  v5 = v16;
  if ( v16 == *v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      94LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
      v4);
    __debugbreak();
  }
  v6 = this[8];
  for ( i = this[7]; i != v6; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*i + 8) + 32LL))(*i + 8, *((unsigned int *)v5 + 8));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        101LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>>::_Extract(
         v2,
         v5);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v9 + 5);
  std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x30);
  v10 = *this[14];
LABEL_9:
  v15 = v10;
  while ( (__int64 *)v10 != this[14] )
  {
    if ( *(_DWORD *)(v10 + 32) == *((_DWORD *)v5 + 8) )
    {
      v15 = v10;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v15);
      v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>>::_Extract(
              this + 14,
              v11);
      std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x68);
      v10 = v15;
      goto LABEL_9;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v15);
    v10 = v15;
  }
  return 0LL;
}
