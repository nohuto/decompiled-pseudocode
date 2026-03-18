/*
 * XREFs of ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C00135E0
 * Callers:
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0013580 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B8B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z @ 0x1C0013658 (-GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z.c)
 */

void __fastcall FxIoQueue::GetForwardProgressIrps(FxIoQueue *this, _LIST_ENTRY *IrpListHead, _FILE_OBJECT *FileObject)
{
  _IRP *ForwardProgressIrpLocked; // rax
  KIRQL v7; // r11
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_ListEntry; // rcx

  KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  while ( 1 )
  {
    ForwardProgressIrpLocked = FxIoQueue::GetForwardProgressIrpLocked(this, FileObject);
    if ( !ForwardProgressIrpLocked )
      break;
    Blink = IrpListHead->Blink;
    p_ListEntry = &ForwardProgressIrpLocked->Tail.Overlay.ListEntry;
    if ( Blink->Flink != IrpListHead )
      __fastfail(3u);
    p_ListEntry->Flink = IrpListHead;
    ForwardProgressIrpLocked->Tail.Overlay.ListEntry.Blink = Blink;
    Blink->Flink = p_ListEntry;
    IrpListHead->Blink = p_ListEntry;
  }
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v7);
}
