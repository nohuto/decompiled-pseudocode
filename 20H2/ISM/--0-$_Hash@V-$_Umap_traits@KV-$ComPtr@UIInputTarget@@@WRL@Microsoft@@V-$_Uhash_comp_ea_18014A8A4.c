/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18014A8A4
 * Callers:
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x180149DD8 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 *     ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18014A664 (--$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V-$allocator@UInputSamp.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B210 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXXZ @ 0x18002A904 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-.c)
 *     ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x180033744 (--$_Construct_n_copies_of_ty@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simp_ea_180033744.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
        __int64 a1,
        __int64 a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Alloc_sentinel_and_proxy((_QWORD *)(a1 + 8));
  v13 = *v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>>>>(
    (__int64 **)(a1 + 24),
    0x10uLL,
    &v13);
  v5 = *v4;
  *v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v5;
  v6 = v4[1];
  v4[1] = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v6;
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v7;
  v8 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v8;
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v9;
  v10 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 7LL;
  *(_QWORD *)(a1 + 48) = v10;
  v11 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 8LL;
  *(_QWORD *)(a1 + 56) = v11;
  return a1;
}
