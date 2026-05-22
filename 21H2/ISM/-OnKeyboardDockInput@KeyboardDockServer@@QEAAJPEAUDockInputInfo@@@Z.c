/*
 * XREFs of ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180126E0C
 * Callers:
 *     ?OnInputReport@DockProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180188600 (-OnInputReport@DockProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031A5C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037280 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18006C744 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 *     ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x180125FD8 (--$_Try_emplace@AEBUDockInputIdentity@@$$V@-$map@UDockInputIdentity@@UKeyboardDockInput@@U-$less.c)
 *     ??$emplace@AEAUDockInputIdentity@@AEAUtagRECT@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@std@@@std@@@std@@_N@1@AEAUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x180126150 (--$emplace@AEAUDockInputIdentity@@AEAUtagRECT@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@Utag.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUDockInputIdentity@@@Z @ 0x180128AE0 (-erase@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U-$less@UDockInputIden_ea_180128AE0.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@std@@@std@@@2@AEBUDockInputIdentity@@@Z @ 0x180128B4C (-find@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U-$less@UDockInputIdentity@@@std@@V-.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801470D0 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x180147160 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x180147210 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801472A8 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardDockServer::OnKeyboardDockInput(__int64 **this, struct DockInputInfo *a2)
{
  const char *v3; // r9
  __int64 **v4; // r10
  void (__fastcall ***v5)(_QWORD); // rbx
  void (__fastcall ***v6)(_QWORD); // rbx
  __int32 v7; // r12d
  __int32 v8; // r14d
  __int32 v9; // edi
  __int32 v10; // esi
  __int64 *v11; // r15
  size_t *v12; // rax
  int v13; // eax
  struct DisplayOcclusionContextProvider *v14; // rax
  struct DisplayOcclusionContextProvider *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  struct DisplayOcclusionContextProvider *Instance; // rax
  int v19; // eax
  struct DisplayOcclusionContextProvider *v20; // rax
  int v21; // eax
  __int128 v22; // xmm6
  __int128 v23; // xmm7
  __int128 v24; // xmm8
  __int64 **v25; // rbx
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 *i; // rbx
  int v29; // eax
  int v31[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 **v32; // [rsp+30h] [rbp-D8h]
  __int64 *v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  struct DisplayOcclusionContextProvider *v35; // [rsp+48h] [rbp-C0h]
  struct DisplayOcclusionContextProvider *v36; // [rsp+50h] [rbp-B8h]
  struct DisplayOcclusionContextProvider *v37; // [rsp+58h] [rbp-B0h]
  void (__fastcall ***v38)(_QWORD); // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  char v40[16]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v41; // [rsp+88h] [rbp-80h] BYREF
  __m256i v42; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v43[2]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 v44[64]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v32 = this;
  v31[0] = *((_DWORD *)a2 + 1);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
    this + 12,
    &v33,
    (unsigned int *)v31);
  if ( v33 == *v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      128LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
      v3);
    __debugbreak();
  }
  v5 = (void (__fastcall ***)(_QWORD))v33[5];
  v38 = v5;
  if ( v5 )
    (**v5)(v5);
  *(__int16 *)((char *)&v42.m256i_i16[4] + 1) = 0;
  v42.m256i_i8[11] = 0;
  v42.m256i_i32[7] = 0;
  v41 = *((_OWORD *)a2 + 2);
  v42.m256i_i64[0] = *((_QWORD *)a2 + 6);
  v42.m256i_i8[8] = *((_BYTE *)a2 + 60);
  *(_OWORD *)((char *)&v42.m256i_u64[1] + 4) = *((_OWORD *)a2 + 4);
  v6 = v5 + 1;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD))(*v6)[5])(v6) )
    goto LABEL_38;
  v7 = v42.m256i_i32[5];
  v8 = v42.m256i_i32[5] - v42.m256i_i32[3];
  v9 = v42.m256i_i32[4];
  v10 = v42.m256i_i32[6] - v42.m256i_i32[4];
  v11 = (__int64 *)(v32 + 16);
  std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::find(
    v32 + 16,
    &v34,
    &v41);
  if ( v34 != *v11 )
  {
    if ( v42.m256i_i8[8] )
    {
      if ( v8 > 0
        && v10 > 0
        && *(_OWORD *)(v34 + 56) != __PAIR128__(__PAIR64__(v42.m256i_u32[6], v7), __PAIR64__(v9, v42.m256i_u32[3])) )
      {
        *(_OWORD *)(v34 + 56) = *(_OWORD *)((char *)&v42.m256i_u64[1] + 4);
        Instance = DisplayOcclusionContextProvider::GetInstance();
        v15 = Instance;
        v36 = Instance;
        if ( Instance )
        {
          _InterlockedIncrement((volatile signed __int32 *)Instance + 4);
          v15 = v36;
        }
        v19 = DisplayOcclusionContextProvider::OnOcclusionRectUpdated(
                v15,
                (const struct DockInputIdentity *)&v41,
                (const struct tagRECT *)((char *)&v42.m256i_u64[1] + 4));
        v17 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC7,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyb"
                     "oarddockserver.cpp",
            (const char *)(unsigned int)v19);
          goto LABEL_34;
        }
        if ( v15 )
          RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v15 + 8));
      }
      if ( v42.m256i_i8[8] && v8 && v10 )
        goto LABEL_38;
    }
    std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::erase(
      v11,
      &v41);
    v20 = DisplayOcclusionContextProvider::GetInstance();
    v15 = v20;
    v37 = v20;
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v20 + 4);
      v15 = v37;
    }
    v21 = DisplayOcclusionContextProvider::OnOcclusionRectRemoved(v15, (const struct DockInputIdentity *)&v41);
    v17 = v21;
    if ( v21 >= 0 )
    {
LABEL_36:
      if ( v15 )
        RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v15 + 8));
      goto LABEL_38;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
      (const char *)(unsigned int)v21);
LABEL_34:
    if ( v15 )
      RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v15 + 8));
    goto LABEL_44;
  }
  if ( v42.m256i_i8[8] && v8 > 0 && v10 > 0 )
  {
    memset_0(v44, 0, 0x74uLL);
    v43[0] = *(_OWORD *)((char *)&v42.m256i_u64[1] + 4);
    v43[1] = *(_OWORD *)((__int64 (__fastcall *)(_QWORD))(*v6)[7])(v6);
    v12 = (size_t *)((__int64 (__fastcall *)(_QWORD))(*v6)[3])(v6);
    v13 = StringCchCopyW(v44, 0x39uLL, v12);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        161LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::emplace<DockInputIdentity &,tagRECT &>(
      v11,
      (__int64)v40,
      (__int64)&v41,
      v43);
    v14 = DisplayOcclusionContextProvider::GetInstance();
    v15 = v14;
    v35 = v14;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14 + 4);
      v15 = v35;
    }
    v16 = DisplayOcclusionContextProvider::OnOcclusionRectAdded(
            v15,
            (const struct DockInputIdentity *)&v41,
            (const struct DisplayOcclusionRect *)v43);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_34;
    }
    goto LABEL_36;
  }
LABEL_38:
  v22 = v41;
  v23 = *(_OWORD *)v42.m256i_i8;
  v24 = *(_OWORD *)&v42.m256i_u64[2];
  v25 = v32;
  std::map<DockInputIdentity,KeyboardDockInput>::_Try_emplace<DockInputIdentity const &,>(
    v32 + 14,
    (__int64)&v39,
    (int *)&v41);
  v26 = v39;
  *(_OWORD *)(v39 + 56) = v22;
  *(_OWORD *)(v26 + 72) = v23;
  *(_OWORD *)(v26 + 88) = v24;
  v27 = v25[8];
  for ( i = v25[7]; i != v27; ++i )
  {
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)(*i + 8) + 40LL))(
            *i + 8,
            *((unsigned int *)a2 + 1),
            &v41);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        223LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
        (const char *)(unsigned int)v29);
  }
  v17 = 0;
LABEL_44:
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v38);
  return v17;
}
