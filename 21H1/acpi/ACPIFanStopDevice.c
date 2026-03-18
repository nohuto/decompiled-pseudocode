/*
 * XREFs of ACPIFanStopDevice @ 0x1C005557C
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004D460 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004DAA0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00ADD30 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C000D1CC (ACPIFanLoop.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0031420 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C005C530 (ACPIUnregisterForDeviceNotifications.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 728), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 296), Executive, 0, 0, 0LL);
}
