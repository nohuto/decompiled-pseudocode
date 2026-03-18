/*
 * XREFs of ?AddRef@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F3780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectedShadowApproxBlurEffect::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - 24));
}
