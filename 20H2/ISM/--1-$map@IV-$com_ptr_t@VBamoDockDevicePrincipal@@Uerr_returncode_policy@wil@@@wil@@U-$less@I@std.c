/*
 * XREFs of ??1?$map@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x180125E98
 * Callers:
 *     _KeyboardDockServer::KeyboardDockServer_::_1_::dtor$2 @ 0x180050A91 (_KeyboardDockServer--KeyboardDockServer_--_1_--dtor$2.c)
 *     _KeyboardDockServer::KeyboardDockServer_::_1_::dtor$3 @ 0x180050AA7 (_KeyboardDockServer--KeyboardDockServer_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180124E30 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$com_ptr_t@VBamoDockableDevicePrincipal.c)
 */

void __fastcall std::map<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>::~map<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
