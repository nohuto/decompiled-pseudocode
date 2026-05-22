/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18013B6C8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_SystemCursor__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursor______0___::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_SystemCursor__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursor______0____::_1_::dtor$0 @ 0x18013E688 (_std--_Hash_std--_Umap_traits_unsigned___int64_std--shared_ptr_SystemCursor__std--__ea_18013E688.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18013ACBC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@s.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::~list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
