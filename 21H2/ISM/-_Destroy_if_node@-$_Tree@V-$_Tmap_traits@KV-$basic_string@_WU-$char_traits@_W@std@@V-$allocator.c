/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@Z @ 0x1801705DC
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@1@Z @ 0x1801693A4 (--$_Insert_at@AEAU-$pair@$$CBKV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0___::_Insert_nohint_std::pair_unsigned_long_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______&_std::_Tree_node_std::pair_unsigned_long_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______void_______::_1_::catch$26 @ 0x18016967A (_std--_Tree_std--_Tmap_traits_unsigned_long_std--basic_string_wchar_t_std--char_traits_wchar_t__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 >= 8 )
    std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(2 * v3 + 2));
  *(_QWORD *)(a2 + 64) = 7LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_WORD *)(a2 + 40) = 0;
  std::_Deallocate<16,0>((void *)a2, (const struct std::nothrow_t *)0x48);
}
