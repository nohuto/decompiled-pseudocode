/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@std@@QEAA@XZ @ 0x180097B1C
 * Callers:
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$120 @ 0x18004ED90 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$120.c)
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::dtor$68 @ 0x18004F800 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator__ea_18004F800.c)
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::dtor$136 @ 0x18004F820 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator__ea_18004F820.c)
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Buy_if_not_node_unsigned_int_const___::_1_::dtor$4 @ 0x18009707E (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--hash_unsigned_i.c)
 *     _std::list_std::pair_unsigned_long_const__unsigned_int__std::allocator_std::pair_unsigned_long_const__unsigned_int_____::_Insert_unsigned_long_const_&_unsigned_int__::_1_::dtor$0 @ 0x1800AD0C0 (_std--list_std--pair_unsigned_long_const__unsigned_int__std--allocator_std--pair_unsigned_long_c.c)
 *     _std::list_unsigned_long_std::allocator_unsigned_long___::_Insert_unsigned_long_const_&__::_1_::dtor$0 @ 0x1800F6D4A (_std--list_unsigned_long_std--allocator_unsigned_long___--_Insert_unsigned_long_const_-__--_1_--.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_enum_ContextualProcessorState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__enum_ContextualProcessorState____0___::emplace_std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$4 @ 0x1800F7E98 (_std--_Hash_std--_Umap_traits_unsigned_long_enum_ContextualProcessorState_std--_Uha_ea_1800F7E98.c)
 *     _std::list_std::pair_unsigned_short_const__ControllerProcessor::ActiveKeyProperties__std::allocator_std::pair_unsigned_short_const__ControllerProcessor::ActiveKeyProperties_____::_Insert_unsigned_short_const_&_ControllerProcessor::ActiveKeyProperties__::_1_::dtor$0 @ 0x18011F262 (_std--list_std--pair_unsigned_short_const__ControllerProcessor--ActiveKeyProperties__std--alloca.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Buy_if_not_node_unsigned___int64_const___::_1_::dtor$4 @ 0x18012AD2B (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_18012AD2B.c)
 *     _std::list_std::pair_unsigned_long_const__enum_ContextualProcessorState__std::allocator_std::pair_unsigned_long_const__enum_ContextualProcessorState_____::_Assign_cast_std::pair_unsigned_long_enum_ContextualProcessorState__&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__enum_ContextualProcessorState______std::_Iterator_base0____::_1_::dtor$10 @ 0x18014A29E (_std--list_std--pair_unsigned_long_const__enum_ContextualProcessorState__std--alloc_ea_18014A29E.c)
 *     _GazeProcessor::SupportedInputUpdated_::_1_::dtor$32 @ 0x18018949C (_GazeProcessor--SupportedInputUpdated_--_1_--dtor$32.c)
 *     _std::list_std::pair_unsigned_long_const__unsigned_short__std::allocator_std::pair_unsigned_long_const__unsigned_short_____::_Insert_unsigned_long_const_&_unsigned_short_&__::_1_::dtor$0 @ 0x180199E9E (_std--list_std--pair_unsigned_long_const__unsigned_short__std--allocator_std--pair_unsigned_long.c)
 *     _std::list_Microsoft::WRL::ComPtr_HotkeyClientRegistration__std::allocator_Microsoft::WRL::ComPtr_HotkeyClientRegistration_____::_Insert_Microsoft::WRL::ComPtr_HotkeyClientRegistration__const_&__::_1_::dtor$0 @ 0x18019DE43 (_std--list_Microsoft--WRL--ComPtr_HotkeyClientRegistration__std--allocator_Microsoft--WRL--ComPt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x18);
}
