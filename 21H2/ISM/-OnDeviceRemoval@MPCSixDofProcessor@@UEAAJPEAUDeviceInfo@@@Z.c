/*
 * XREFs of ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18018DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x180041250 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

__int64 __fastcall MPCSixDofProcessor::OnDeviceRemoval(MPCSixDofProcessor *this, struct DeviceInfo *a2)
{
  if ( *((_BYTE *)this + 4539) )
  {
    *((_BYTE *)this + 7608) = 0;
    MPCInputProviderBase::ClearInputTargets(this);
    *((_BYTE *)this + 7608) = 1;
  }
  return MPCInputProviderBase::OnDeviceRemoval(this, a2);
}
