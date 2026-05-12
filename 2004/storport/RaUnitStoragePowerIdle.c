/*
 * XREFs of RaUnitStoragePowerIdle @ 0x1C00023B0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000BEE8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006C44 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0007310 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitStoragePowerIdle(__int64 a1, IRP *a2)
{
  if ( (unsigned __int8)((__int64 (*)(void))RaidUnitCheckAndAcquirePoFx)() )
  {
    RaidUnitPoFxIdleComponent(a1, 0LL, 2LL);
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  return RaidCompleteRequestEx(a2);
}
