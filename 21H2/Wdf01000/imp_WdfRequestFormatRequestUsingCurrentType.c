/*
 * XREFs of imp_WdfRequestFormatRequestUsingCurrentType @ 0x1C0001F10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfRequestFormatRequestUsingCurrentType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request)
{
  unsigned __int64 v2; // rbx
  FxRequest *v3; // rcx
  unsigned __int64 m_Irp; // r9
  __int64 v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxRequest *pRequest; // [rsp+48h] [rbp+10h] BYREF

  v2 = Request;
  LOWORD(Request) = 0;
  pRequest = 0LL;
  if ( !v2 )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v3 = (FxRequest *)(~v2 & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (v2 & 1) != 0 )
  {
    Request = LOWORD(v3->__vftable);
    v3 = (FxRequest *)((char *)v3 - Request);
  }
  if ( v3->m_Type == 4104 )
  {
    pRequest = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pRequest, (void *)v2, 0x1008u, Request);
    v3 = pRequest;
  }
  m_Irp = (unsigned __int64)v3->m_Irp.m_Irp;
  if ( !m_Irp )
    FxVerifierBugCheckWorker(v3->m_Globals, WDF_REQUEST_FATAL_ERROR, 2uLL, v2);
  if ( *(char *)(m_Irp + 67) < 2 )
    FxVerifierBugCheckWorker(v3->m_Globals, WDF_REQUEST_FATAL_ERROR, 1uLL, m_Irp);
  v3->m_NextStackLocationFormatted = 1;
  v5 = *(_QWORD *)(m_Irp + 184);
  *(_OWORD *)(v5 - 72) = *(_OWORD *)v5;
  *(_OWORD *)(v5 - 56) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(v5 - 40) = *(_OWORD *)(v5 + 32);
  *(_QWORD *)(v5 - 24) = *(_QWORD *)(v5 + 48);
  *(_BYTE *)(v5 - 69) = 0;
  m_Globals = pRequest->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::SetVerifierFlags(pRequest, 128);
  }
}
