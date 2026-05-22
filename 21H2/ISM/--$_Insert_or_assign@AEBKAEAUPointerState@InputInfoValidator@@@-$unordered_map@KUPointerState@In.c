/*
 * XREFs of ??$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@?$unordered_map@KUPointerState@InputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x18019AF7C
 * Callers:
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z @ 0x18019B17C (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBKUtagPOINT@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUtagPOINT@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@1@@Z @ 0x1800F7394 (--$_Insert_unverified@AEAU-$pair@$$CBKUtagPOINT@@@std@@V-$_List_unchecked_iterator@V-$_List_val@.c)
 *     ??$_Insert@AEBKAEAUPointerState@InputInfoValidator@@@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x18019AECC (--$_Insert@AEBKAEAUPointerState@InputInfoValidator@@@-$list@U-$pair@$$CBKUPointerState@InputInfo.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,InputInfoValidator::PointerState>::_Insert_or_assign<unsigned long const &,InputInfoValidator::PointerState &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 **v11; // rdi
  __int64 *v12; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1[6] & std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           (__int64)a1,
           &v14,
           v8);
    if ( v10 == *v9 )
      break;
    if ( *(_DWORD *)(v10 + 16) == *(_DWORD *)a3 )
    {
      v11 = (__int64 **)(a1 + 1);
      v12 = (__int64 *)a1[1];
      goto LABEL_6;
    }
  }
  v11 = (__int64 **)(a1 + 1);
  v10 = a1[1];
  v12 = (__int64 *)v10;
LABEL_6:
  if ( (__int64 *)v10 == v12 )
  {
    std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::_Insert<unsigned long const &,InputInfoValidator::PointerState &>(
      (__int64)v11,
      *v12,
      a3,
      a4);
    std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_Insert_unverified<std::pair<unsigned long const,tagPOINT> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,tagPOINT>>>>>(
      a1,
      a2,
      (const unsigned __int8 *)(**v11 + 16),
      **v11);
  }
  else
  {
    *(_QWORD *)(v10 + 20) = *a4;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
