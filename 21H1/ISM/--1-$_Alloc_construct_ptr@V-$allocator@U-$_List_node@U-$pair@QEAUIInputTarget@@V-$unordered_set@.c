/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014B188
 * Callers:
 *     _std::list_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long______std::allocator_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long_________::_Insert_std::piecewise_construct_t_const_&_std::tuple_IInputTarget___&&__std::tuple_____::_1_::dtor$0 @ 0x18014A6BC (_std--list_std--pair_IInputTarget___const_std--unordered_set_unsigned_long_std--hash_unsigned_lo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x58);
}
