/*
 * XREFs of ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6764
 * Callers:
 *     imp_WdfRequestGetParameters @ 0x1C0002850 (imp_WdfRequestGetParameters.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C00198F0 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C65C4 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsCurrentStackValid(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _IRP *m_Irp; // r8
  unsigned int v3; // ebx
  const void *_a1; // rax
  int v6; // r8d
  unsigned int _a2; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax
  int _a3; // edx
  const void *v10; // r8

  m_Irp = this->m_Irp.m_Irp;
  v3 = 0;
  if ( !m_Irp )
  {
    v3 = -1073741808;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, v6 + 16, v6 + 60, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
LABEL_5:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return v3;
  }
  if ( m_Irp->CurrentLocation > m_Irp->StackCount )
  {
    v3 = -1073741808;
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x3Du, WPP_FxRequest_cpp_Traceguids, v10, ObjectHandleUnchecked, _a3);
    goto LABEL_5;
  }
  return v3;
}
