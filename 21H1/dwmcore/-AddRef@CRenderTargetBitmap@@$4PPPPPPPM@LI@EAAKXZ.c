/*
 * XREFs of ?AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ @ 0x1800F0930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - *(int *)(a1 - 4) - 184));
}
