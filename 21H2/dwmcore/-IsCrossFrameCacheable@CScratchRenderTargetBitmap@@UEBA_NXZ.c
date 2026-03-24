/*
 * XREFs of ?IsCrossFrameCacheable@CScratchRenderTargetBitmap@@UEBA_NXZ @ 0x18024D750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CScratchRenderTargetBitmap::IsCrossFrameCacheable(CScratchRenderTargetBitmap *this)
{
  return *((_BYTE *)this + 25) == 0;
}
