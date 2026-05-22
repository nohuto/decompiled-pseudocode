/*
 * XREFs of ?erase@?$list@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800FC670
 * Callers:
 *     ??$_Insert_unverified@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKUPointerCache@DragNDropProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800F6C9C (--$_Insert_unverified@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V-$_List_unchecked_it.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::PointerCache_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::PointerCache____0___::_Insert_unverified_std::pair_unsigned_long_const__DragNDropProcessor::PointerCache__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__DragNDropProcessor::PointerCache__________::_1_::catch$56 @ 0x1800F6DD6 (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--PointerCache_std--_Uhash_compare.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800FC248 (-erase@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rbx

  v4 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  std::_Deallocate<16,0>(a3, (const struct std::nothrow_t *)0x30);
  *a2 = v4;
  return a2;
}
