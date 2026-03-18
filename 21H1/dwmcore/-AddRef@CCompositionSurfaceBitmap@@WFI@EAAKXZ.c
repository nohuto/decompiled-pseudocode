/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@WFI@EAAKXZ @ 0x1800EC080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 88));
}
