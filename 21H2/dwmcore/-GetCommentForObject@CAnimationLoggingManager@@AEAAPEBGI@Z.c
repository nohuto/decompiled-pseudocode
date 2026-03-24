/*
 * XREFs of ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x1801B04D4
 * Callers:
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801B0528 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801B08B8 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x1800353CC (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A0B90 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 */

const unsigned __int16 *__fastcall CAnimationLoggingManager::GetCommentForObject(
        CAnimationLoggingManager *this,
        unsigned int a2)
{
  struct CResource *ResourceWithoutType; // rax
  CAnimationLoggingManager *v3; // r8
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  const unsigned __int16 *result; // rax

  if ( !a2 )
    return 0LL;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(*(CResourceTable **)(*((_QWORD *)this + 6) + 24LL), a2);
  if ( !ResourceWithoutType )
    return 0LL;
  DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(v3, ResourceWithoutType);
  if ( !DebugInfoForResource || !*((_QWORD *)DebugInfoForResource + 3) )
    return 0LL;
  result = (const unsigned __int16 *)((char *)DebugInfoForResource + 8);
  if ( *((_QWORD *)result + 3) >= 8uLL )
    return *(const unsigned __int16 **)result;
  return result;
}
