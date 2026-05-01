/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800C7710
 * Callers:
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Buy_if_not_node_unsigned___int64_const___::_1_::dtor$4 @ 0x1800C448F (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_std--hash_un.c)
 *     _std::list_wil::com_ptr_t_CRefCountedObject_WindowEventDispatcher::PendingActivationData__wil::err_exception_policy__std::allocator_wil::com_ptr_t_CRefCountedObject_WindowEventDispatcher::PendingActivationData__wil::err_exception_policy_____::_Insert_wil::com_ptr_t_CRefCountedObject_WindowEventDispatcher::PendingActivationData__wil::err_exception_policy__const_&__::_1_::dtor$0 @ 0x18010357B (_std--list_wil--com_ptr_t_CRefCountedObject_WindowEventDispatcher--PendingActivationData__wil--e.c)
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Buy_if_not_node_unsigned_int_const___::_1_::dtor$4 @ 0x1803454EA (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--hash_unsigned_i.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_bool_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__bool____0___::emplace_std::piecewise_construct_t_const_&_std::tuple_unsigned_int_const_&__std::tuple_____::_1_::dtor$4 @ 0x180367AD8 (_std--_Hash_std--_Umap_traits_unsigned_int_bool_std--_Uhash_compare_unsigned_int_st_ea_180367AD8.c)
 *     _std::list_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy_____::_Insert_Microsoft::WRL::ComPtr_IImmersiveMonitor__const_&__::_1_::dtor$0 @ 0x1803DA46A (_std--list_wil--com_ptr_t_IImmersiveMonitor_wil--err_exception_policy__std--allocator_wil--com_p.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x18);
}
