/*
 * XREFs of ACPIEcConnectInterrupt @ 0x1C00AE5F8
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0053AB0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     ACPIEcConnectGpeVector @ 0x1C00AE4F8 (ACPIEcConnectGpeVector.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00AE534 (ACPIEcConnectGpioInterrupt.c)
 */

NTSTATUS __fastcall ACPIEcConnectInterrupt(char *a1)
{
  if ( a1[805] )
    return ACPIEcConnectGpioInterrupt(a1);
  else
    return ACPIEcConnectGpeVector((__int64)a1);
}
