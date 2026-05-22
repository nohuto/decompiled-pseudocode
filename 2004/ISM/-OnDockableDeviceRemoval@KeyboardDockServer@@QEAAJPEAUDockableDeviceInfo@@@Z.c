/*
 * XREFs of ?OnDockableDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x1801268DC
 * Callers:
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x18009C360 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18006BDB4 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18006C3D4 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 */

__int64 __fastcall KeyboardDockServer::OnDockableDeviceRemoval(__int64 **this, struct DockableDeviceInfo *a2)
{
  __int64 **v2; // rsi
  const char *v4; // r9
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 *i; // rdi
  int v8; // eax
  __int64 *v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = this + 10;
  v12 = *(_DWORD *)a2;
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
    this + 10,
    &v13,
    &v12);
  v5 = v13;
  if ( v13 == *v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      259LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
      v4);
    __debugbreak();
  }
  v6 = this[8];
  for ( i = this[7]; i != v6; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*i + 8) + 56LL))(*i + 8, *((unsigned int *)v5 + 8));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        266LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>>::_Extract(
         v2,
         v5);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v9 + 5);
  std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x30);
  return 0LL;
}
