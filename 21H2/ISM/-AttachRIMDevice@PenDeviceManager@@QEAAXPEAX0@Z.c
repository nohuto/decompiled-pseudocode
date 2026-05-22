/*
 * XREFs of ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x18012F1F4
 * Callers:
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B730 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800163C8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert@AEAPEAXPEAVPenDevice@@@?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAX$$QEAPEAVPenDevice@@@Z @ 0x18012E2A0 (--$_Insert@AEAPEAXPEAVPenDevice@@@-$list@U-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_pol.c)
 *     ??$_Insert_unverified@AEAU?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@@Z @ 0x18012E684 (--$_Insert_unverified@AEAU-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@.c)
 *     ??$_Try_emplace@AEBQEAX$$V@?$unordered_map@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@U?$hash@PEAX@std@@U?$equal_to@PEAX@4@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBQEAX@Z @ 0x18012E81C (--$_Try_emplace@AEBQEAX$$V@-$unordered_map@PEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wi.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180130528 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z @ 0x1801312F4 (--0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PenDeviceManager::AttachRIMDevice(PenDeviceManager *this, void *a2, void *a3)
{
  char *v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  const char *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 **v12; // rdi
  struct ISMBamos_AutoBamos::BamoConnection *BamoServerConnection; // rsi
  _QWORD *v14; // rax
  const char *v15; // r9
  __int64 v16; // rdx
  const struct _GUID *v17; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PenDevice *v20; // [rsp+50h] [rbp+8h] BYREF
  void *v21; // [rsp+60h] [rbp+18h] BYREF

  v21 = a3;
  v5 = (char *)this + 64;
  v6 = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v21, 8uLL) & *((_QWORD *)this + 14);
  while ( 1 )
  {
    v7 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           (__int64)v5,
           &v20,
           v6);
    if ( v9 == *v7 )
      break;
    if ( *(_QWORD *)(v9 + 16) == v10 )
    {
      v11 = *((_QWORD *)v5 + 1);
      goto LABEL_6;
    }
  }
  v11 = *((_QWORD *)v5 + 1);
  v9 = v11;
LABEL_6:
  v12 = (__int64 **)(v5 + 8);
  if ( v9 != v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      24LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevicemanager.cpp",
      v8);
  try
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v20 = (PenDevice *)operator new(0xB8uLL);
    v20 = PenDevice::PenDevice(v20, BamoServerConnection, a2, v21);
    std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::_Insert<void * &,PenDevice *>(
      (__int64)(v5 + 8),
      **v12,
      &v21,
      (void (__fastcall ****)(_QWORD))&v20);
    std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Insert_unverified<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>>>>(
      (__int64)v5,
      (__int64)v18,
      (const unsigned __int8 *)(**v12 + 16),
      (__int64 *)**v12);
    std::unordered_map<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>::_Try_emplace<void * const &,>(
      (__int64)v5,
      (__int64)v18,
      (const unsigned __int8 *)&v21);
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v18[0] + 24LL) + 8LL) + 24LL))(*(_QWORD *)(v18[0] + 24LL) + 8LL);
    v16 = *v14 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *v14 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v16 = v14[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v16 )
    {
      std::unordered_map<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>::_Try_emplace<void * const &,>(
        (__int64)v5,
        (__int64)v18,
        (const unsigned __int8 *)&v21);
      v17 = (const struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v18[0] + 24LL) + 8LL)
                                                                     + 24LL))(*(_QWORD *)(v18[0] + 24LL) + 8LL);
      PenDeviceManager::RepopulateActiveBamoForId(this, v17);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x30,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevicemanager.cpp",
      v15);
  }
}
