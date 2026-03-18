/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C001C644
 * Callers:
 *     ACPIBuildDeviceRequest @ 0x1C001B20C (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C001B83C (ACPIBuildDeviceExtension.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C4FC (ACPIBuildSpecialSynchronizationRequest.c)
 *     NewContext @ 0x1C0023D88 (NewContext.c)
 *     ACPIDispatchAddDevice @ 0x1C0025000 (ACPIDispatchAddDevice.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0025894 (ACPIBuildRunMethodRequest.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0029414 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C00294BC (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C690 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002DD28 (ACPIBuildPowerResourceRequest.c)
 *     DispatchNotification @ 0x1C002ECF4 (DispatchNotification.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F304 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002F780 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0030330 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C0061028 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C006181C (ACPIWakeDisableAsync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
