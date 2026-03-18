/*
 * XREFs of ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C002F8F4
 * Callers:
 *     imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1C002F850 (imp_WdfIoQueueAssignForwardProgressPolicy.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C002FAA4 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C0082780 (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 */

__int64 __fastcall FxIoQueue::AssignForwardProgressPolicy(
        FxIoQueue *this,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *Policy)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v3; // esi
  ULONG Tag; // ecx
  void *v7; // rax
  FX_POOL **v8; // rax
  unsigned int v9; // edi
  _LIST_ENTRY *p_m_ReservedRequestList; // rax
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *p_m_PendedIrpList; // rax
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rax
  unsigned __int8 v14; // dl
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *p_m_ForwardProgressList; // rdx
  _LIST_ENTRY *Blink; // r8
  unsigned __int8 v19; // cl
  unsigned __int16 v20; // r9
  unsigned int _a1; // ebx
  __m128i v22; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v3 = 0;
  pRequest = 0LL;
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)Policy, 0xBu) )
  {
    v19 = 0;
    while ( this->m_PkgIo->m_DispatchTable[v19] != this )
    {
      if ( ++v19 > 0x1Bu )
      {
        v20 = 12;
        _a1 = -1073741811;
        goto LABEL_17;
      }
    }
  }
  Tag = m_Globals->Tag;
  v22.m128i_i64[0] = 0LL;
  v22.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v7 = retaddr;
  else
    v7 = 0LL;
  v8 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v22, 0x68uLL, Tag, v7);
  this->m_FwdProgContext = (_FXIO_FORWARD_PROGRESS_CONTEXT *)v8;
  if ( v8 )
  {
    v9 = 0;
    *((_DWORD *)v8 + 8) = Policy->ForwardProgressReservedPolicy;
    this->m_FwdProgContext->m_NumberOfReservedRequests = Policy->TotalForwardProgressRequests;
    this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method = Policy->EvtIoAllocateResourcesForReservedRequest;
    this->m_FwdProgContext->m_IoResourcesAllocate.Method = Policy->EvtIoAllocateRequestResources;
    this->m_FwdProgContext->m_IoExamineIrp.Method = Policy->ForwardProgressReservePolicySettings.Policy.ExaminePolicy.EvtIoWdmIrpForForwardProgress;
    p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
    p_m_ReservedRequestList->Blink = p_m_ReservedRequestList;
    p_m_ReservedRequestList->Flink = p_m_ReservedRequestList;
    p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList;
    p_m_ReservedRequestInUseList->Blink = p_m_ReservedRequestInUseList;
    p_m_ReservedRequestInUseList->Flink = p_m_ReservedRequestInUseList;
    p_m_PendedIrpList = &this->m_FwdProgContext->m_PendedIrpList;
    p_m_PendedIrpList->Blink = p_m_PendedIrpList;
    p_m_PendedIrpList->Flink = p_m_PendedIrpList;
    m_FwdProgContext = this->m_FwdProgContext;
    m_FwdProgContext->m_PendedReserveLock.m_Lock = 0LL;
    m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 1;
    if ( this->m_FwdProgContext->m_NumberOfReservedRequests )
    {
      while ( 1 )
      {
        v3 = FxIoQueue::AllocateReservedRequest(this, &pRequest);
        if ( v3 < 0 )
          break;
        v15 = &this->m_FwdProgContext->m_ReservedRequestList;
        p_m_ForwardProgressList = &pRequest->m_ForwardProgressList;
        Blink = this->m_FwdProgContext->m_ReservedRequestList.Blink;
        if ( Blink->Flink != v15 )
          __fastfail(3u);
        p_m_ForwardProgressList->Flink = v15;
        ++v9;
        p_m_ForwardProgressList->Blink = Blink;
        Blink->Flink = p_m_ForwardProgressList;
        v15->Blink = p_m_ForwardProgressList;
        if ( v9 >= this->m_FwdProgContext->m_NumberOfReservedRequests )
          goto LABEL_9;
      }
      FxIoQueue::FreeAllReservedRequests(this, v14);
      this->m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 0;
      FxPoolFree((FX_POOL_TRACKER *)this->m_FwdProgContext);
      this->m_FwdProgContext = 0LL;
    }
    else
    {
LABEL_9:
      this->m_SupportForwardProgress = 1;
    }
    return (unsigned int)v3;
  }
  else
  {
    _a1 = -1073741670;
    v20 = 13;
LABEL_17:
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, v20, WPP_FxIoQueueKm_cpp_Traceguids, _a1);
    return _a1;
  }
}
