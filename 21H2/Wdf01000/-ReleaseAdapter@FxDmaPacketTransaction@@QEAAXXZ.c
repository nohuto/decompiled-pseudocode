/*
 * XREFs of ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C00331E8
 * Callers:
 *     imp_WdfDmaTransactionFreeResources @ 0x1C0030340 (imp_WdfDmaTransactionFreeResources.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ql @ 0x1C002FAEC (WPP_IFR_SF_ql.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0036F8C (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaPacketTransaction::ReleaseAdapter(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rax
  const void *v4; // rsi
  FxDmaTransactionState m_State; // eax
  int v6; // ecx
  unsigned __int64 ObjectHandleUnchecked; // rax

  m_Globals = this->m_Globals;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v4 = _a1;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x10u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  m_State = this->m_State;
  if ( (unsigned int)m_State <= FxDmaTransactionStateDeleted )
  {
    v6 = 275;
    if ( _bittest(&v6, m_State) )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v4, this->m_State);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, ObjectHandleUnchecked, this->m_State);
    }
  }
  FxDmaTransactionBase::ReleaseForReuse(this, 1u);
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x12u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v4);
  }
}
