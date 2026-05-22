/*
 * XREFs of ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x1801304A8
 * Callers:
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x18009B9C0 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045858 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180130588 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x180131118 (-erase@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@w_ea_180131118.c)
 */

void __fastcall PenDeviceManager::RemoveRIMDevice(PenDeviceManager *this, void *a2)
{
  __int64 v4; // r10
  __int64 *i; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  const struct _GUID *v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = *((_QWORD *)this + 14) & std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v10, 8uLL);
  for ( i = *(__int64 **)(*((_QWORD *)this + 11) + 16 * v4);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                           (__int64)this + 64,
                           &v9,
                           v4);
        i = (__int64 *)*i )
  {
    if ( (void *)i[2] == a2 )
      goto LABEL_6;
  }
  i = (__int64 *)*((_QWORD *)this + 9);
LABEL_6:
  if ( i != *((__int64 **)this + 9) )
  {
    std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::erase(
      (char *)this + 64,
      &v10);
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(i[3] + 8) + 24LL))(i[3] + 8);
    v7 = *v6 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *v6 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v7 = v6[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v7 )
    {
      v8 = (const struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(i[3] + 8) + 24LL))(i[3] + 8);
      PenDeviceManager::RepopulateActiveBamoForId(this, v8);
    }
  }
}
