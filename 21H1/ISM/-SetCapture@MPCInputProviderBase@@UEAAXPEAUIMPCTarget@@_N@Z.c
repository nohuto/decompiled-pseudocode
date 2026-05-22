/*
 * XREFs of ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@_N@Z @ 0x18007F450
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@Z @ 0x18007D744 (--4-$ComPtr@UISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAE.c)
 */

void __fastcall MPCInputProviderBase::SetCapture(MPCInputProviderBase *this, struct IMPCTarget *a2, char a3)
{
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObjectDDIClientFactory>::operator=(
    (__int64 *)this + 571,
    (__int64)a2);
  *((_BYTE *)this + 4592) = a3;
}
