/*
 * XREFs of RaidUnitPoFxIdleComponent @ 0x1C0006784
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C00022C0 (RaUnitStoragePowerIdle.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C00066E8 (RaUnitScsiMiniportIoctl.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C001012C (StorPortUnitPoFxD0Completion.c)
 *     RaidPnPPassToMiniPort @ 0x1C001329C (RaidPnPPassToMiniPort.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0016F98 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0031988 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C003E1A0 (RaidUnitEndMaintenanceTime.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1C0040230 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0040E24 (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0049168 (RaidUnitEndDeviceBusy.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0071B18 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C00740E4 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006D20 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002C074 (RaidAdapterPoFxIdleComponent.c)
 */

bool __fastcall RaidUnitPoFxIdleComponent(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v5; // r15
  bool v6; // di
  bool v10; // bl
  int v11; // edi
  char v13; // cl

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v10 = 1;
  if ( !a4 || (v10 = (*a4 & 2) != 0, (*a4 & 1) != 0) )
  {
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
    {
      PoFxIdleComponent(**(_QWORD **)(a1 + 1744), a2, a3);
      v5 = 1;
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
      v6 = (v11 & 2) == 0;
    }
  }
  if ( v10 )
  {
    if ( *(_QWORD *)(v4 + 5088) )
    {
      v13 = RaidAdapterPoFxIdleComponent(v4, 0LL, a3);
      if ( !v5 )
        return v13;
    }
  }
  return v6;
}
