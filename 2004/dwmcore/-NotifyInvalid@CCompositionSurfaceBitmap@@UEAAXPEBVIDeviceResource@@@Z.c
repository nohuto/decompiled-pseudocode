/*
 * XREFs of ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180171530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::NotifyInvalid(
        CCompositionSurfaceBitmap *this,
        const struct IDeviceResource *a2)
{
  CResource::NotifyOnChanged((__int64)this - 80, 5u, 0LL);
}
