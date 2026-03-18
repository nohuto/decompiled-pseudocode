/*
 * XREFs of ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C006DC34
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006D198 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C006E1A0 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 * Callees:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0001F90 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qdq @ 0x1C000F940 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C8B8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqqq @ 0x1C005B1CC (WPP_IFR_SF_qqqq.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006CE44 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006D9AC (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::ResubmitRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater,
        int *Status)
{
  unsigned int v3; // ebp
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  int v8; // edi
  unsigned __int8 v9; // r8
  const void *_a1; // rax
  unsigned __int8 v11; // r8
  unsigned int v12; // eax
  const void *ObjectHandleUnchecked; // rax
  FxUsbPipe *m_Pipe; // r9
  const void *v15; // rax
  int v16; // edx
  unsigned int _a3; // r8d
  const void *v18; // rax
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  irql = 0;
  m_Globals = this->m_Pipe->m_Globals;
  v8 = FxUsbPipeContinuousReader::FormatRepeater(this, Repeater);
  FxNonPagedObject::Lock(this->m_Pipe, &irql, v9);
  if ( this->m_WorkItemQueued )
  {
    v8 = -1073741536;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_Pipe);
    WPP_IFR_SF_qqqq(
      m_Globals,
      4u,
      0xEu,
      0xDu,
      (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      _a1,
      Repeater,
      Repeater->Request,
      Repeater->RequestIrp);
  }
  else if ( v8 < 0 )
  {
    Repeater->Request->m_Irp.m_Irp->IoStatus.Status = v8;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_Pipe);
    WPP_IFR_SF_qdq(
      m_Globals,
      4u,
      0xEu,
      0xEu,
      (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      ObjectHandleUnchecked,
      v8,
      Repeater);
    m_Pipe = this->m_Pipe;
    if ( m_Pipe->m_State == WdfIoTargetStarted )
    {
      if ( ++this->m_NumFailedReaders == this->m_NumReaders )
      {
        FxUsbPipeContinuousReader::QueueWorkItemLocked(this, Repeater);
      }
      else
      {
        v15 = (const void *)FxObject::GetObjectHandleUnchecked(m_Pipe);
        WPP_IFR_SF_qdd(m_Globals, 4u, 0xEu, 0xFu, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, v15, v16, _a3);
      }
    }
    else
    {
      v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_Pipe);
      WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x10u, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, v18);
    }
  }
  else
  {
    v12 = FxIoTarget::SubmitLocked(this->m_Pipe, Repeater->Request, 0LL, 0x80000000);
    v3 = v12;
    if ( (v12 & 1) != 0 )
    {
      KeClearEvent(&Repeater->ReadCompletedEvent.m_Event);
    }
    else if ( (v12 & 2) != 0 )
    {
      v8 = -1073741536;
    }
    else
    {
      v8 = Repeater->Request->m_Irp.m_Irp->IoStatus.Status;
    }
  }
  FxNonPagedObject::Unlock(this->m_Pipe, irql, v11);
  *Status = v8;
  return v3;
}
