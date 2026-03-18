/*
 * XREFs of ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C74F8
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0009010 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000A0B0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C000A934 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C000E1B8 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyInsertIrpQueue(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIrpQueue *IrpQueue)
{
  unsigned int v3; // ebx
  const void *_a2; // rax
  const void *_a1; // r8

  v3 = 0;
  if ( this->m_IrpQueue )
  {
    v3 = -1073741595;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqd(FxDriverGlobals, 2u, 0x10u, 0x28u, WPP_FxRequest_cpp_Traceguids, _a1, _a2, -1073741595);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else if ( FxDriverGlobals->FxVerifierOn )
  {
    return (unsigned int)FxRequest::Vf_VerifyRequestIsNotCompleted(this, FxDriverGlobals);
  }
  return v3;
}
