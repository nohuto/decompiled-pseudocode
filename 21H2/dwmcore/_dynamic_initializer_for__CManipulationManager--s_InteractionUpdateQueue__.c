/*
 * XREFs of _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180003580
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800DFCD8 (--0-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ.c)
 */

int dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__()
{
  CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__);
}
