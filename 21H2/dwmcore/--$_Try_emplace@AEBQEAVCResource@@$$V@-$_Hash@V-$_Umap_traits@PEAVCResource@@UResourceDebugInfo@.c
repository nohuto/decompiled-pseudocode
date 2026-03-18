/*
 * XREFs of ??$_Try_emplace@AEBQEAVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@_N@1@AEBQEAVCResource@@@Z @ 0x180064E4C
 * Callers:
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180052A58 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 * Callees:
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@2@_KQEAU32@1@Z @ 0x180030B30 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCCh.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180032AB0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManage.c)
 *     ??$_Find_last@PEAVCResource@@@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@1@AEBQEAVCResource@@_K@Z @ 0x180052B48 (--$_Find_last@PEAVCResource@@@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimati.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180064FA4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAVCResource@@UResourceDebugInfo.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCResource@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180064FC8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCResource@@@1@V-$tuple@$$V@1@@-$_List_node_e.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D38B0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Try_emplace<CResource * const &,>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 appended; // rbp
  __int64 v7; // r8
  __int64 v8; // rcx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  _QWORD *v12; // rsi
  __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-18h] BYREF
  _QWORD *v17; // [rsp+48h] [rbp-10h]
  unsigned __int8 *v18; // [rsp+60h] [rbp+8h] BYREF

  appended = std::_Fnv1a_append_bytes((unsigned __int64)a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Find_last<CResource *>(
    a1,
    &v15,
    a3,
    appended);
  if ( *((_QWORD *)&v15 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v15 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x38E38E38E38E38ELL )
      std::_Xlength_error("unordered_map/set too long");
    v18 = a3;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>(
      v16,
      a1 + 2,
      v7,
      &v18);
    v8 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v8 < 0 )
      v9 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
         + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = *((_QWORD *)a1 + 7);
    if ( v10 < 0 )
    {
      v14 = *((_QWORD *)a1 + 7) & 1LL | (*((_QWORD *)a1 + 7) >> 1);
      v11 = (float)(int)v14 + (float)(int)v14;
    }
    else
    {
      v11 = (float)(int)v10;
    }
    v12 = v17;
    if ( (float)(v9 / v11) > *a1 )
    {
      std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Rehash_for_1((__int64)a1);
      v15 = *(_OWORD *)std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Find_last<CResource *>(
                         a1,
                         &v15,
                         v12 + 2,
                         appended);
    }
    v17 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v15,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>(v16);
  }
  return a2;
}
