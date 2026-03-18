/*
 * XREFs of ?AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C007F180
 * Callers:
 *     ?AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C0050030 (-AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0061E50 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxPkgPnp::AddChildList(FxPkgPnp *this, FxChildList *List)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v7; // r10

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(List);
    WPP_IFR_SF_qq(v7, 5u, 0xCu, 0x4Du, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
    m_Globals = this->m_Globals;
  }
  FxTransactionedList::Add(&this->m_EnumInfo->m_ChildListList, m_Globals, &List->m_TransactionLink);
}
