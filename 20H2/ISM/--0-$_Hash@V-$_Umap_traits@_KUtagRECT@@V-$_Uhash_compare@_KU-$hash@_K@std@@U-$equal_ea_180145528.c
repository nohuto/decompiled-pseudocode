/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@_KUtagRECT@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@1@@Z @ 0x180145528
 * Callers:
 *     ??0?$unordered_map@_KUtagRECT@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@@std@@QEAA@XZ @ 0x1801455C0 (--0-$unordered_map@_KUtagRECT@@U-$hash@_K@std@@U-$equal_to@_K@3@V-$allocator@U-$pair@$$CB_KUtagR.c)
 * Callees:
 *     ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@1@@Z @ 0x1800AC8F8 (--$_Construct_n_copies_of_ty@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simp_ea_1800AC8F8.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@AEAAXXZ @ 0x18012D29C (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CB_KUtagRECT@@@std@@V-$allocator@U-$pair@$$CB_KUtagR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,tagRECT,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,tagRECT>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,tagRECT,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,tagRECT>>,0>>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *(_DWORD *)a1 = *a2;
  v4 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  std::list<std::pair<unsigned __int64 const,tagRECT>>::_Alloc_sentinel_and_proxy((_QWORD *)(a1 + 8));
  v6 = *v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>>>(
    (__int64 **)(a1 + 24),
    0x10uLL,
    &v6);
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  return a1;
}
