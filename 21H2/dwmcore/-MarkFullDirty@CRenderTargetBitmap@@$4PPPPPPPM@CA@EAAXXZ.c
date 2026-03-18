/*
 * XREFs of ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXXZ @ 0x18010D310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::MarkFullDirty(__int64 a1)
{
  CRenderTargetBitmap::MarkFullDirty((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32));
}
