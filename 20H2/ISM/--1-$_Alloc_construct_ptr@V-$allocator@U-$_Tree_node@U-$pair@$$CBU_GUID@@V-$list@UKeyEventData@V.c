/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180099E80
 * Callers:
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_IInputTarget___std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__IInputTarget______0___::emplace_std::piecewise_construct_t_const_&_std::tuple_tagMsgRoutingInfo_const_&__std::tuple_____::_1_::dtor$4 @ 0x18004D7FF (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_IInputTarget___std--_Uhash_compare_tagMsgRouting.c)
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkTreeCache_::_1_::dtor$216 @ 0x18004F640 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkTreeCache_--_1_--dtor$216.c)
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkTreeCache_::_1_::dtor$310 @ 0x18004F660 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkTreeCache_--_1_--dtor$310.c)
 *     _std::list_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry__std::allocator_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry_____::_Insert_std::piecewise_construct_t_const_&_std::tuple_unsigned___int64_const_&__std::tuple_____::_1_::dtor$0 @ 0x1800F14BA (_std--list_std--pair_unsigned___int64_const__InputSiteHierarchyManager--InputSiteHierarchyEntry_.c)
 *     _std::_Tree_std::_Tmap_traits_DockInputIdentity_unsigned___int64_std::less_DockInputIdentity__std::allocator_std::pair_DockInputIdentity_const__unsigned___int64____0___::emplace_DockInputIdentity_const_&_unsigned___int64_&__::_1_::dtor$4 @ 0x18012BA8F (_std--_Tree_std--_Tmap_traits_DockInputIdentity_unsigned___int64_std--less_DockInpu_ea_18012BA8F.c)
 *     _std::list_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient____std::allocator_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient_______::_Insert_std::piecewise_construct_t_const_&_std::tuple_tagMsgRoutingInfo_const_&__std::tuple_____::_1_::dtor$0 @ 0x180136FA1 (_std--list_std--pair_tagMsgRoutingInfo_const__Microsoft--WRL--ComPtr_IRemoteViewHitTestClient___.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::map__GUID_std::vector_unsigned_char_std::allocator_unsigned_char____Windows::Internal::Holographic::PropertyCache::GuidLess_std::allocator_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char__________Windows::Internal::Holographic::PropertyCache::GuidLess_std::allocator_std::pair__GUID_const__std::map__GUID_std::vector_unsigned_char_std::allocator_unsigned_char____Windows::Internal::Holographic::PropertyCache::GuidLess_std::allocator_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______________0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple__GUID_const_&__std::tuple_____::_1_::dtor$4 @ 0x180155F4F (_std--_Tree_std--_Tmap_traits__GUID_std--map__GUID_std--vector_unsigned_char_std--a_ea_180155F4F.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData____VirtualHotKeyTracker::CompareGuids_std::allocator_std::pair__GUID_const__std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData________0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple__GUID_const_&__std::tuple_____::_1_::dtor$4 @ 0x180180E49 (_std--_Tree_std--_Tmap_traits__GUID_std--list_VirtualHotKeyTracker--KeyEventData_st_ea_180180E49.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x40);
}
