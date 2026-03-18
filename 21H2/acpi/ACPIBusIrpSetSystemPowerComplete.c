/*
 * XREFs of ACPIBusIrpSetSystemPowerComplete @ 0x1C00496F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C002E7C0 (ACPIDeviceIrpCompleteRequest.c)
 */

void __fastcall ACPIBusIrpSetSystemPowerComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _QWORD *DeviceExtension; // rax

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(DeviceObject);
  Context->IoStatus.Information = 0LL;
  ACPIDeviceIrpCompleteRequest(DeviceExtension, Context, IoStatus->Status);
}
