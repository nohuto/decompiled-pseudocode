/*
 * XREFs of ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180096870
 * Callers:
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180096810 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x1801B1888 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x1801B1A10 (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801B1A64 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x1801B1CA0 (-LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801B1DF4 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     <none>
 */

struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::TryGetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  unsigned __int64 i; // r10
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 *j; // rax
  __int64 v12; // rcx
  struct CResource *v14; // [rsp+10h] [rbp+10h]

  v2 = 0LL;
  v14 = a2;
  if ( a2 )
  {
    v4 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 8; ++i )
    {
      v6 = *((unsigned __int8 *)&v14 + i);
      v4 = 0x100000001B3LL * (v6 ^ v4);
    }
    v7 = (__int64 *)*((_QWORD *)this + 12);
    v8 = v4 & *((_QWORD *)this + 17);
    v9 = *((_QWORD *)this + 14);
    v10 = 2 * v8;
    for ( j = *(__int64 **)(v9 + 8 * v10); ; j = (__int64 *)*j )
    {
      v12 = *(__int64 **)(v9 + 8 * v10) == v7 ? (__int64)v7 : **(_QWORD **)(v9 + 8 * v10 + 8);
      if ( j == (__int64 *)v12 )
        break;
      if ( (struct CResource *)j[2] == a2 )
        goto LABEL_9;
    }
    j = v7;
LABEL_9:
    if ( j != v7 )
      return (struct CAnimationLoggingManager::ResourceDebugInfo *)(j + 3);
  }
  return (struct CAnimationLoggingManager::ResourceDebugInfo *)v2;
}
