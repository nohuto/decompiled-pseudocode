/*
 * XREFs of ACPIFanStopDevice @ 0x1C00550FC
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004C350 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004C940 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00ACBF0 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C0003664 (ACPIFanLoop.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C002EF8C (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C005D720 (ACPIUnregisterForDeviceNotifications.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 768), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 344), Executive, 0, 0, 0LL);
}
