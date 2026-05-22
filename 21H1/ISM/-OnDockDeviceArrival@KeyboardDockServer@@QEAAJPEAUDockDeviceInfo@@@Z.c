/*
 * XREFs of ?OnDockDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x180126978
 * Callers:
 *     ?Initialize@DockProcessor@@IEAAJXZ @ 0x180188598 (-Initialize@DockProcessor@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18006C9A4 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 *     ??$emplace@AEAKAEAV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801260F0 (--$emplace@AEAKAEAV-$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??0BamoDockDevicePrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180126310 (--0BamoDockDevicePrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardDockServer::OnDockDeviceArrival(__int64 **this, struct DockDeviceInfo *a2)
{
  __int64 *v4; // rsi
  const char *v5; // r9
  __int64 *v6; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *BamoServerConnection; // rax
  void (__fastcall ***v8)(_QWORD); // rbx
  __int64 v9; // rdx
  __int64 *v10; // rsi
  __int64 *i; // rbx
  int v12; // eax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BamoDockDevicePrincipal *v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+58h] [rbp+10h] BYREF

  v4 = (__int64 *)(this + 12);
  LODWORD(v16) = *(_DWORD *)a2;
  if ( *std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
          this + 12,
          &v17,
          (unsigned int *)&v16) != this[12] )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      68LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
      v5);
    __debugbreak();
  }
  v16 = 0LL;
  v6 = (__int64 *)operator new(0x58uLL);
  v17 = v6;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v16 = BamoDockDevicePrincipal::BamoDockDevicePrincipal((BamoDockDevicePrincipal *)v6, BamoServerConnection);
  v8 = (void (__fastcall ***)(_QWORD))((char *)v16 + 8);
  (*(void (__fastcall **)(char *, char *))(*((_QWORD *)v16 + 1) + 32LL))((char *)v16 + 8, (char *)a2 + 1548);
  LOBYTE(v9) = *((_BYTE *)a2 + 1663);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), __int64))(*v8)[6])(v8, v9);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), char *))(*v8)[8])(v8, (char *)a2 + 1668);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>,0>>::emplace<unsigned long &,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy> &>(
    v4,
    (__int64)v14,
    a2,
    (void (__fastcall ****)(_QWORD))&v16);
  v10 = this[8];
  for ( i = this[7]; i != v10; ++i )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoDockDevicePrincipal *))(*(_QWORD *)(*i + 8) + 24LL))(
            *i + 8,
            *(unsigned int *)a2,
            v16);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        84LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
        (const char *)(unsigned int)v12);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v16);
  return 0LL;
}
