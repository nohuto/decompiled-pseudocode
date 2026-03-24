/*
 * XREFs of PoCallDriver @ 0x14039A8F0
 * Callers:
 *     IoCancelFileOpen @ 0x140893620 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x1409E54D0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
