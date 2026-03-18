/*
 * XREFs of imp_WdfRequestGetRequestorMode @ 0x1C0002E40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2A10 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestGetRequestorMode(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  __int64 Offset; // r8
  FxRequest *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 RequestorMode; // di
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+50h] [rbp+18h] BYREF

  LOWORD(Offset) = 0;
  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v3 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxRequest *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4104 )
  {
    pRequest = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v3 = pRequest;
  }
  m_Globals = v3->m_Globals;
  if ( m_Globals->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(v3, &PreviousIrql);
    if ( m_Globals->FxVerifierOn && FxRequest::Vf_VerifyRequestIsNotCompleted(v3, m_Globals) < 0 )
      RequestorMode = 1;
    else
      RequestorMode = v3->m_Irp.m_Irp->RequestorMode;
    FxNonPagedObject::Unlock(v3, PreviousIrql);
  }
  else
  {
    return (unsigned __int8)v3->m_Irp.m_Irp->RequestorMode;
  }
  return RequestorMode;
}
