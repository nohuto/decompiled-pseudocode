/*
 * XREFs of ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C004E7B4
 * Callers:
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0032A14 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C00359CC (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C0035AE0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C0035BE4 (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C0035EAC (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C003663C (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C004E810 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C0054DD0 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ?Release@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C0055110 (-Release@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C0055230 (-Release@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::ReleaseIrpReference(FxRequest *this)
{
  const void *_a1; // rax

  if ( _InterlockedDecrement(&this->m_IrpReferenceCount) < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x10u, 0x30u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
}
