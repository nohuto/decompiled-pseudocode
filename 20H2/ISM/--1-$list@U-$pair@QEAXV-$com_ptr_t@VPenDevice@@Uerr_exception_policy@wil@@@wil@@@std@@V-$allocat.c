/*
 * XREFs of ??1?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x18012E8D0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_void___wil::com_ptr_t_PenDevice_wil::err_exception_policy__std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_wil::com_ptr_t_PenDevice_wil::err_exception_policy______0___::_Hash_std::_Umap_traits_void___wil::com_ptr_t_PenDevice_wil::err_exception_policy__std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_wil::com_ptr_t_PenDevice_wil::err_exception_policy______0____::_1_::dtor$0 @ 0x18012E720 (_std--_Hash_std--_Umap_traits_void___wil--com_ptr_t_PenDevice_wil--err_exception_po_ea_18012E720.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18012DD60 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception.c)
 */

void __fastcall std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::~list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>(
        void **a1)
{
  std::_List_node<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
