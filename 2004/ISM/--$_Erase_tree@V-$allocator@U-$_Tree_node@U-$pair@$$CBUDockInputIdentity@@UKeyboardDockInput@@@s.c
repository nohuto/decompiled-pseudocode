/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@@Z @ 0x180124F34
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@@Z @ 0x180124F34 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@s.c)
 *     ??1?$map@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@@std@@QEAA@XZ @ 0x180125F58 (--1-$map@UDockInputIdentity@@UKeyboardDockInput@@U-$less@UDockInputIdentity@@@std@@V-$allocator@.c)
 *     ??1KeyboardDockServer@@UEAA@XZ @ 0x180125FDC (--1KeyboardDockServer@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@@Z @ 0x180124F34 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@s.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,KeyboardDockInput>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,KeyboardDockInput>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x68);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
