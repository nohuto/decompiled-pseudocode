/*
 * XREFs of ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2480
 * Callers:
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00187B0 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifyPreProcessSendAndForget(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  const void *_a1; // rax
  const void *_a2; // rdx
  const void *ObjectHandleUnchecked; // rax

  if ( this->m_CompletionRoutine.m_Completion )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0x17u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  if ( !this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction
    && ((__int64)this->m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF) != 1 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x18u, WPP_FxRequest_cpp_Traceguids, ObjectHandleUnchecked);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
