/*
 * XREFs of ??1PropertyCache@Holographic@Internal@Windows@@QEAA@XZ @ 0x18015795C
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$6 @ 0x1801569FC (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_1801569FC.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@@Z @ 0x180151A98 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@st.c)
 */

void __fastcall Windows::Internal::Holographic::PropertyCache::~PropertyCache(
        Windows::Internal::Holographic::PropertyCache *this)
{
  void **v1; // rbx

  v1 = (void **)((char *)this + 40);
  std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,std::vector<unsigned char>>,void *>>>(
    (__int64)this + 40,
    (__int64)this + 40,
    *(_QWORD *)(*((_QWORD *)this + 5) + 8LL));
  std::_Deallocate<16,0>(*v1, (const struct std::nothrow_t *)0x48);
}
