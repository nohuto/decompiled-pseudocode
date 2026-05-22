/*
 * XREFs of ?Uninitialize3DComponents@MPCInputProviderBase@@UEAAXXZ @ 0x180040A60
 * Callers:
 *     ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x18007F170 (-Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18018F330 (-Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180194020 (-Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x180040974 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

void __fastcall MPCInputProviderBase::Uninitialize3DComponents(MPCInputProviderBase *this)
{
  MPCInputProviderBase::ClearInputTargets((MPCInputProviderBase *)((char *)this - 24));
  *((_BYTE *)this + 4515) = 0;
}
