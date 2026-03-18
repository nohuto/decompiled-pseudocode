/*
 * XREFs of ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00393BA
 * Callers:
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0039266 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C00797EC (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0079B6C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C007CC50 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007D5CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EA1C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C007F23C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C007F4C4 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007F720 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007F964 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0080A24 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C001B250 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 */

void __fastcall FxFormatUsbRequest(
        FxRequestBase *Request,
        _FILE_OBJECT *Urb,
        _FX_URB_TYPE FxUrbType,
        USBD_HANDLE__ *UsbdHandle)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *v7; // rcx

  CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
  CurrentStackLocation[-1].FileObject = 0LL;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  m_Irp = Request->m_Irp.m_Irp;
  if ( FxUrbType == FxUrbTypeUsbdAllocated )
  {
    v7 = m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( (unsigned int)(*((_DWORD *)UsbdHandle + 54) - 1538) <= 0xFFFFF9FC )
      v7[-1].FileObject = Urb;
    v7[-1].Parameters.WMI.ProviderId = (unsigned __int64)Urb;
  }
  else
  {
    m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Urb;
  }
  FxRequestBase::VerifierSetFormatted(Request);
}
