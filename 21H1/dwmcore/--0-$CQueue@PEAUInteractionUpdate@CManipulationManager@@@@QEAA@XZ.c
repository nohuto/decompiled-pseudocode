/*
 * XREFs of ??0?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800D3A90
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180003580 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>()
{
  dword_18034D4F0 = 0;
  qword_18034D4E8 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  CManipulationManager::s_InteractionUpdateQueue = &CManipulationManager::s_InteractionUpdateQueue;
  byte_18034D4F4 = 0;
  InitializeCriticalSection(&stru_18034D4F8);
  return &CManipulationManager::s_InteractionUpdateQueue;
}
