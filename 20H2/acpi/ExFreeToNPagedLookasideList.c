/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C004C858
 * Callers:
 *     ACPIBuildDeviceRequest @ 0x1C001B20C (ACPIBuildDeviceRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C4FC (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001E888 (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F5A0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIDispatchAddDevice @ 0x1C0025000 (ACPIDispatchAddDevice.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0025894 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C690 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002F780 (ACPIBuildThermalZoneRequest.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00562A8 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C006135C (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C0061640 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061D50 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     FreeContext @ 0x1C0067EE4 (FreeContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
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
