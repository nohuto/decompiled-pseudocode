/*
 * XREFs of ?AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ @ 0x1800F0450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - *(int *)(a1 - 4) - 176));
}
