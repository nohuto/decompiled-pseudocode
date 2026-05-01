/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@2@@Z @ 0x18028C9C0
 * Callers:
 *     ??$_Insert_at@AEAV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@1@AEAV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@1@Z @ 0x18028B4C0 (--$_Insert_at@AEAV-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAU-$_Tree_.c)
 *     _std::_Tree_std::_Tset_traits_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__std::less_void__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_exception_policy____0___::_Insert_nohint_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__&_std::_Tree_node_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__void_______::_1_::catch$18 @ 0x18028B775 (_std--_Tree_std--_Tset_traits_wil--com_ptr_t_IApplicationView_wil--err_exception_policy__std--le.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 *a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2 + 4);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x28);
}
