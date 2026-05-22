/*
 * XREFs of ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x180132780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x180014720 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x1800454F0 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@$$QEBIU_Not_a_node_tag@1@@Z @ 0x180096E38 (--$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-.c)
 *     ??$_Insert@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$list@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18013212C (--$_Insert@AEAIAEAV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@-$.c)
 *     ??$_Insert_unverified@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@@Z @ 0x1801321E0 (--$_Insert_unverified@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_poli.c)
 *     ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x180132EA4 (-GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenEventsDispatcherPrincipal::AttachClient(
        __int64 **this,
        struct BamoPenEventsDispatcherStub *a2,
        struct BamoPenEventsClientProxy *a3)
{
  void (__fastcall ***v4)(_QWORD); // rbx
  void (__fastcall ***v5)(_QWORD); // rdi
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(void (__fastcall ***)(_QWORD), __int64); // r8
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v16; // [rsp+50h] [rbp+20h] BYREF
  void (__fastcall ***v17)(_QWORD); // [rsp+68h] [rbp+38h] BYREF

  wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
    &v17,
    (void (__fastcall ***)(_QWORD))a3);
  v4 = v17;
  v5 = v17 + 1;
  LOBYTE(v6) = PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag((PenEventsDispatcherPrincipal *)this);
  v8 = v7(v5, v6);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      148LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdisp"
               "atcherprincipal.cpp",
      (const char *)(unsigned int)v8);
  LOBYTE(v9) = *((_DWORD *)this + 51) != 0;
  v10 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), __int64))(*v5)[9])(v5, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      149LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdisp"
               "atcherprincipal.cpp",
      (const char *)(unsigned int)v10);
  v4[7] = (void (__fastcall **)(_QWORD))this;
  v16 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4[4][2] + 8LL))(v4[4][2]) + 32);
  std::list<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>::_Insert<unsigned int &,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> &>(
    (__int64)(this + 9),
    *this[9],
    &v16,
    &v17);
  std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::_Insert_unverified<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>>>>(
    (__int64)(this + 8),
    (__int64)v14,
    (const unsigned __int8 *)(*this[9] + 16),
    (__int64 *)*this[9]);
  if ( ((unsigned __int8 (__fastcall *)(_QWORD))v17[1][15])(v17 + 1) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      this + 16,
      v14,
      (const unsigned __int8 *)&v16);
    v11 = (_QWORD *)v14[0];
    v12 = 0LL;
    while ( v11 != (_QWORD *)v14[1] )
    {
      ++v12;
      v11 = (_QWORD *)*v11;
    }
    if ( !v12 )
      std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Insert_unverified<unsigned int const,std::_Not_a_node_tag>(
        this + 16,
        (__int64)v14,
        (const unsigned __int8 *)&v16);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v17);
  return 0LL;
}
