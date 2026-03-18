/*
 * XREFs of ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18009D0AC
 * Callers:
 *     ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x18009D01C (-EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z.c)
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180223030 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180224640 (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1802247C4 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1802260F8 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18022CB44 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1802359B8 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x180235E80 (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToInputType(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx

  if ( !a1 )
    return 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 4LL;
  v5 = v4 - 1;
  if ( !v5 )
    return (unsigned int)((a2 & 0x180000) != 0) + 5;
  v7 = v5 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      return 7LL;
    return 0LL;
  }
  return 3LL;
}
