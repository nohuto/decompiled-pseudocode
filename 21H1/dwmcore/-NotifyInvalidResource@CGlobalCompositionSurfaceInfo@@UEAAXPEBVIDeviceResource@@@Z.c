/*
 * XREFs of ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801FC720
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18002C75C (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyInvalidResource(
        CGlobalCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 96));
  CCompositionSurfaceInfo::NotifyInvalidResource(this, a2);
}
