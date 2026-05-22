/*
 * XREFs of ??1?$list@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180047ADC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ButtonProcessor::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo____0___::_Hash_std::_Umap_traits_unsigned_long_ButtonProcessor::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo____0____::_1_::dtor$0 @ 0x180047A70 (_std--_Hash_std--_Umap_traits_unsigned_long_ButtonProcessor--TargetingInfo_std--_Uhash_compare_u.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180047680 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEA.c)
 */

void __fastcall std::list<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>::~list<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_List_node<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>,void *>>>(
        (__int64)a1,
        (__int64)v3);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
