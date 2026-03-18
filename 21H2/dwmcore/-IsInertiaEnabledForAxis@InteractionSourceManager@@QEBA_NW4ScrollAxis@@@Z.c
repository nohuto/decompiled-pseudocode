/*
 * XREFs of ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1802645A4
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18021C784 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1802563D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x180256A10 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180113E5C (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180265008 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

char __fastcall InteractionSourceManager::IsInertiaEnabledForAxis(InteractionSourceManager *a1)
{
  InteractionSourceManager *v1; // rcx
  struct CManipulation *ActiveManipulation; // rax
  __int64 v3; // r10

  if ( !InteractionSourceManager::HasActiveManipulation(a1) )
    return 1;
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v1);
  return *((_BYTE *)ActiveManipulation + 8 * v3 + 460) & 1;
}
