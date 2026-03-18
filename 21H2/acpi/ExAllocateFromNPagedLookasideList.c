/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C001A120
 * Callers:
 *     ACPIBuildDeviceExtension @ 0x1C0019F08 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDeviceRequest @ 0x1C001A164 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001CB58 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x1C001FB38 (ACPIBuildRunMethodRequest.c)
 *     NewContext @ 0x1C0022674 (NewContext.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0025F00 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0025FA8 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDispatchAddDevice @ 0x1C0026D30 (ACPIDispatchAddDevice.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002A2E8 (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C002AC6C (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BBB4 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002D1C4 (ACPIBuildThermalZoneRequest.c)
 *     DispatchNotification @ 0x1C0031624 (DispatchNotification.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C0061F5C (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C00627FC (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0062CD8 (ACPIWakeEnableDisableAsync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
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
