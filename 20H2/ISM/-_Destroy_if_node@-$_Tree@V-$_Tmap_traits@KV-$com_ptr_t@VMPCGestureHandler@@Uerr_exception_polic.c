/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x18006BCAC
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@1@1@Z @ 0x18006A0B4 (--$_Insert_at@AEAU-$pair@$$CBKV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy______0___::_Insert_hint_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____&_std::_Tree_node_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____void_______::_1_::catch$23 @ 0x18006A585 (_std--_Tree_std--_Tmap_traits_unsigned_long_wil--com_ptr_t_MPCGestureHandler_wil--err_exception_.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy______0___::_Insert_nohint_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____&_std::_Tree_node_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____void_______::_1_::catch$19 @ 0x18006A8ED (_std--_Tree_std--_Tmap_traits_unsigned_long_wil--com_ptr_t_MPCGestureHandler_wil--e_ea_18006A8ED.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002831C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 *a2)
{
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2 + 5);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x30);
}
