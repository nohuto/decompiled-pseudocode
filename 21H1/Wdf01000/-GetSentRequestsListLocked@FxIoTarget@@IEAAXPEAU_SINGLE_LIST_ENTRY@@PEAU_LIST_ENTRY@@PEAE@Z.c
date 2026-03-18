/*
 * XREFs of ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0064DD4
 * Callers:
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C00647EC (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0064E80 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0065000 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0065310 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

void __fastcall FxIoTarget::GetSentRequestsListLocked(
        FxIoTarget *this,
        _SINGLE_LIST_ENTRY *RequestListHead,
        _LIST_ENTRY *SendList,
        bool *AddedToList)
{
  _LIST_ENTRY *Blink; // rsi

  Blink = SendList->Blink;
  for ( *AddedToList = SendList->Flink != SendList; Blink != SendList; Blink = Blink->Blink )
  {
    FxObject::AddRef(
      (FxObject *)&Blink[-8].Blink,
      (void *)0x6C636E43,
      608,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    Blink[1].Blink = (_LIST_ENTRY *)RequestListHead->Next;
    RequestListHead->Next = (_SINGLE_LIST_ENTRY *)&Blink[1].Blink;
  }
}
