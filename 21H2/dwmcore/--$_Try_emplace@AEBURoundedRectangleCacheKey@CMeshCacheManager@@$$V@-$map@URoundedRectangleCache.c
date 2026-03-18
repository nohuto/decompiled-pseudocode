/*
 * XREFs of ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1800110BC
 * Callers:
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@@Z @ 0x180057488 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBU.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180011188 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCache.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800111CC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCache.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800111F0 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180185E18 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<CMeshCacheManager::RoundedRectangleCacheKey,CMeshCacheManager::RoundedRectangleCacheEntry>::_Try_emplace<CMeshCacheManager::RoundedRectangleCacheKey const &,>(
        __int64 **a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v4; // rcx
  float *v6; // r9
  float *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v11; // rdx
  _BYTE v12[16]; // [rsp+30h] [rbp-38h] BYREF
  float *v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  unsigned __int64 *v15; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0;
  v4 = *a1;
  v6 = (float *)v4;
  v7 = (float *)v4[1];
  v13 = v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v11 = *a3;
    do
    {
      v13 = v7;
      if ( *((_QWORD *)v7 + 4) < v11 || (float)(*((float *)a3 + 2) - v7[10]) > 0.0000011920929 )
      {
        v14 = 0;
        v7 = (float *)*((_QWORD *)v7 + 2);
      }
      else
      {
        v6 = v7;
        v14 = 1;
        v7 = *(float **)v7;
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v6 + 25) || *a3 < *((_QWORD *)v6 + 4) || (float)(v6[10] - *((float *)a3 + 2)) > 0.0000011920929 )
  {
    if ( a1[1] == (__int64 *)0x492492492492492LL )
      std::_Throw_tree_length_error();
    v15 = a3;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>,void *>>>(
           (unsigned int)v12,
           (_DWORD)a1,
           (_DWORD)v4,
           (_DWORD)v6,
           (__int64)&v15);
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>,void *>>>(v12);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>>>::_Insert_node(
                      a1,
                      &v13,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
