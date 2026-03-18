/*
 * XREFs of ??1CMeshCacheManager@@QEAA@XZ @ 0x180192948
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x18019233C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@1@@Z @ 0x1800167B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManage.c)
 */

void __fastcall CMeshCacheManager::~CMeshCacheManager(void **this)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>,void *>>>(
    (__int64)this,
    (__int64)this,
    *((__int64 **)*this + 1));
  std::_Deallocate<16,0>(*this, 0x38uLL);
}
