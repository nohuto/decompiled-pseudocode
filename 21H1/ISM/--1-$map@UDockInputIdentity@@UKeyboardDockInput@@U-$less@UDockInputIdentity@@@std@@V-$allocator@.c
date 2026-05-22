/*
 * XREFs of ??1?$map@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@@std@@QEAA@XZ @ 0x180126418
 * Callers:
 *     _KeyboardDockServer::KeyboardDockServer_::_1_::dtor$4 @ 0x1800510FD (_KeyboardDockServer--KeyboardDockServer_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@@Z @ 0x1801253F4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@s.c)
 */

void __fastcall std::map<DockInputIdentity,KeyboardDockInput>::~map<DockInputIdentity,KeyboardDockInput>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,KeyboardDockInput>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x68);
}
