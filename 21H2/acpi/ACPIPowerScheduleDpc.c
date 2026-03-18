/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C0008120
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C0004100 (ACPIBuildDeviceDpc.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C00080D4 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C0008D14 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x1C000AA40 (ACPIDeviceCompleteRequest.c)
 *     ACPITableLoadCallBack @ 0x1C001F7F0 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1C00BEC40 (ACPIInitStartACPI.c)
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
