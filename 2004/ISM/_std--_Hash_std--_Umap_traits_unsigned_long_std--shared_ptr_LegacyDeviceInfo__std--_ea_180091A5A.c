/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned_long_std::shared_ptr_LegacyDeviceInfo__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo______0___::_Insert_unverified_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo____________::_1_::catch$56 @ 0x180091A5A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180096840 (-erase@-$list@U-$pair@$$CBKV-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V-$allocator@U-$pair@$$C.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned_long_std::shared_ptr_LegacyDeviceInfo__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo______0___::_Insert_unverified_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo____________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>::erase(
    *(_QWORD *)(a2 + 64) + 8LL,
    a2 + 64,
    *(_QWORD *)(a2 + 88));
  throw;
}
