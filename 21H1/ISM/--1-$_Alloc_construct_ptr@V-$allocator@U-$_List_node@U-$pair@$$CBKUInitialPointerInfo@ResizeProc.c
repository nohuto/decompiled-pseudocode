/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18004532C
 * Callers:
 *     _std::list_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo__std::allocator_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo_____::_Insert_std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$0 @ 0x180044FAB (_std--list_std--pair_unsigned_long_const__ResizeProcessor--InitialPointerInfo__std--allocator_st.c)
 *     _std::_Tree_std::_Tmap_traits_enum_Windows::Perception::People::HandJointKind_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper_std::less_enum_Windows::Perception::People::HandJointKind__std::allocator_std::pair_enum_Windows::Perception::People::HandJointKind_const__Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_enum_Windows::Perception::People::HandJointKind_const_&__std::tuple_____::_1_::dtor$4 @ 0x1800DE737 (_std--_Tree_std--_Tmap_traits_enum_Windows--Perception--People--HandJointKind_Windo_ea_1800DE737.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x60);
}
