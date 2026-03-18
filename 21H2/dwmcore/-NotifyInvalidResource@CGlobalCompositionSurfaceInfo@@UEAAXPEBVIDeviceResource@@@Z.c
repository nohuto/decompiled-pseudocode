/*
 * XREFs of ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x180248E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180104C34 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyInvalidResource(
        CGlobalCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 72), 0);
  CCompositionSurfaceInfo::NotifyInvalidResource(this, a2);
}
