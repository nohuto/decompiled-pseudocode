/*
 * XREFs of ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C8918
 * Callers:
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000DF58 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7908 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7A94 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyRequeue(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest)
{
  unsigned __int8 v5; // r8
  int IsDriverOwned; // edi
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(pRequest, (unsigned __int8 *)&irql, (unsigned __int8)pRequest);
  if ( !FxDriverGlobals->FxVerifierOn )
    goto LABEL_6;
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  if ( IsDriverOwned < 0 )
    goto LABEL_8;
  if ( !FxDriverGlobals->FxVerifierOn )
  {
LABEL_6:
    IsDriverOwned = 0;
LABEL_7:
    pRequest->m_VerifierFlags &= 0xFFF6u;
    goto LABEL_8;
  }
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
    goto LABEL_7;
LABEL_8:
  FxNonPagedObject::Unlock(pRequest, (unsigned __int8)irql, v5);
  return (unsigned int)IsDriverOwned;
}
