/*
 * XREFs of ??1?$map@KV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18019F398
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$9 @ 0x18019F2CD (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@1@@Z @ 0x18019DB04 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$list@UHotKeyInfo@@V-$allocator@UHotKey.c)
 */

void __fastcall std::map<unsigned long,std::list<HotKeyInfo>>::~map<unsigned long,std::list<HotKeyInfo>>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<HotKeyInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<HotKeyInfo>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((void ***)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x38);
}
