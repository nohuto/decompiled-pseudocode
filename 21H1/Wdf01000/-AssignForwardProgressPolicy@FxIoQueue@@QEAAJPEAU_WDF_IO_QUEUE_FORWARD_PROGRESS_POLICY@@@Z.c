/*
 * XREFs of ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C0077744
 * Callers:
 *     imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1C0073FD0 (imp_WdfIoQueueAssignForwardProgressPolicy.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C0075900 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C0077954 (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 */

__int64 __fastcall FxIoQueue::AssignForwardProgressPolicy(
        FxIoQueue *this,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *Policy)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v3; // esi
  unsigned __int8 v6; // cl
  unsigned __int16 v7; // r9
  unsigned int _a1; // ebx
  FX_POOL **v10; // rax
  unsigned int v11; // edi
  _LIST_ENTRY *p_m_ReservedRequestList; // rax
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *p_m_PendedIrpList; // rax
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rax
  unsigned __int8 v16; // dl
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *p_m_ForwardProgressList; // rdx
  _LIST_ENTRY *Blink; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxRequest *pRequest; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v3 = 0;
  pRequest = 0LL;
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)Policy, 0xBu) )
  {
    v6 = 0;
    while ( this->m_PkgIo->m_DispatchTable[v6] != this )
    {
      if ( ++v6 > 0x1Bu )
      {
        v7 = 12;
        _a1 = -1073741811;
        goto LABEL_6;
      }
    }
  }
  v10 = FxPoolAllocator(
          m_Globals,
          &m_Globals->FxPoolFrameworks,
          ExDefaultNonPagedPoolType,
          0x68uLL,
          m_Globals->Tag,
          retaddr);
  this->m_FwdProgContext = (_FXIO_FORWARD_PROGRESS_CONTEXT *)v10;
  if ( v10 )
  {
    memset(v10, 0, 0x68uLL);
    v11 = 0;
    this->m_FwdProgContext->m_Policy = Policy->ForwardProgressReservedPolicy;
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
        v17 = &this->m_FwdProgContext->m_ReservedRequestList;
        p_m_ForwardProgressList = &pRequest->m_ForwardProgressList;
        Blink = this->m_FwdProgContext->m_ReservedRequestList.Blink;
        if ( Blink->Flink != v17 )
          __fastfail(3u);
        p_m_ForwardProgressList->Flink = v17;
        ++v11;
        p_m_ForwardProgressList->Blink = Blink;
        Blink->Flink = p_m_ForwardProgressList;
        v17->Blink = p_m_ForwardProgressList;
        if ( v11 >= this->m_FwdProgContext->m_NumberOfReservedRequests )
          goto LABEL_13;
      }
      FxIoQueue::FreeAllReservedRequests(this, v16);
      this->m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 0;
      FxPoolFree((FX_POOL_TRACKER *)this->m_FwdProgContext);
      this->m_FwdProgContext = 0LL;
    }
    else
    {
LABEL_13:
      this->m_SupportForwardProgress = 1;
    }
    return (unsigned int)v3;
  }
  else
  {
    _a1 = -1073741670;
    v7 = 13;
LABEL_6:
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, v7, WPP_FxIoQueueKm_cpp_Traceguids, _a1);
    return _a1;
  }
}
