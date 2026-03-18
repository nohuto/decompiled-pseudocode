/*
 * XREFs of ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EB4C
 * Callers:
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006BFCC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006CC7C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006CFD0 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EA20 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C00703FC (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0070E4C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C0072234 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C00729F0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0072C50 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0072E80 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00730B0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0049D50 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 */

void __fastcall FxFormatUsbRequest(
        FxRequestBase *Request,
        _FILE_OBJECT *Urb,
        unsigned __int8 FxUrbType,
        USBD_HANDLE__ *UsbdHandle)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  _IO_STACK_LOCATION *v6; // rcx

  CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
  CurrentStackLocation[-1].FileObject = 0LL;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  v6 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( FxUrbType == 1 && (unsigned int)(*((_DWORD *)UsbdHandle + 54) - 1538) <= 0xFFFFF9FC )
    v6[-1].FileObject = Urb;
  v6[-1].Parameters.WMI.ProviderId = (unsigned __int64)Urb;
  FxRequestBase::VerifierSetFormatted(Request, (__int64)Urb, FxUrbType);
}
