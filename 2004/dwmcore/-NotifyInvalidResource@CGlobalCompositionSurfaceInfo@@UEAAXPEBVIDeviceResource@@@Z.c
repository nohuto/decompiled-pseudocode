/*
 * XREFs of ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801F9D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180037668 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyInvalidResource(
        CGlobalCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 96));
  CCompositionSurfaceInfo::NotifyInvalidResource(this, a2);
}
