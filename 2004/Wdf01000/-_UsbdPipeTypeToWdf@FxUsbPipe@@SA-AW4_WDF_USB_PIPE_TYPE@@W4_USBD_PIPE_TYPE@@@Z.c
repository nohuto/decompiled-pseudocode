/*
 * XREFs of ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C006C438
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0068860 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetPipeGetType @ 0x1C0069050 (imp_WdfUsbTargetPipeGetType.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006BFCC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C006C300 (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 *     ?CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_ENDPOINT_DESCRIPTOR@@E@Z @ 0x1C0071CB8 (-CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_E.c)
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
