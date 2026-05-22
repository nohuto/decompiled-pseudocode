/*
 * XREFs of ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007E610
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x180040D44 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

__int64 __fastcall MPCHandProcessor::OnDeviceRemoval(MPCHandProcessor *this, struct DeviceInfo *a2)
{
  if ( *((_BYTE *)this + 4539) )
    MPCInputProviderBase::ClearInputTargets(this);
  return MPCInputProviderBase::OnDeviceRemoval(this, a2);
}
