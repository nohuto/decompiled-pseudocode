/*
 * XREFs of ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C002B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C002B9D8 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxDevice::AddDmaEnabler(FxDevice *this, FxDmaEnabler *Enabler)
{
  FxPkgPnp *m_PkgPnp; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *v6; // r10

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
  {
    m_Globals = m_PkgPnp->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(Enabler);
      WPP_IFR_SF_qq(v6, 5u, 0xCu, 0xCu, WPP_FxPkgPnpKM_cpp_Traceguids, Enabler, _a2);
      m_Globals = m_PkgPnp->m_Globals;
    }
    FxTransactionedList::Add(m_PkgPnp->m_DmaEnablerList, m_Globals, &Enabler->m_TransactionLink);
  }
}
