/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180128A68
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@1@1@Z @ 0x1801254AC (--$_Insert_at@AEAU-$pair@$$CBIV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_wil::com_ptr_t_BamoDockableDevicePrincipal_wil::err_returncode_policy__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_BamoDockableDevicePrincipal_wil::err_returncode_policy______0___::_Insert_nohint_std::pair_unsigned_int_const__wil::com_ptr_t_BamoDockableDevicePrincipal_wil::err_returncode_policy____&_std::_Tree_node_std::pair_unsigned_int_const__wil::com_ptr_t_BamoDockableDevicePrincipal_wil::err_returncode_policy____void_______::_1_::catch$19 @ 0x180125D01 (_std--_Tree_std--_Tmap_traits_unsigned_int_wil--com_ptr_t_BamoDockableDevicePrincipal_wil--err_r.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 *a2)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2 + 5);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x30);
}
