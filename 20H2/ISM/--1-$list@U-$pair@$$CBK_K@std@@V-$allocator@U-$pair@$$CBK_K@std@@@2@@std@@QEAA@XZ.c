/*
 * XREFs of ??1?$list@U?$pair@$$CBK_K@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x180086FA0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_CursorId_DWMCursor___std::_Uhash_compare_CursorId_CursorIdHash_std::equal_to_CursorId____std::allocator_std::pair_CursorId_const__DWMCursor______0___::_Hash_std::_Umap_traits_CursorId_DWMCursor___std::_Uhash_compare_CursorId_CursorIdHash_std::equal_to_CursorId____std::allocator_std::pair_CursorId_const__DWMCursor______0____::_1_::dtor$0 @ 0x18004ED3A (_std--_Hash_std--_Umap_traits_CursorId_DWMCursor___std--_Uhash_compare_CursorId_Cur_ea_18004ED3A.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator::PointerState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState____0___::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator::PointerState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState____0____::_1_::dtor$0 @ 0x1800F7D38 (_std--_Hash_std--_Umap_traits_unsigned_long_InputInfoValidator--PointerState_std--__ea_1800F7D38.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180086DD4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall std::list<std::pair<unsigned long const,unsigned __int64>>::~list<std::pair<unsigned long const,unsigned __int64>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
