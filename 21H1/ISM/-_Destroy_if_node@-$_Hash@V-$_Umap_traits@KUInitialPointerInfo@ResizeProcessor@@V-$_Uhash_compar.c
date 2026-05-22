/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180045834
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::InitialPointerInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo____0___::_Insert_unverified_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo__________::_1_::catch$48 @ 0x1800450FA (_std--_Hash_std--_Umap_traits_unsigned_long_ResizeProcessor--InitialPointerInfo_std--_Uhash_comp.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180045DA0 (-erase@-$list@U-$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@V-$allocator@U-$pair@$$CBK.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>::erase(a1 + 8, &v3, a2);
}
