/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180157478
 * Callers:
 *     _std::_Tree_std::_Tmap_traits__GUID_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::GuidLess_std::allocator_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0___::_Insert_at_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::_Not_a_node_tag__::_1_::dtor$10 @ 0x180152B9B (_std--_Tree_std--_Tmap_traits__GUID_std--basic_string_wchar_t_std--char_traits_wchar_t__std--all.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x50);
}
