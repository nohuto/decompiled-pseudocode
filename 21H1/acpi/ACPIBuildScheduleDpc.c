/*
 * XREFs of ACPIBuildScheduleDpc @ 0x1C001E2EC
 * Callers:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C001174C (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C4FC (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C001E630 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001EAF0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPITableLoad @ 0x1C0025650 (ACPITableLoad.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0025894 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C690 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002D1E8 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C005F8E0 (ACPITableUnload.c)
 * Callees:
 *     <none>
 */

char ACPIBuildScheduleDpc()
{
  int v0; // eax

  v0 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  return v0;
}
