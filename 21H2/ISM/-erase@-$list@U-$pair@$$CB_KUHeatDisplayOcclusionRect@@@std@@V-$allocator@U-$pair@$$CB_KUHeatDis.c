/*
 * XREFs of ?erase@?$list@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@2@@Z @ 0x18012E0B0
 * Callers:
 *     ??$_Insert_unverified@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KUHeatDisplayOcclusionRect@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@1@@Z @ 0x18012B6B8 (--$_Insert_unverified@U-$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V-$_List_unchecked_iterator.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_HeatDisplayOcclusionRect_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect____0___::_Insert_unverified_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect__________::_1_::catch$56 @ 0x18012B7F3 (_std--_Hash_std--_Umap_traits_unsigned___int64_HeatDisplayOcclusionRect_std--_Uhash_compare_unsi.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@1@V21@@Z @ 0x18012C1A8 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KUHeatDisplayOcclusio.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rbx

  v4 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  std::_Deallocate<16,0>(a3, (const struct std::nothrow_t *)0xB0);
  *a2 = v4;
  return a2;
}
