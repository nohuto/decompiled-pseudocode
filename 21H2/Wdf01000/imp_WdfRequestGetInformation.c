/*
 * XREFs of imp_WdfRequestGetInformation @ 0x1C0010490
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int64 __fastcall imp_WdfRequestGetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int8 a3)
{
  unsigned __int64 Information; // rdi
  __int64 Offset; // rcx
  FxRequest *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v8; // r8
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+50h] [rbp+18h] BYREF

  Information = 0LL;
  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v5 = pRequest;
  }
  m_Globals = v5->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return v5->m_Irp.m_Irp->IoStatus.Information;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(v5, &PreviousIrql, a3);
  if ( !m_Globals->FxVerifierOn || FxRequest::Vf_VerifyRequestIsNotCompleted(v5, m_Globals) >= 0 )
    Information = v5->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Unlock(v5, PreviousIrql, v8);
  return Information;
}
