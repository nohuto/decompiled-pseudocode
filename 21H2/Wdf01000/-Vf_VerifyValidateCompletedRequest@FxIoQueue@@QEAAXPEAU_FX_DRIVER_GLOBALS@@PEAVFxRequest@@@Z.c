/*
 * XREFs of ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C89A8
 * Callers:
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00034B0 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PreRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003861C (-PreRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7908 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::Vf_VerifyValidateCompletedRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request)
{
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // dl
  const void *_a1; // rax
  const void *_a2; // rdx
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)Request);
  if ( FxDriverGlobals->FxVerifierOn )
    FxRequest::Vf_VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
  v7 = irql;
  Request->m_VerifierFlags &= ~1u;
  FxNonPagedObject::Unlock(Request, v7, v6);
  if ( Request->m_OwnerListEntry.Flink != &Request->m_OwnerListEntry )
  {
    FxObject::GetObjectHandleUnchecked(this);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Request);
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0xDu, 0x4Eu, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
}
