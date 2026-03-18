/*
 * XREFs of ?GetSgListBufferSize@FxDmaPacketTransaction@@MEAAKXZ @ 0x1C00327C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::GetSgListBufferSize(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rax

  m_Globals = this->m_Globals;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaTransactionPacket_hpp_Traceguids, _a1);
  FxVerifierDbgBreakPoint(m_Globals);
  return 0xFFFFFFFFLL;
}
