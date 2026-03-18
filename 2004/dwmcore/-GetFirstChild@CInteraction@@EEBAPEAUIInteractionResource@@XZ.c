/*
 * XREFs of ?GetFirstChild@CInteraction@@EEBAPEAUIInteractionResource@@XZ @ 0x1800DE630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CInteraction::GetFirstChild(CInteraction *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 29);
}
