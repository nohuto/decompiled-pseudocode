/*
 * XREFs of ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C006DF00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C006CAC8 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 */

void __fastcall FxUsbPipe::WaitForSentIoToComplete(FxUsbPipe *this)
{
  FxUsbPipeContinuousReader *m_Reader; // rbx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v4; // r10
  FxSystemWorkItem *m_WorkItem; // rbx
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v7; // r10
  const void *v8; // rax
  _FX_DRIVER_GLOBALS *v9; // r10

  m_Reader = this->m_Reader;
  if ( m_Reader )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(v4, 5u, 0xEu, 0x19u, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, _a1);
      m_Reader = this->m_Reader;
    }
    m_WorkItem = m_Reader->m_WorkItem;
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&m_WorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    if ( this->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(
        v7,
        5u,
        0xEu,
        0x1Au,
        (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
        ObjectHandleUnchecked,
        this->m_Reader->m_NumReaders);
    }
    FxUsbPipeContinuousReader::CancelRepeaters(this->m_Reader);
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    v8 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(v9, 5u, 0xEu, 0x1Bu, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, v8);
  }
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_SentIoEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
}
