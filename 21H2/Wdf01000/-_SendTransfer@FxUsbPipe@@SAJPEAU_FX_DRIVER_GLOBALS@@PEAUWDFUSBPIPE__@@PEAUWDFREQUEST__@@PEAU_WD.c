/*
 * XREFs of ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C007AF70
 * Callers:
 *     imp_WdfUsbTargetPipeReadSynchronously @ 0x1C0076810 (imp_WdfUsbTargetPipeReadSynchronously.c)
 *     imp_WdfUsbTargetPipeWriteSynchronously @ 0x1C0076D10 (imp_WdfUsbTargetPipeWriteSynchronously.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001A074 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C001A138 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C001A228 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C001A8A0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C001AD20 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0079274 (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C00794B4 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0080A24 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 */

__int64 __fastcall FxUsbPipe::_SendTransfer(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred,
        unsigned int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  signed int v11; // ebx
  FxRequestBase *v12; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  const _GUID *traceGuid; // r8
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v19; // [rsp+70h] [rbp-90h] BYREF
  FxUsbPipeTransferContext context; // [rsp+1A0h] [rbp+A0h] BYREF

  pUsbPipe = 0LL;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxUsbPipeTransferContext::FxUsbPipeTransferContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v19, m_Globals, &context, Request);
  if ( BytesTransferred )
    *BytesTransferred = 0;
  v11 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v11 >= 0 )
  {
    v11 = FxValidateRequestOptions(m_Globals, RequestOptions, v12);
    if ( v11 >= 0 )
    {
      if ( !MemoryDescriptor
        || (v11 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, (IFxMemory *)m_Globals, MemoryDescriptor, 0), v11 >= 0) )
      {
        v11 = FxUsbPipe::FormatTransferRequest(pUsbPipe, v19.m_TrueRequest, &buf, Flags);
        if ( v11 >= 0 )
        {
          if ( m_Globals->FxVerboseOn )
          {
            ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v19.m_TrueRequest);
            if ( ObjectHandleUnchecked )
              _a2 = (const void *)ObjectHandleUnchecked;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, traceGuid, Pipe, _a2);
          }
          v11 = FxIoTarget::SubmitSync(pUsbPipe, v19.m_TrueRequest, RequestOptions, 0LL);
          if ( BytesTransferred )
            *BytesTransferred = context.m_Urb->TransferBufferLength;
        }
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x20u, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, Pipe, v11);
      }
    }
  }
  FxSyncRequest::~FxSyncRequest(&v19);
  FxUsbPipeTransferContext::~FxUsbPipeTransferContext(&context);
  return (unsigned int)v11;
}
