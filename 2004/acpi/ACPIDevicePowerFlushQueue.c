/*
 * XREFs of ACPIDevicePowerFlushQueue @ 0x1C001C480
 * Callers:
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C00104A0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0010570 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDetectFilterDevices @ 0x1C0018DA4 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C00190D8 (ACPIDetectPdoDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002C840 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002D1E8 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C005F8E0 (ACPITableUnload.c)
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001C688 (ACPIDeviceInternalSynchronizeRequest.c)
 */

__int64 __fastcall ACPIDevicePowerFlushQueue(__int64 a1)
{
  unsigned int v2; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = ACPIDeviceInternalSynchronizeRequest(a1, &ACPIInitPowerRequestCompletion, &Event);
  if ( v2 == 259 )
  {
    v2 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v2;
}
