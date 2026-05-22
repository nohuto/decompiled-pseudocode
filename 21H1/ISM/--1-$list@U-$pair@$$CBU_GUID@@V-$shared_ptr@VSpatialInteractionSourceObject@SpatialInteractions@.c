/*
 * XREFs of ??1?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800D5F2C
 * Callers:
 *     _std::_Hash_std::_Umap_traits__GUID_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject__std::_Uhash_compare__GUID_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash_std::equal_to__GUID____std::allocator_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject______0___::_Hash_std::_Umap_traits__GUID_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject__std::_Uhash_compare__GUID_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash_std::equal_to__GUID____std::allocator_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject______0____::_1_::dtor$0 @ 0x1800D5AD4 (_std--_Hash_std--_Umap_traits__GUID_std--shared_ptr_Windows--Internal--SpatialInteractions--Spat.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D562C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteracti.c)
 */

void __fastcall std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::~list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>(
        void **a1)
{
  std::_List_node<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
