/*
 * XREFs of ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801BBAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800B9990 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D0844 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCompositionMipmapSurface::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  CD3DResource::RemoveResourceNotifier(
    (CD3DResource *)(*(_QWORD *)(this + 88) + 24LL),
    (const struct IDeviceResourceNotify *)(this & ((unsigned __int128)-(__int128)(this - 72) >> 64)));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(this + 88));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(this + 72));
}
