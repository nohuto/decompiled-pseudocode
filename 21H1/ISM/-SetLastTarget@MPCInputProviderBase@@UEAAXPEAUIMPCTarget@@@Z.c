/*
 * XREFs of ?SetLastTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z @ 0x18007F4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::SetLastTarget(MPCInputProviderBase *this, struct IMPCTarget *a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObjectDDIClientFactory>::operator=(
    (__int64 *)this + 572,
    (__int64)a2);
}
