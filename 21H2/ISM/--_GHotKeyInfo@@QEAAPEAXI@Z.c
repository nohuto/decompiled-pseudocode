/*
 * XREFs of ??_GHotKeyInfo@@QEAAPEAXI@Z @ 0x18019FA60
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@1@@Z @ 0x18019DB04 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$list@UHotKeyInfo@@V-$allocator@UHotKey.c)
 *     ?_Destroy@?$_Ref_count_obj@UHotKeyInfo@@@std@@EEAAXXZ @ 0x1801A22E0 (-_Destroy@-$_Ref_count_obj@UHotKeyInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18019DCFC (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-.c)
 */

HotKeyInfo *__fastcall HotKeyInfo::`scalar deleting destructor'(HotKeyInfo *this)
{
  std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
    (__int64)this,
    *((_QWORD ***)this + 6));
  std::_Deallocate<16,0>(*((void **)this + 6), (const struct std::nothrow_t *)0x20);
  return this;
}
