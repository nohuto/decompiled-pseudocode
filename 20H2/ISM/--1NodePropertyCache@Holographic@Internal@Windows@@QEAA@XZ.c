/*
 * XREFs of ??1NodePropertyCache@Holographic@Internal@Windows@@QEAA@XZ @ 0x1801578FC
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$7 @ 0x180156A0F (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_180156A0F.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@1@@Z @ 0x180151A00 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$map@U_GUID@@V-$vector@EV-$alloc.c)
 */

void __fastcall Windows::Internal::Holographic::NodePropertyCache::~NodePropertyCache(
        Windows::Internal::Holographic::NodePropertyCache *this)
{
  void **v1; // rbx

  v1 = (void **)((char *)this + 24);
  std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>,void *>>>(
    (__int64)this + 24,
    (__int64)this + 24,
    *(void ***)(*((_QWORD *)this + 3) + 8LL));
  std::_Deallocate<16,0>(*v1, (const struct std::nothrow_t *)0x40);
}
