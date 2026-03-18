/*
 * XREFs of ?GetNextSibling@CInteraction@@EEBAPEAUIInteractionResource@@XZ @ 0x1800DE8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CInteraction::GetNextSibling(CInteraction *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 27);
}
