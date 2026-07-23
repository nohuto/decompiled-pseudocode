/*
 * XREFs of PoCallDriver @ 0x14039AA40
 * Callers:
 *     IoCancelFileOpen @ 0x140893780 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x1409E64D0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
