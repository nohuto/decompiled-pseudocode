/*
 * XREFs of imp_WdfUsbTargetPipeResetSynchronously @ 0x1C00691B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0017C60 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0017D04 (--1FxSyncRequest@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     WPP_IFR_SF_qDd @ 0x1C002F6A8 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_ @ 0x1C0032554 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C8B8 (WPP_IFR_SF_qdd.c)
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C00647EC (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0065EC4 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006C5A0 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C006C848 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006CFD0 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeResetSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  signed int v8; // ebx
  unsigned int Flags; // edx
  __int64 v10; // rdx
  unsigned __int8 v11; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  FxSyncRequest v16; // [rsp+50h] [rbp-B0h] BYREF
  FxUsbPipeRequestContext context; // [rsp+180h] [rbp+80h] BYREF

  pUsbPipe = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxUsbPipeRequestContext::FxUsbPipeRequestContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v16, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe);
  v8 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v8 >= 0 )
  {
    if ( RequestOptions )
    {
      if ( RequestOptions->Size != 16 )
      {
        WPP_IFR_SF_qdd(
          m_Globals,
          2u,
          6u,
          0xAu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          16,
          RequestOptions->Size);
        v8 = -1073741820;
LABEL_12:
        WPP_IFR_SF_(m_Globals, 2u, 0xEu, 0x20u, WPP_FxUsbPipeAPI_cpp_Traceguids);
        goto LABEL_21;
      }
      Flags = RequestOptions->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          Flags,
          0xFu);
LABEL_11:
        v8 = -1073741811;
        goto LABEL_12;
      }
      if ( (Flags & 0xFFFFFFF7) != 0 && (Flags & 8) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
        goto LABEL_11;
      }
    }
    v8 = FxUsbPipe::FormatResetRequest(pUsbPipe, v16.m_TrueRequest);
    if ( v8 >= 0 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v16.m_TrueRequest);
        if ( ObjectHandleUnchecked )
          _a2 = (const void *)ObjectHandleUnchecked;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x21u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a2);
      }
      FxIoTarget::CancelSentIo(pUsbPipe, v10, v11);
      v8 = FxIoTarget::SubmitSyncRequestIgnoreTargetState(pUsbPipe, v16.m_TrueRequest, RequestOptions);
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x22u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, v8);
  }
LABEL_21:
  FxSyncRequest::~FxSyncRequest(&v16);
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(&context);
  return (unsigned int)v8;
}
