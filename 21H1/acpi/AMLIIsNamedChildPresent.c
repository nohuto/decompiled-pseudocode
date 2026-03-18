/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C001EFC0
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0010570 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C0010F38 (ACPIBuildPdo.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014F80 (ACPIBuildProcessDevicePhaseAdr.c)
 *     EnableDisableCMOSRegions @ 0x1C00162A0 (EnableDisableCMOSRegions.c)
 *     GetPciAddressWorker @ 0x1C0018810 (GetPciAddressWorker.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019D50 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIDockIrpQueryPower @ 0x1C004A4E0 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C004D380 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x1C004F308 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0051B10 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051CC0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0055600 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C005EB20 (ACPIRootIrpQueryPower.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009C6D4 (ACPIInternalSetProximityDomain.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009E0D4 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E218 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C009E450 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009E810 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB4F0 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // r8

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  if ( v7 == v6 )
  {
LABEL_4:
    v6 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v6 + 10) )
    {
      v6 = (__int64 *)*v6;
      if ( v7 == v6 )
        goto LABEL_4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return v6 != 0LL;
}
