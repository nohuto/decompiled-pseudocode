/*
 * XREFs of PoCallDriver @ 0x1403973F0
 * Callers:
 *     IoCancelFileOpen @ 0x14088F240 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x1409E2460 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
