/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C00309D4
 * Callers:
 *     ACPIDeviceCompleteRequest @ 0x1C000AA40 (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000F200 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildDeviceRequest @ 0x1C001A164 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001CB58 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x1C001FB38 (ACPIBuildRunMethodRequest.c)
 *     ACPIDispatchAddDevice @ 0x1C0026D30 (ACPIDispatchAddDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BBB4 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002D1C4 (ACPIBuildThermalZoneRequest.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00569B4 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C00622A0 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C0062620 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00631D0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     FreeContext @ 0x1C00694F8 (FreeContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
}
