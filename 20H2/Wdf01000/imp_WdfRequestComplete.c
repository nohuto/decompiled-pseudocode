/*
 * XREFs of imp_WdfRequestComplete @ 0x1C0005B30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002E200 (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00C1F60 (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestComplete(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request, int RequestStatus)
{
  __int64 Offset; // rcx
  unsigned __int64 v5; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  FxDeviceBase *v7; // rdi
  _FX_DRIVER_GLOBALS *v8; // rcx
  char m_Globals_high; // al
  const void *_a1; // rdx
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v5 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v5;
    v5 -= Offset;
  }
  if ( *(_WORD *)(v5 + 8) == 4104 )
  {
    pRequest = (FxRequest *)v5;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v5, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v5 = (unsigned __int64)pRequest;
  }
  v6 = *(_FX_DRIVER_GLOBALS **)(v5 + 16);
  if ( v6->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(v6, (FxRequest *)v5) < 0 )
      return;
    v5 = (unsigned __int64)pRequest;
  }
  v7 = *(FxDeviceBase **)(v5 + 96);
  v8 = *(_FX_DRIVER_GLOBALS **)(v5 + 16);
  if ( v8->FxVerboseOn )
  {
    _a1 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v5 + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qqqd(
      v8,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      *(const void **)(v5 + 152),
      *(_QWORD *)(*(_QWORD *)(v5 + 152) + 56LL),
      RequestStatus);
  }
  if ( v7 )
    m_Globals_high = HIBYTE(v7[1].m_Globals);
  else
    m_Globals_high = 0;
  *(_BYTE *)(v5 + 236) = m_Globals_high;
  FxRequest::CompleteInternal((FxRequest *)v5, RequestStatus);
}
