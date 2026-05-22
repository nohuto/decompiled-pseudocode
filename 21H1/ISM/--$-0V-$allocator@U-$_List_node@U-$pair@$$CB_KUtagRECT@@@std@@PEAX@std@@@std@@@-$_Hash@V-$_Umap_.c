/*
 * XREFs of ??$?0V?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@_KUtagRECT@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@1@@Z @ 0x18012AB90
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x18012C990 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180145DA0 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 * Callees:
 *     ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@1@@Z @ 0x1800ACE58 (--$_Construct_n_copies_of_ty@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simp_ea_1800ACE58.c)
 *     ??$_Insert@AEBU?$pair@$$CB_KUtagRECT@@@std@@@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBU?$pair@$$CB_KUtagRECT@@@1@@Z @ 0x18012B370 (--$_Insert@AEBU-$pair@$$CB_KUtagRECT@@@std@@@-$list@U-$pair@$$CB_KUtagRECT@@@std@@V-$allocator@U.c)
 *     ??$_Insert_unverified@U?$pair@$$CB_KUtagRECT@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUtagRECT@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KUtagRECT@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@1@@Z @ 0x18012B8B0 (--$_Insert_unverified@U-$pair@$$CB_KUtagRECT@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@AEAAXXZ @ 0x18012D7EC (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CB_KUtagRECT@@@std@@V-$allocator@U-$pair@$$CB_KUtagR.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,tagRECT,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,tagRECT>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,tagRECT,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,tagRECT>>,0>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD **v5; // rsi
  unsigned __int64 v6; // rdx
  _QWORD **v7; // r14
  _QWORD *i; // rbx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v5 = (_QWORD **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  std::list<std::pair<unsigned __int64 const,tagRECT>>::_Alloc_sentinel_and_proxy(a1 + 8);
  v11 = *v5;
  v6 = (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>>>(
    (__int64 **)(a1 + 24),
    v6,
    (__int64 *)&v11);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  v7 = *(_QWORD ***)(a2 + 8);
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    std::list<std::pair<unsigned __int64 const,tagRECT>>::_Insert<std::pair<unsigned __int64 const,tagRECT> const &>(
      v5,
      **v5,
      i + 2);
    std::_Hash<std::_Umap_traits<unsigned __int64,tagRECT,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,tagRECT>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,tagRECT>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>>>(
      a1,
      v10,
      **v5 + 16LL);
  }
  return a1;
}
