/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C0006854
 * Callers:
 *     RaUnitStoragePowerActive @ 0x1C000234C (RaUnitStoragePowerActive.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C00066E8 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001329C (RaidPnPPassToMiniPort.c)
 *     RaidUnitStartDeviceBusy @ 0x1C0035290 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0036948 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitMaintenanceTime @ 0x1C003E384 (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0040800 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0071B18 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C00740E4 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006D20 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002C010 (RaidAdapterPoFxActivateComponent.c)
 */

char __fastcall RaidUnitPoFxActivateComponent(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v9; // si
  __int64 v10; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 5088) )
  {
    v9 = RaidAdapterPoFxActivateComponent(v4, 0LL);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( *(char *)(v4 + 108) < 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
      if ( (*(_BYTE *)(v4 + 109) & 1) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
    }
    v10 = *(_QWORD *)(a1 + 1744);
    if ( (*(_DWORD *)(v10 + 140) & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 136));
      v10 = *(_QWORD *)(a1 + 1744);
    }
    if ( *(_DWORD *)(a1 + 916) && (a3 & 1) != 0 )
      a3 |= 4u;
    PoFxActivateComponent(*(_QWORD *)v10, a2, a3);
    v9 = (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  return v9;
}
