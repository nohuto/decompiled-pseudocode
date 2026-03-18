/*
 * XREFs of ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C0035468
 * Callers:
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x1C0030630 (imp_WdfDmaTransactionStopSystemTransfer.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaSystemTransaction::StopTransfer(FxDmaSystemTransaction *this)
{
  _FxDmaDescription *m_AdapterInfo; // rax
  void *m_TransferContext; // rdx
  signed int _a2; // ebx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v6; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *ObjectHandleUnchecked; // rax
  unsigned int v9; // edx
  unsigned __int64 v10; // rax

  m_AdapterInfo = this->m_AdapterInfo;
  m_TransferContext = this->m_TransferContext;
  this->m_IsCancelled = 1;
  _a2 = m_AdapterInfo->AdapterObject->DmaOperations->CancelMappedTransfer(
          m_AdapterInfo->AdapterObject,
          m_TransferContext);
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(v6, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionSystem_hpp_Traceguids, _a1, _a2);
  }
  if ( _a2 < 0 )
  {
    m_Globals = this->m_Globals;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionSystem_cpp_Traceguids, ObjectHandleUnchecked);
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v9, 0xBu) || m_Globals->FxVerifyDownlevel )
      {
        v10 = FxObject::GetObjectHandleUnchecked(this);
        FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v10, this->m_State);
      }
    }
  }
}
