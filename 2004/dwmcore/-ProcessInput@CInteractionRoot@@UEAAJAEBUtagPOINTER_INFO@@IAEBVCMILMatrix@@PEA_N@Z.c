/*
 * XREFs of ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1802335C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18022CB44 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 */

__int64 __fastcall CInteractionRoot::ProcessInput(
        CInteractionRoot *this,
        const struct tagPOINTER_INFO *a2,
        int a3,
        const struct CMILMatrix *a4,
        bool *a5)
{
  return CInteractionProcessor::ProcessInput((CInteractionRoot *)((char *)this + 32), 0LL, a2, a3, a4, 0LL, a5);
}
