/*
 * XREFs of ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x1801C6100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::CanSkipChildren(CInteraction *this)
{
  return CInteractionProcessor::CanSkipChildren((CInteraction *)((char *)this + 344));
}
