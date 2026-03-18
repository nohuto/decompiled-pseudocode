/*
 * XREFs of ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6BA0
 * Callers:
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0004320 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequestBase::Vf_VerifyDispose(
        FxRequestBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxRequestBase *_a1; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( (this->m_VerifierFlags & 0x100) != 0 )
  {
    FxObject::GetObjectHandleUnchecked(this->m_Target);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    _a1 = this;
    if ( ObjectHandleUnchecked )
      _a1 = (FxRequestBase *)ObjectHandleUnchecked;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0xAu, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, irql, v5);
}
