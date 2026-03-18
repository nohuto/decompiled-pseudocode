/*
 * XREFs of imp_WdfRequestGetInformation @ 0x1C00017D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2A10 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int64 __fastcall imp_WdfRequestGetInformation(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  unsigned __int64 Information; // rdi
  __int64 Offset; // rcx
  FxRequest *v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+50h] [rbp+18h] BYREF

  Information = 0LL;
  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v4 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxRequest *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4104 )
  {
    pRequest = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v4 = pRequest;
  }
  m_Globals = v4->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return v4->m_Irp.m_Irp->IoStatus.Information;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(v4, &PreviousIrql);
  if ( !m_Globals->FxVerifierOn || FxRequest::Vf_VerifyRequestIsNotCompleted(v4, m_Globals) >= 0 )
    Information = v4->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Unlock(v4, PreviousIrql);
  return Information;
}
