/*
 * XREFs of ??1?$list@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x1800FD580
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::MessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::MessageInfo____0___::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::MessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::MessageInfo____0____::_1_::dtor$0 @ 0x1800FD400 (_std--_Hash_std--_Umap_traits_unsigned_long_ResizeProcessor--MessageInfo_std--_Uhas_ea_1800FD400.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800FCEDC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PE.c)
 */

void __fastcall std::list<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>::~list<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,ResizeProcessor::MessageInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::MessageInfo>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
