/*
 * XREFs of ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@@Z @ 0x180149DC8
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B700 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXXZ @ 0x18002A824 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-.c)
 *     ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1800336A4 (--$_Construct_n_copies_of_ty@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simp_ea_1800336A4.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1800AD7EC (--$_Insert_unverified@AEAU-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-$_List_un.c)
 *     ??$_Insert@AEBU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@1@@Z @ 0x18014A4FC (--$_Insert@AEBU-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@-$list@U-$pair@$$CBKV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
        __int64 a1,
        __int64 a2,
        __int64 **a3)
{
  __int64 ***v5; // rsi
  unsigned __int64 v6; // rdx
  _QWORD **v7; // r14
  _QWORD *i; // rbx
  char v10[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 **v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v5 = (__int64 ***)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Alloc_sentinel_and_proxy((_QWORD *)(a1 + 8));
  v11 = *v5;
  v6 = (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>>>>(
    (__int64 **)(a1 + 24),
    v6,
    (__int64 *)&v11);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  v7 = *(_QWORD ***)(a2 + 8);
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Insert<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>> const &>(
      v5,
      **v5,
      i + 2);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Insert_unverified<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>>>>(
      a1,
      (__int64)v10,
      (const unsigned __int8 *)**v5 + 16,
      **v5);
  }
  return a1;
}
