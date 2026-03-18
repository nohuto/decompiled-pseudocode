/*
 * XREFs of PoCallDriver @ 0x140398000
 * Callers:
 *     IoCancelFileOpen @ 0x140890560 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x1409E24C0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
