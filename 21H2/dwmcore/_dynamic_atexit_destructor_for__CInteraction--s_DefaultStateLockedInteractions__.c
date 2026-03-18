/*
 * XREFs of _dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__ @ 0x18010D8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__()
{
  CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll((__int64)&CInteraction::s_DefaultStateLockedInteractions);
}
