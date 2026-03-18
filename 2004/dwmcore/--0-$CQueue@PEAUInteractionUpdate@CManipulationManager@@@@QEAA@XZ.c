/*
 * XREFs of ??0?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800DB688
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180003580 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>()
{
  dword_180349490 = 0;
  qword_180349488 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  CManipulationManager::s_InteractionUpdateQueue = &CManipulationManager::s_InteractionUpdateQueue;
  byte_180349494 = 0;
  InitializeCriticalSection(&stru_180349498);
  return &CManipulationManager::s_InteractionUpdateQueue;
}
