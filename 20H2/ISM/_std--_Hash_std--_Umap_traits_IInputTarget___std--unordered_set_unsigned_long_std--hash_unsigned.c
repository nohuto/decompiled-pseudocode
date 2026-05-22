/*
 * XREFs of _std::_Hash_std::_Umap_traits_IInputTarget___std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long____std::_Uhash_compare_IInputTarget___std::hash_IInputTarget____std::equal_to_IInputTarget______std::allocator_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long________0___::_Insert_unverified_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long______std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long______________::_1_::catch$56 @ 0x18014A2BB
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x18014DB44 (-erase@-$list@U-$pair@QEAUIInputTarget@@V-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allo.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_IInputTarget___std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long____std::_Uhash_compare_IInputTarget___std::hash_IInputTarget____std::equal_to_IInputTarget______std::allocator_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long________0___::_Insert_unverified_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long______std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long______________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>::erase(
    *(_QWORD *)(a2 + 64) + 8LL,
    a2 + 64,
    *(_QWORD *)(a2 + 88));
  throw;
}
