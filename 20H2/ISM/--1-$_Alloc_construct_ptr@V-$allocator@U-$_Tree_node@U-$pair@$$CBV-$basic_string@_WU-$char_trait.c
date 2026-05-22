/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800C5384
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::SpatialInteractionSnapshot_Windows::Internal::Holographic::CaseInsensitiveStringLess_std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Windows::Internal::Holographic::SpatialInteractionSnapshot____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&__std::tuple_____::_1_::dtor$4 @ 0x1800C5175 (_std--_Tree_std--_Tmap_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__s_ea_1800C5175.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0xE0);
}
