/*
 * XREFs of ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C007939C
 * Callers:
 *     ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x1C0079560 (--_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0039116 (-DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00529E0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::~FxUsbPipeContinuousReader(FxUsbPipeContinuousReader *this)
{
  int v1; // esi
  FxUsbPipeRepeatReader *m_Readers; // rdi
  FxLookasideList *m_Lookaside; // rcx
  FxSystemWorkItem *m_WorkItem; // rcx

  v1 = 0;
  if ( this->m_NumReaders )
  {
    m_Readers = this->m_Readers;
    do
    {
      if ( m_Readers->Request )
      {
        FxUsbPipeContinuousReader::DeleteMemory(this, m_Readers->Request);
        m_Readers->Request->DeleteObject(m_Readers->Request);
        m_Readers->Request = 0LL;
      }
      ++v1;
      ++m_Readers;
    }
    while ( v1 < this->m_NumReaders );
  }
  m_Lookaside = this->m_Lookaside;
  if ( m_Lookaside )
    m_Lookaside->DeleteObject(m_Lookaside);
  m_WorkItem = this->m_WorkItem;
  if ( m_WorkItem )
  {
    m_WorkItem->DeleteObject(m_WorkItem);
    this->m_WorkItem = 0LL;
  }
  `vector destructor iterator'(
    (char *)this->m_Readers,
    0x78uLL,
    1uLL,
    (void (__fastcall *)(void *))FxDeviceBase::AddChildList);
}
