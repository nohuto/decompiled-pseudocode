/*
 * XREFs of imp_WdfRequestCompleteWithInformation @ 0x1C0007410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00C7064 (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestCompleteWithInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        int RequestStatus,
        unsigned __int64 Information)
{
  char m_Globals_high; // di
  __int64 Offset; // rcx
  FxRequest *v8; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // rsi
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v12; // r10
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  m_Globals_high = 0;
  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v8 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v8->__vftable);
    v8 = (FxRequest *)((char *)v8 - Offset);
  }
  if ( v8->m_Type == 4104 )
  {
    pRequest = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v8 = pRequest;
  }
  m_Globals = v8->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(m_Globals, v8) < 0 )
      return;
    v8 = pRequest;
  }
  v8->m_Irp.m_Irp->IoStatus.Information = Information;
  m_DeviceBase = v8->m_DeviceBase;
  if ( v8->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v8);
    WPP_IFR_SF_qqqd(
      v12,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      v8->m_Irp.m_Irp,
      v8->m_Irp.m_Irp->IoStatus.Information,
      RequestStatus);
  }
  if ( m_DeviceBase )
    m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
  v8->m_PriorityBoost = m_Globals_high;
  FxRequest::CompleteInternal(v8, RequestStatus);
}
