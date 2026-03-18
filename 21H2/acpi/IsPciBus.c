/*
 * XREFs of IsPciBus @ 0x1C0091898
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0005A80 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C000A564 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004C350 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004C940 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     IsNsobjPciBus @ 0x1C0094D74 (IsNsobjPciBus.c)
 */

__int64 __fastcall IsPciBus(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  return IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 760));
}
