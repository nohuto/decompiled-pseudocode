/*
 * XREFs of ??1?$set@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@@std@@QEAA@XZ @ 0x180295B1C
 * Callers:
 *     _ViewGroup::ViewGroup_::_1_::dtor$7 @ 0x1802959CB (_ViewGroup--ViewGroup_--_1_--dtor$7.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x18028AB5C (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_polic.c)
 */

void __fastcall std::set<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::~set<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Erase_tree<std::allocator<std::_Tree_node<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
