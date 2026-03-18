/*
 * XREFs of ??1FxDpc@@UEAA@XZ @ 0x1C003A2C8
 * Callers:
 *     ??_GFxDpc@@UEAAPEAXI@Z @ 0x1C003A330 (--_GFxDpc@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00142D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDpc::~FxDpc(FxDpc *this, unsigned int a2, unsigned int a3)
{
  bool v3; // zf
  const void *_a1; // rax

  v3 = this->m_Object == 0LL;
  this->__vftable = (FxDpc_vtbl *)FxDpc::`vftable';
  if ( !v3 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxDpc_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
