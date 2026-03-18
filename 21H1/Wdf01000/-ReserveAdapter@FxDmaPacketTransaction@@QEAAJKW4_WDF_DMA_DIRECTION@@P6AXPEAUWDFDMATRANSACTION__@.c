/*
 * XREFs of ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C00332E4
 * Callers:
 *     imp_WdfDmaTransactionAllocateResources @ 0x1C002FE50 (imp_WdfDmaTransactionAllocateResources.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002F3F0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C002FA6C (WPP_IFR_SF_ql.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C0032444 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qld @ 0x1C0032B08 (WPP_IFR_SF_qld.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0036F0C (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C0037170 (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C004F084 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00591D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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
  FxDmaEnabler *m_DmaEnabler; // rdx
  __int64 v20; // rax
  _FxDmaDescription *v21; // rax
  unsigned int v22; // r9d
  signed int v23; // esi
  FxDmaEnabler *v24; // rcx
  FxDmaEnabler *v25; // rcx
  FxDmaPacketTransaction_vtbl *v26; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v28; // rcx
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
    v20 = (*((_BYTE *)m_DmaEnabler + 380) & 0x10) != 0 ? 280LL : 184LL;
  else
    v20 = 184LL;
  v21 = (_FxDmaDescription *)((char *)m_DmaEnabler + v20);
  this->m_AdapterInfo = v21;
  if ( NumberOfMapRegisters )
  {
    *p_m_MapRegistersReserved = NumberOfMapRegisters;
  }
  else
  {
    v22 = v21->NumberOfMapRegisters;
    if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
    {
      v23 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
              this->m_StartMdl,
              this->m_StartOffset,
              this->m_TransactionLength,
              v22,
              0LL,
              &this->m_MapRegistersReserved);
      if ( v23 < 0 )
      {
LABEL_23:
        FxDmaTransactionBase::ReleaseForReuse(this, 1u);
        goto $End_2;
      }
    }
    else
    {
      *p_m_MapRegistersReserved = v22;
    }
  }
  v24 = this->m_DmaEnabler;
  this->m_DmaAcquiredContext = Context;
  this->m_DmaDirection = DmaDirection;
  this->m_StartMdl = 0LL;
  this->m_StartOffset = 0LL;
  this->m_CurrentFragmentMdl = 0LL;
  this->m_CurrentFragmentOffset = 0LL;
  this->m_Remaining = 0LL;
  this->m_TransactionLength = 0LL;
  this->m_DmaAcquiredFunction.Method.ProgramDma = (unsigned __int8 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *))Callback;
  if ( FxDmaEnabler::GetDmaDescription(v24, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v25, this->m_TransferContext, DmaDirection);
  v23 = this->InitializeResources(this);
  if ( v23 < 0 )
    goto LABEL_23;
  v26 = this->__vftable;
  this->m_State = FxDmaTransactionStateReserved;
  v23 = v26->StartTransfer(this);
$End_2:
  if ( v23 < 0 )
  {
    m_EncodedRequest = this->m_EncodedRequest;
    this->m_State = FxDmaTransactionStateTransferFailed;
    this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
    this->m_DmaAcquiredContext = 0LL;
    *p_m_MapRegistersReserved = 0;
    if ( m_EncodedRequest )
    {
      v28 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v28;
      FxRequest::ReleaseIrpReference(v28);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qL(m_Globals, 5u, 0xFu, 0xFu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v11, v23);
  return (unsigned int)v23;
}
