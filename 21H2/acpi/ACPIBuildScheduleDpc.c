/*
 * XREFs of ACPIBuildScheduleDpc @ 0x1C000C2F4
 * Callers:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0002C40 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D330 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000DA40 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001CB58 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPITableLoad @ 0x1C001F8F0 (ACPITableLoad.c)
 *     ACPIBuildRunMethodRequest @ 0x1C001FB38 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C0027B30 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BBB4 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPITableUnload @ 0x1C0060860 (ACPITableUnload.c)
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
