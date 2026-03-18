/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C000A410
 * Callers:
 *     ACPIBuildPdo @ 0x1C0005FA8 (ACPIBuildPdo.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0008460 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0009A50 (ACPIBuildProcessDevicePhaseAdr.c)
 *     GetPciAddressWorker @ 0x1C000CDE0 (GetPciAddressWorker.c)
 *     EnableDisableCMOSRegions @ 0x1C0020180 (EnableDisableCMOSRegions.c)
 *     ACPIDockIrpQueryPower @ 0x1C00490D0 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C004C270 (ACPIBusIrpQueryPower.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C004CC70 (ACPIDispatchIrpDepPdoQueryID.c)
 *     CmosGetOpRegionType @ 0x1C004E2D8 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00511D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051370 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0055C10 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C005FAC0 (ACPIRootIrpQueryPower.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0093BA0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C00941D8 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0094310 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009800C (ACPIInternalSetProximityDomain.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AA5F0 (ACPIDockIrpQueryCapabilities.c)
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
