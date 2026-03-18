/*
 * XREFs of PoCallDriver @ 0x14039A480
 * Callers:
 *     IoCancelFileOpen @ 0x140896050 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x1409E84E0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
