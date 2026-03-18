/*
 * XREFs of ?AddDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0084C58
 * Callers:
 *     ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0050060 (-AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0061E50 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxPkgPnp::AddDmaEnabler(FxPkgPnp *this, FxDmaEnabler *Enabler)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v7; // r10

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(Enabler);
    WPP_IFR_SF_qq(v7, 5u, 0xCu, 0xCu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
    m_Globals = this->m_Globals;
  }
  FxTransactionedList::Add(this->m_DmaEnablerList, m_Globals, &Enabler->m_TransactionLink);
}
