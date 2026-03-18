/*
 * XREFs of ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007CE98
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x1C0076EB0 (imp_WdfUsbTargetDeviceFormatRequestForCyclePort.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C007CBB8 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00066D0 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 */

int __fastcall FxUsbDevice::FormatCycleRequest(FxUsbDevice *this, FxRequestBase *Request)
{
  FxRequestBuffer emptyBuffer; // [rsp+40h] [rbp-28h] BYREF

  emptyBuffer.DataType = FxRequestBufferUnspecified;
  memset(&emptyBuffer.u, 0, sizeof(emptyBuffer.u));
  return FxIoTarget::FormatIoctlRequest(this, Request, 0x22001Fu, 1u, &emptyBuffer, &emptyBuffer);
}
