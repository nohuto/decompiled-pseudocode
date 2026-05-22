/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x18008D13C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy______0___::_Hash_std::_Umap_traits_unsigned___int64_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy______0____::_1_::dtor$0 @ 0x18008D028 (_std--_Hash_std--_Umap_traits_unsigned___int64_wil--com_ptr_t_IHeadEventHandler_wil_ea_18008D028.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008CB70 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$com_ptr_t@UIHeadEventHandler@@Uerr.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>::~list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
