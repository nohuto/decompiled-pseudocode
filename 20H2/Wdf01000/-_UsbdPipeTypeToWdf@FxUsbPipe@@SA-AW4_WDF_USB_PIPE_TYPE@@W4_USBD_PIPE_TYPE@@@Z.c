/*
 * XREFs of ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C006BB58
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0067F80 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetPipeGetType @ 0x1C0068770 (imp_WdfUsbTargetPipeGetType.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006B6EC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C006BA20 (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 *     ?CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_ENDPOINT_DESCRIPTOR@@E@Z @ 0x1C00713D8 (-CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbPipe::_UsbdPipeTypeToWdf(unsigned int UsbdPipeType)
{
  if ( UsbdPipeType >= 4 )
    return 0LL;
  else
    return (unsigned int)`FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[UsbdPipeType];
}
