/*
 * XREFs of ??$_Insert_unverified@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@1@@Z @ 0x1800B3B40
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEBVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEBVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800B3A9C (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEBVCResource@@@2@V-$tuple@$$V@2@@-$_Hash@.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x18009D99C (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ?erase@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x1800B3668 (-erase@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800B3C58 (-_Check_size@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BA17C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Insert_unverified<std::pair<CResource const * const,CWeakResourceReference *>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>(
        unsigned __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 a4)
{
  unsigned __int64 appended; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = a1;
  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  v8 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
         (__int64)&CWeakResourceReference::s_weakReferenceMap,
         &v19,
         xmmword_18034D4A0 & appended);
  v9 = qword_18034D488;
  v11 = 2 * v10;
  v12 = *v8;
  while ( v12 != *(_QWORD *)(qword_18034D488 + 8 * v11) )
  {
    v12 = *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)a3 == *(_QWORD *)(v12 + 16) )
    {
      std::list<std::pair<CResource const * const,CWeakResourceReference *>>::erase(
        (__int64)&qword_18034D478,
        &v19,
        (__int64 *)a4);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v13 = *(_QWORD *)a4;
  if ( v12 != *(_QWORD *)a4 )
  {
    **(_QWORD **)(a4 + 8) = v13;
    **(_QWORD **)(v13 + 8) = v12;
    **(_QWORD **)(v12 + 8) = a4;
    v14 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v14;
    v9 = qword_18034D488;
  }
  v15 = *(_QWORD *)(v9 + 8 * v11);
  if ( v15 == qword_18034D478 )
  {
    *(_QWORD *)(v9 + 8 * v11) = a4;
    *(_QWORD *)(qword_18034D488 + 8 * v11 + 8) = a4;
  }
  else if ( v15 == v12 )
  {
    *(_QWORD *)(v9 + 8 * v11) = a4;
  }
  else
  {
    v17 = *(__int64 **)(v9 + 8 * v11 + 8);
    v18 = *v17;
    *(_QWORD *)(v9 + 8 * v11 + 8) = *v17;
    if ( v18 != a4 )
      *(_QWORD *)(qword_18034D488 + 8 * v11 + 8) = *(_QWORD *)(*(_QWORD *)(qword_18034D488 + 8 * v11 + 8) + 8LL);
  }
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Check_size(&CWeakResourceReference::s_weakReferenceMap);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
