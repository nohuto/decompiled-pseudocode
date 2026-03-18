/*
 * XREFs of _dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x18010D760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__()
{
  CQueue<CResource *>::~CQueue<CResource *>(&CManipulationManager::s_InteractionUpdateQueue);
}
