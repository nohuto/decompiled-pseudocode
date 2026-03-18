/*
 * XREFs of ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0013580
 * Callers:
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B404 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00135BC (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C00135E0 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 */

void __fastcall FxIoQueue::PurgeForwardProgressIrps(FxIoQueue *this, _FILE_OBJECT *FileObject)
{
  FxIoQueue *v2; // rcx
  _LIST_ENTRY cleanupList; // [rsp+20h] [rbp-18h] BYREF

  cleanupList.Blink = &cleanupList;
  cleanupList.Flink = &cleanupList;
  FxIoQueue::GetForwardProgressIrps(this, &cleanupList, FileObject);
  FxIoQueue::CancelIrps(v2, &cleanupList);
}
