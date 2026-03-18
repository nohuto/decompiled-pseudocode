/*
 * XREFs of imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0078E40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001A074 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C001A138 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C001A228 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C001A8A0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C001AD20 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0039464 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1C00394C4 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C007F23C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSendControlTransferSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  signed int v11; // ebx
  FxRequestBase *v12; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  int v15; // eax
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v19; // [rsp+70h] [rbp-90h] BYREF
  FxUsbDeviceControlContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR retaddr; // [rsp+328h] [rbp+228h]

  pUsbDevice = 0LL;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  FxUsbDeviceControlContext::FxUsbDeviceControlContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v19, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice);
  if ( !SetupPacket )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v11 >= 0 )
  {
    v11 = FxValidateRequestOptions(m_Globals, RequestOptions, v12);
    if ( v11 >= 0 )
    {
      v11 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, (IFxMemory *)m_Globals, MemoryDescriptor, 3);
      if ( v11 >= 0 )
      {
        v11 = FxUsbDevice::FormatControlRequest(pUsbDevice, v19.m_TrueRequest, SetupPacket, &buf);
        if ( v11 >= 0 )
        {
          if ( m_Globals->FxVerboseOn )
          {
            ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v19.m_TrueRequest);
            if ( ObjectHandleUnchecked )
              _a2 = (const void *)ObjectHandleUnchecked;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, _a2);
          }
          v15 = FxIoTarget::SubmitSync(pUsbDevice, v19.m_TrueRequest, RequestOptions, 0LL);
          v11 = v15;
          if ( BytesTransferred )
          {
            if ( v15 < 0 )
              *BytesTransferred = 0;
            else
              *BytesTransferred = context.m_Urb->TransferBufferLength;
          }
        }
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x1Cu, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, v11);
      }
    }
  }
  FxSyncRequest::~FxSyncRequest(&v19);
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
  return (unsigned int)v11;
}
