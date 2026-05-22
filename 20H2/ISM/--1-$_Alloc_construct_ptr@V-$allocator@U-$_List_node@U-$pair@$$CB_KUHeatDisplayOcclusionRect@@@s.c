/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18012BFD8
 * Callers:
 *     _std::list_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect__std::allocator_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect_____::_Insert_unsigned___int64_&_HeatDisplayOcclusionRect__::_1_::dtor$0 @ 0x18012AE0E (_std--list_std--pair_unsigned___int64_const__HeatDisplayOcclusionRect__std--allocator_std--pair_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0xB0);
}
