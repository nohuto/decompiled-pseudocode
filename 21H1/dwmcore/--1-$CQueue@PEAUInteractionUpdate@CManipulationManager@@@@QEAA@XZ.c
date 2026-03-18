/*
 * XREFs of ??1?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800E0E80
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1800F0F20 (_dynamic_atexit_destructor_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x1800C28E8 (-Remove@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipu.c)
 */

void __fastcall CQueue<CManipulationManager::InteractionUpdate *>::~CQueue<CManipulationManager::InteractionUpdate *>(
        __int64 a1,
        __int64 a2)
{
  while ( CQueue<CManipulationManager::InteractionUpdate *>::Remove(a1, a2, 0LL) )
    ;
  DeleteCriticalSection(&stru_18034D4F8);
}
