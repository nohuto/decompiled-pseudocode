/*
 * XREFs of ?GetMaxPacketSize@FxUsbPipe@@QEAAKXZ @ 0x1C0038FB4
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0075F20 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C0079EEC (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0080A24 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbPipe::GetMaxPacketSize(FxUsbPipe *this)
{
  if ( (this->m_PipeInformation.PipeFlags & 0x10000) != 0 )
    return this->m_PipeInformation.MaximumTransferSize;
  else
    return this->m_PipeInformation.MaximumPacketSize;
}
