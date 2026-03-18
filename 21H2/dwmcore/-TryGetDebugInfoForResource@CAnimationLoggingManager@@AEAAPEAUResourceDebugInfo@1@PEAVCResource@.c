/*
 * XREFs of ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180052AB8
 * Callers:
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180052A58 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x1801FC1EC (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x1801FC36C (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801FC3C0 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x1801FC5EC (-LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801FC734 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     ??$_Find_last@PEAVCResource@@@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@1@AEBQEAVCResource@@_K@Z @ 0x180052B48 (--$_Find_last@PEAVCResource@@@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimati.c)
 */

struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::TryGetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r9
  unsigned __int64 i; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  struct CResource *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0LL;
  if ( a2 )
  {
    v4 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 8; ++i )
    {
      v6 = *((unsigned __int8 *)&v10 + i);
      v4 = 0x100000001B3LL * (v6 ^ v4);
    }
    v7 = *(_QWORD *)(std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Find_last<CResource *>(
                       (char *)this + 96,
                       v9,
                       &v10,
                       v4)
                   + 8);
    if ( !v7 )
      v7 = *((_QWORD *)this + 13);
    if ( v7 != *((_QWORD *)this + 13) )
      return (struct CAnimationLoggingManager::ResourceDebugInfo *)(v7 + 24);
  }
  return (struct CAnimationLoggingManager::ResourceDebugInfo *)v2;
}
