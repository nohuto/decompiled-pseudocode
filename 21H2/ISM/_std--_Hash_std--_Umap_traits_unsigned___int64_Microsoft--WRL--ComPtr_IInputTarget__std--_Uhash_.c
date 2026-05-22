/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned___int64_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Microsoft::WRL::ComPtr_IInputTarget______0___::_Insert_unverified_std::pair_unsigned___int64_const__Microsoft::WRL::ComPtr_IInputTarget____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__Microsoft::WRL::ComPtr_IInputTarget____________::_1_::catch$56 @ 0x180176613
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800B421C (-erase@-$list@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned___int64_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Microsoft::WRL::ComPtr_IInputTarget______0___::_Insert_unverified_std::pair_unsigned___int64_const__Microsoft::WRL::ComPtr_IInputTarget____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__Microsoft::WRL::ComPtr_IInputTarget____________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>::erase(
    *(_QWORD *)(a2 + 64) + 8LL,
    (_QWORD *)(a2 + 64),
    *(void **)(a2 + 88));
  throw;
}
