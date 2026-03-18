/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C001CB1C
 * Callers:
 *     ACPIDeviceInternalQueueRequest @ 0x1C001C9F0 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001CAD0 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIBuildDeviceDpc @ 0x1C001CB70 (ACPIBuildDeviceDpc.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001E888 (ACPIDeviceCompleteRequest.c)
 *     ACPITableLoadCallBack @ 0x1C0030100 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1C00BB3C4 (ACPIInitStartACPI.c)
 * Callees:
 *     <none>
 */

char ACPIPowerScheduleDpc()
{
  int v0; // eax

  v0 = AcpiPowerDpcFlags | 2;
  AcpiPowerDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiPowerDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
  }
  return v0;
}
