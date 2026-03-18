/*
 * XREFs of ?GetInteraction@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1801AEFF0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A11B0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
struct CInteraction *__fastcall CVisual::GetInteraction(CVisual *this)
{
  return CVisual::GetInteractionInternal(this);
}
