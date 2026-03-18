/*
 * XREFs of ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801CA588
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x1801C8468 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801CC608 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180201108 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801CF14C (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 */

__int64 __fastcall CInteractionTracker::RegisterIndirectTargetsForBoundTrackers(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 632) )
    return CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(*(_QWORD *)(a1 + 632), a1, a2, a3);
  return result;
}
