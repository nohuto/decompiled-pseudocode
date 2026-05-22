/*
 * XREFs of _std::_Hash_std::_Umap_traits_IDCompInputTarget___std::vector_unsigned_long_std::allocator_unsigned_long____std::_Uhash_compare_IDCompInputTarget___DCompTargetHash_DCompTargetEqual__std::allocator_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long________0___::_Insert_unverified_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______________::_1_::catch$55 @ 0x1800ADCE5
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B3DF8 (-erase@-$list@U-$pair@$$CBIV-$vector@IV-$allocator@I@std@@@std@@@std@@V-$allocator@U-$pair@$$CBI.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_IDCompInputTarget___std::vector_unsigned_long_std::allocator_unsigned_long____std::_Uhash_compare_IDCompInputTarget___DCompTargetHash_DCompTargetEqual__std::allocator_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long________0___::_Insert_unverified_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______________::_1_::catch_55(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<unsigned int const,std::vector<unsigned int>>>::erase(
    *(_QWORD *)(a2 + 48) + 8LL,
    a2 + 48,
    *(_QWORD *)(a2 + 248));
  throw;
}
