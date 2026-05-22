/*
 * XREFs of ??1?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAA@XZ @ 0x1800F8590
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::PointerCache_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::PointerCache____0___::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::PointerCache_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::PointerCache____0____::_1_::dtor$0 @ 0x1800F8118 (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--PointerCache_std--__ea_1800F8118.c)
 *     _VirtualHotKeyTracker::VirtualHotKeyTracker_::_1_::dtor$2 @ 0x1801802CE (_VirtualHotKeyTracker--VirtualHotKeyTracker_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F6998 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 */

void __fastcall std::list<VirtualHotKeyTracker::KeyEventData>::~list<VirtualHotKeyTracker::KeyEventData>(void **a1)
{
  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
