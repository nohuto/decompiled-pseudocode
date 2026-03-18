/*
 * XREFs of IsPciBus @ 0x1C0099AE4
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00109F0 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A714 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004D460 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004DAA0 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     IsNsobjPciBus @ 0x1C009D720 (IsNsobjPciBus.c)
 */

__int64 __fastcall IsPciBus(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  return IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 720));
}
