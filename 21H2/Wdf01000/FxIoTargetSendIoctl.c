/*
 * XREFs of FxIoTargetSendIoctl @ 0x1C0019E84
 * Callers:
 *     imp_WdfIoTargetSendIoctlSynchronously @ 0x1C0019E30 (imp_WdfIoTargetSendIoctlSynchronously.c)
 *     imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x1C001B3B0 (imp_WdfIoTargetSendInternalIoctlSynchronously.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C0005E18 (--1FxIoContext@@UEAA@XZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0005E74 (--0FxIoContext@@QEAA@XZ.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00066D0 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001A074 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C001A138 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C001A228 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C001A8A0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C001AD20 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_Dd @ 0x1C003511C (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0053E0C (WPP_IFR_SF_qqdd.c)
 */

__int64 __fastcall FxIoTargetSendIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v13; // ebx
  FxRequestBase *v14; // r8
  int v15; // eax
  _WDF_MEMORY_DESCRIPTOR *v16; // rsi
  signed int v17; // eax
  int v18; // eax
  unsigned __int16 v20; // r9
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *v22; // r10
  FxRequestBuffer outputBuf; // [rsp+50h] [rbp-B0h] BYREF
  FxRequestBuffer inputBuf; // [rsp+70h] [rbp-90h] BYREF
  FxSyncRequest v25; // [rsp+90h] [rbp-70h] BYREF
  FxIoContext context; // [rsp+1C0h] [rbp+C0h] BYREF
  FxIoTarget *pTarget; // [rsp+2A0h] [rbp+1A0h] BYREF

  pTarget = 0LL;
  outputBuf.DataType = FxRequestBufferUnspecified;
  inputBuf.DataType = FxRequestBufferUnspecified;
  memset(&inputBuf.u, 0, sizeof(inputBuf.u));
  memset(&outputBuf.u, 0, sizeof(outputBuf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  FxIoContext::FxIoContext(&context);
  FxSyncRequest::FxSyncRequest(&v25, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqdd(m_Globals, 5u, 0xEu, 0x25u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, Request, Ioctl, Internal);
  v13 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v13 >= 0 )
  {
    v15 = FxValidateRequestOptions(m_Globals, RequestOptions, v14);
    v13 = v15;
    if ( v15 < 0 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x26u, WPP_FxIoTargetAPI_cpp_Traceguids, v15);
      goto LABEL_13;
    }
    v16 = InputBuffer;
    if ( InputBuffer
      && (v17 = FxRequestBuffer::ValidateMemoryDescriptor(&inputBuf, m_Globals, InputBuffer, 0), v13 = v17, v17 < 0) )
    {
      v20 = 39;
    }
    else
    {
      v16 = OutputBuffer;
      if ( !OutputBuffer
        || (v17 = FxRequestBuffer::ValidateMemoryDescriptor(&outputBuf, m_Globals, OutputBuffer, 0), v13 = v17, v17 >= 0) )
      {
        v18 = FxIoTarget::FormatIoctlRequest(pTarget, v25.m_TrueRequest, Ioctl, Internal, &inputBuf, &outputBuf);
        v13 = v18;
        if ( v18 < 0 )
        {
          WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v18);
        }
        else
        {
          if ( m_Globals->FxVerboseOn )
          {
            ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v25.m_TrueRequest);
            if ( ObjectHandleUnchecked )
              v22 = (const void *)ObjectHandleUnchecked;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, v22);
          }
          v13 = FxIoTarget::SubmitSync(pTarget, v25.m_TrueRequest, RequestOptions, 0LL);
          if ( BytesReturned )
            *BytesReturned = v25.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
        }
        goto LABEL_13;
      }
      v20 = 40;
    }
    WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, v20, WPP_FxIoTargetAPI_cpp_Traceguids, v16, v17);
  }
LABEL_13:
  FxSyncRequest::~FxSyncRequest(&v25);
  FxIoContext::~FxIoContext(&context);
  return (unsigned int)v13;
}
