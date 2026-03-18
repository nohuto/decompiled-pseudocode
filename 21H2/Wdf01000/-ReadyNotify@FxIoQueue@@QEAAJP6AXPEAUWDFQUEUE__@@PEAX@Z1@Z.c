/*
 * XREFs of ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0033CA0
 * Callers:
 *     imp_WdfIoQueueReadyNotify @ 0x1C0033C50 (imp_WdfIoQueueReadyNotify.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ReadyNotify(
        FxIoQueue *this,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  bool v3; // zf
  void *v4; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v8; // r8
  unsigned __int16 v9; // r9
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // rax
  const void *_a1; // rax
  unsigned int v13; // edi
  const void *ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  unsigned __int16 v16; // r9
  const void *v17; // rax
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  v3 = this->m_Type == WdfIoQueueDispatchManual;
  v4 = Context;
  m_Globals = this->m_Globals;
  irql = 0;
  if ( v3 )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Context);
    if ( this->m_Deleted )
    {
      v13 = -1073741738;
      goto LABEL_10;
    }
    Method = this->m_ReadyNotify.Method;
    if ( QueueReady )
    {
      if ( !Method )
      {
LABEL_5:
        this->m_ReadyNotify.Method = QueueReady;
        this->m_ReadyNotifyContext = v4;
        FxIoQueue::DispatchEvents(this, irql, 0LL, v9);
        return 0LL;
      }
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v16 = 61;
    }
    else
    {
      if ( !Method )
      {
        v17 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v13 = -1073741808;
        WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x3Eu, WPP_FxIoQueue_cpp_Traceguids, v17, 0xC0000010);
        goto LABEL_9;
      }
      if ( (this->m_QueueState & 2) == 0 )
      {
        v4 = 0LL;
        QueueReady = 0LL;
        goto LABEL_5;
      }
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v16 = 63;
    }
    v13 = -1073741808;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, v16, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, _a2, -1073741808);
LABEL_9:
    FxVerifierDbgBreakPoint(m_Globals);
LABEL_10:
    FxNonPagedObject::Unlock(this, irql, v8);
    return v13;
  }
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v13 = -1073741808;
  WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x3Cu, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000010);
  FxVerifierDbgBreakPoint(m_Globals);
  return v13;
}
