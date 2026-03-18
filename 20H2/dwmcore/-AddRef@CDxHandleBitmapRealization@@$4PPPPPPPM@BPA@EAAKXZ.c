/*
 * XREFs of ?AddRef@CDxHandleBitmapRealization@@$4PPPPPPPM@BPA@EAAKXZ @ 0x1800F3120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - *(int *)(a1 - 4) - 496));
}
