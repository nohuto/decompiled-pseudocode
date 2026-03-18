/*
 * XREFs of ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C0079658
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0079D58 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C007A6DC (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C007A9A0 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C000EA30 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C000FAF8 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::CancelRepeaters(FxUsbPipeContinuousReader *this)
{
  int v2; // edi
  FxUsbPipeRepeatReader *m_Readers; // rsi
  void *ObjectHandleUnchecked; // rax
  __int64 v5; // rdx

  KeEnterCriticalRegion();
  v2 = 0;
  if ( this->m_NumReaders )
  {
    m_Readers = this->m_Readers;
    do
    {
      FxRequestBase::Cancel(m_Readers->Request);
      ObjectHandleUnchecked = (void *)FxObject::GetObjectHandleUnchecked(this->m_Pipe);
      _FX_DRIVER_GLOBALS::WaitForSignal(
        *(_FX_DRIVER_GLOBALS **)(v5 + 16),
        &this->m_Readers[v2].ReadCompletedEvent,
        "waiting for continuous reader to finish, WDFUSBPIPE",
        ObjectHandleUnchecked,
        *(_DWORD *)(*(_QWORD *)(v5 + 16) + 416LL),
        1);
      ++m_Readers;
      ++v2;
    }
    while ( v2 < this->m_NumReaders );
  }
  KeLeaveCriticalRegion();
}
