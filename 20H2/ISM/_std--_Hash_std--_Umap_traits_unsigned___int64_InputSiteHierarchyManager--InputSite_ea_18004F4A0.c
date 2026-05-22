/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned___int64_InputSiteHierarchyManager::InputSiteHierarchyEntry_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry____0___::_Insert_unverified_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry__________::_1_::catch$78 @ 0x18004F4A0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@@Z @ 0x1800F18A8 (-erase@-$list@U-$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V-$allocat.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned___int64_InputSiteHierarchyManager::InputSiteHierarchyEntry_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry____0___::_Insert_unverified_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry__________::_1_::catch_78(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>::erase(
    *(_QWORD *)(a2 + 80) + 8LL,
    a2 + 80,
    *(_QWORD *)(a2 + 104));
  throw;
}
