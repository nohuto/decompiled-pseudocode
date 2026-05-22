/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800AE760
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::vector_unsigned_int_std::allocator_unsigned_int____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::vector_unsigned_int_std::allocator_unsigned_int________0___::_Hash_std::_Umap_traits_unsigned_int_std::vector_unsigned_int_std::allocator_unsigned_int____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::vector_unsigned_int_std::allocator_unsigned_int________0____::_1_::dtor$0 @ 0x18004F5CC (_std--_Hash_std--_Umap_traits_unsigned_int_std--vector_unsigned_int_std--allocator_unsigned_int_.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800ACDC4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$vector@IV-$allocator@I@std@@@std@@@.c)
 */

void __fastcall std::list<std::pair<unsigned int const,std::vector<unsigned int>>>::~list<std::pair<unsigned int const,std::vector<unsigned int>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned int const,std::vector<unsigned int>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::vector<unsigned int>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
