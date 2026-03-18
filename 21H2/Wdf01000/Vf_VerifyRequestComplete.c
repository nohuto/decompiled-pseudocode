/*
 * XREFs of Vf_VerifyRequestComplete @ 0x1C00C7064
 * Callers:
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0007410 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestComplete @ 0x1C00087D0 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x1C0038490 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C76BC (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7908 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyRequestComplete(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  int IsDriverOwned; // ebx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(pRequest, &irql, a3);
  if ( !FxDriverGlobals->FxVerifierOn )
    goto LABEL_5;
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
    {
      IsDriverOwned = FxRequest::Vf_VerifyRequestCanBeCompleted(pRequest, FxDriverGlobals);
      goto LABEL_6;
    }
LABEL_5:
    IsDriverOwned = 0;
  }
LABEL_6:
  FxNonPagedObject::Unlock(pRequest, irql, v5);
  return (unsigned int)IsDriverOwned;
}
