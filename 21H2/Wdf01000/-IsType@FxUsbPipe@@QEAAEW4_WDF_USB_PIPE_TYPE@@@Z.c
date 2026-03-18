/*
 * XREFs of ?IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z @ 0x1C0038FD8
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0075F20 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0080A24 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxUsbPipe::IsType(FxUsbPipe *this, _WDF_USB_PIPE_TYPE Type)
{
  __int64 PipeType; // rax
  int v3; // ecx

  PipeType = this->m_PipeInformation.PipeType;
  if ( (unsigned int)PipeType >= 4 )
    v3 = 0;
  else
    v3 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType];
  return v3 == Type;
}
