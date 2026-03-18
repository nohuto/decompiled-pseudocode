/*
 * XREFs of ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C00561E4
 * Callers:
 *     imp_WdfDmaTransactionAllocateResources @ 0x1C0053F80 (imp_WdfDmaTransactionAllocateResources.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002DC98 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C0037DAC (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C00380C4 (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0053CE8 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qld @ 0x1C0055B64 (WPP_IFR_SF_qld.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0059C18 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0068854 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::ReserveAdapter(
        FxDmaPacketTransaction *this,
        unsigned int NumberOfMapRegisters,
        _WDF_DMA_DIRECTION DmaDirection,
        void (__fastcall *Callback)(WDFDMATRANSACTION__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  const void *v11; // r15
  FxDmaTransactionState m_State; // edx
  const void *v13; // rax
  int v14; // edx
  const _GUID *v15; // r8
  unsigned __int64 v16; // rax
  unsigned int *p_m_MapRegistersReserved; // r14
  unsigned __int64 v18; // rax
  FxDmaEnabler *m_DmaEnabler; // rcx
  _FxDmaDescription *p_m_SimplexAdapterInfo; // rax
  unsigned int v21; // r9d
  signed int v22; // esi
  FxDmaEnabler *v23; // rcx
  FxDmaEnabler *v24; // rcx
  FxDmaPacketTransaction_vtbl *v25; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v27; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rax

  m_Globals = this->m_Globals;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v11 = _a1;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  m_State = this->m_State;
  if ( NumberOfMapRegisters )
  {
    if ( ((m_State - 1) & 0xFFFFFFF9) != 0 || m_State == FxDmaTransactionStateTransferCompleted )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v11, this->m_State);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, ObjectHandleUnchecked, this->m_State);
    }
  }
  else if ( m_State != FxDmaTransactionStateInitialized )
  {
    v13 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qld(m_Globals, v14, (unsigned int)v15, 0xCu, v15, v13, v14, -1073741811);
    v16 = FxObject::GetObjectHandleUnchecked(this);
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v16, this->m_State);
  }
  p_m_MapRegistersReserved = &this->m_MapRegistersReserved;
  if ( this->m_MapRegistersReserved )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v11);
    v18 = FxObject::GetObjectHandleUnchecked(this);
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v18, this->m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection )
    p_m_SimplexAdapterInfo = (_FxDmaDescription *)((char *)m_DmaEnabler
                                                 + ((*((_BYTE *)m_DmaEnabler + 380) & 0x10) != 0 ? 280LL : 184LL));
  else
    p_m_SimplexAdapterInfo = &m_DmaEnabler->m_SimplexAdapterInfo;
  this->m_AdapterInfo = p_m_SimplexAdapterInfo;
  if ( NumberOfMapRegisters )
  {
    *p_m_MapRegistersReserved = NumberOfMapRegisters;
  }
  else
  {
    v21 = p_m_SimplexAdapterInfo->NumberOfMapRegisters;
    if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
    {
      v22 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
              this->m_StartMdl,
              this->m_StartOffset,
              this->m_TransactionLength,
              v21,
              0LL,
              &this->m_MapRegistersReserved);
      if ( v22 < 0 )
        goto LABEL_24;
    }
    else
    {
      *p_m_MapRegistersReserved = v21;
    }
  }
  v23 = this->m_DmaEnabler;
  this->m_DmaAcquiredContext = Context;
  this->m_DmaDirection = DmaDirection;
  this->m_StartMdl = 0LL;
  this->m_StartOffset = 0LL;
  this->m_CurrentFragmentMdl = 0LL;
  this->m_CurrentFragmentOffset = 0LL;
  this->m_Remaining = 0LL;
  this->m_TransactionLength = 0LL;
  this->m_DmaAcquiredFunction.Method.ProgramDma = (unsigned __int8 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *))Callback;
  if ( FxDmaEnabler::GetDmaDescription(v23, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v24, this->m_TransferContext, DmaDirection);
  v22 = this->InitializeResources(this);
  if ( v22 >= 0 )
  {
    v25 = this->__vftable;
    this->m_State = FxDmaTransactionStateReserved;
    v22 = v25->StartTransfer(this);
    if ( v22 >= 0 )
      goto LABEL_27;
    goto LABEL_25;
  }
LABEL_24:
  FxDmaTransactionBase::ReleaseForReuse(this, 1u);
LABEL_25:
  m_EncodedRequest = this->m_EncodedRequest;
  this->m_State = FxDmaTransactionStateTransferFailed;
  this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
  this->m_DmaAcquiredContext = 0LL;
  *p_m_MapRegistersReserved = 0;
  if ( m_EncodedRequest )
  {
    v27 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
    this->m_EncodedRequest = v27;
    FxRequest::ReleaseIrpReference(v27);
    this->m_EncodedRequest->Release(
      this->m_EncodedRequest,
      this,
      302,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
  }
LABEL_27:
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qL(m_Globals, 5u, 0xFu, 0xFu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v11, v22);
  return (unsigned int)v22;
}
