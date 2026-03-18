/*
 * XREFs of ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6AE8
 * Callers:
 *     imp_WdfRequestStopAcknowledge @ 0x1C0019E00 (imp_WdfRequestStopAcknowledge.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6814 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6934 (-Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C69A4 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyStopAcknowledge(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 Requeue)
{
  unsigned __int8 v6; // r8
  int IsDriverOwned; // ebx
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, Requeue);
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsInEvtIoStopContext(this, FxDriverGlobals);
  else
    IsDriverOwned = 0;
  if ( IsDriverOwned >= 0 && !this->m_Completed && Requeue )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(this, FxDriverGlobals);
    else
      IsDriverOwned = 0;
    if ( IsDriverOwned >= 0 )
    {
      if ( FxDriverGlobals->FxVerifierOn )
        IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(this, FxDriverGlobals);
      else
        IsDriverOwned = 0;
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  return (unsigned int)IsDriverOwned;
}
