/*
 * XREFs of ACPIBuildFlushQueue @ 0x1C009E038
 * Callers:
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C00104A0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0010570 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDetectFilterDevices @ 0x1C0018DA4 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C00190D8 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002D1E8 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C005F8E0 (ACPITableUnload.c)
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C4FC (ACPIBuildSpecialSynchronizationRequest.c)
 */

__int64 __fastcall ACPIBuildFlushQueue(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = ACPIBuildSpecialSynchronizationRequest(
         a1,
         (__int64)ACPIInitPowerRequestCompletion,
         (__int64)&Event,
         a2 != 0 ? 255 : 127,
         1);
  if ( v4 == 259 )
  {
    v4 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v4;
}
