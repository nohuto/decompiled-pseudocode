/*
 * XREFs of ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C00189D0
 * Callers:
 *     ?Dispose@FxTimer@@UEAAEXZ @ 0x1C0018740 (-Dispose@FxTimer@@UEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0003728 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxTimer::FlushAndRundown(FxTimer *this)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxObject *m_Object; // rcx
  const void *_a1; // rax
  const void *_a2; // rdx

  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0xEu, WPP_FxTimer_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxTimer::Stop(this, 1u);
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 547, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  this->Release(this, this, 553, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
}
