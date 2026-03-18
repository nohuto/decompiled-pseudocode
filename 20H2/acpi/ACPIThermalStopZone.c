/*
 * XREFs of ACPIThermalStopZone @ 0x1C0060104
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004D460 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004DAA0 (ACPIBusIrpSurpriseRemoval.c)
 *     AcpiThermalDeviceTargetChange @ 0x1C0060480 (AcpiThermalDeviceTargetChange.c)
 *     ACPIBusIrpStopDevice @ 0x1C00ADD30 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C00127C8 (ACPIThermalLoopEx.c)
 */

NTSTATUS __fastcall ACPIThermalStopZone(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 200);
  ACPIThermalLoopEx(a1, 0x10000000, 0);
  return KeWaitForSingleObject((PVOID)(v1 + 280), Executive, 0, 0, 0LL);
}
