/*
 * XREFs of ?HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z @ 0x18012F958
 * Callers:
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009BAB0 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045858 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180130588 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 *     ?ProcessPenUpdatePayload@PenDevice@@QEAAXPEAXKPEAU_GUID@@@Z @ 0x1801318E4 (-ProcessPenUpdatePayload@PenDevice@@QEAAXPEAXKPEAU_GUID@@@Z.c)
 */

void __fastcall PenDeviceManager::HandleRIMDeviceInput(PenDeviceManager *this, void *a2, void *a3, unsigned int a4)
{
  __int64 v8; // r10
  __int64 *i; // rbx
  struct _GUID *v10; // rax
  PenDevice *v11; // rcx
  struct _GUID v12; // xmm6
  __int64 v13; // rdx
  struct _GUID v14; // [rsp+20h] [rbp-68h] BYREF
  struct _GUID v15; // [rsp+30h] [rbp-58h] BYREF

  *(_QWORD *)&v14.Data1 = a2;
  v8 = *((_QWORD *)this + 14) & std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v14, 8uLL);
  for ( i = *(__int64 **)(*((_QWORD *)this + 11) + 16 * v8);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                           (__int64)this + 64,
                           &v14,
                           v8);
        i = (__int64 *)*i )
  {
    if ( (void *)i[2] == a2 )
      goto LABEL_6;
  }
  i = (__int64 *)*((_QWORD *)this + 9);
LABEL_6:
  if ( i != *((__int64 **)this + 9) )
  {
    v10 = (struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(i[3] + 8) + 24LL))(i[3] + 8);
    v11 = (PenDevice *)i[3];
    v12 = *v10;
    v14 = 0LL;
    v15 = v12;
    PenDevice::ProcessPenUpdatePayload(v11, a3, a4, &v14);
    v13 = *(_QWORD *)&v14.Data1 - *(_QWORD *)&v12.Data1;
    if ( *(_QWORD *)&v14.Data1 == *(_QWORD *)&v12.Data1 )
      v13 = *(_QWORD *)v14.Data4 - *(_QWORD *)v15.Data4;
    if ( v13 )
    {
      PenDeviceManager::RepopulateActiveBamoForId(this, &v15);
      PenDeviceManager::RepopulateActiveBamoForId(this, &v14);
    }
  }
}
