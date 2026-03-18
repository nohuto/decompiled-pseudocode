/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResource@@@Z @ 0x1800F0A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(__int64 a1, const struct IDeviceResource *a2)
{
  CRenderTargetBitmap::NotifyInvalidResource((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 8), a2);
}
