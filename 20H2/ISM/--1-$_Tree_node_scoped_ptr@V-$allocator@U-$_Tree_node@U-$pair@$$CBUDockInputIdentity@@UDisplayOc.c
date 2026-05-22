/*
 * XREFs of ??1?$_Tree_node_scoped_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180146960
 * Callers:
 *     _std::variant_std::monostate_InputConfigContextMessage_DisplayOcclusionContextMessage_VirtualTouchpadContextMessage_::operator__DisplayOcclusionContextMessage_&_0__::_1_::dtor$12 @ 0x180145E22 (_std--variant_std--monostate_InputConfigContextMessage_DisplayOcclusionContextMessage_VirtualTou.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x18012AC64 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@.c)
 */

void __fastcall std::_Tree_node_scoped_ptr<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>>::~_Tree_node_scoped_ptr<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>>(
        __int64 *a1)
{
  void **v1; // rbx

  v1 = (void **)a1[1];
  if ( v1 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>(
      a1[1],
      *a1,
      *((_QWORD *)*v1 + 1));
    std::_Deallocate<16,0>(*v1, (const struct std::nothrow_t *)0xD0);
  }
}
