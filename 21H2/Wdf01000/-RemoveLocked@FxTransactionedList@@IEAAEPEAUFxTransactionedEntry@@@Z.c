/*
 * XREFs of ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C002BC38
 * Callers:
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C002BBB4 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007236C (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxTransactionedList::RemoveLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry,
        __int64 a3)
{
  char v3; // bl
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *v6; // rdx
  _LIST_ENTRY *p_m_TransactionLink; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v11; // r8
  _LIST_ENTRY *v12; // rdx

  v3 = 0;
  if ( Entry->m_Transaction == FxTransactionActionAdd )
  {
    p_m_TransactionLink = &Entry->m_TransactionLink;
    v3 = 1;
    Flink = Entry->m_TransactionLink.Flink;
    if ( Flink->Blink == p_m_TransactionLink )
    {
      Blink = p_m_TransactionLink->Blink;
      if ( Blink->Flink == p_m_TransactionLink )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        p_m_TransactionLink->Blink = p_m_TransactionLink;
        p_m_TransactionLink->Flink = p_m_TransactionLink;
        Entry->m_Transaction = FxTransactionActionNothing;
        return v3;
      }
    }
LABEL_7:
    __fastfail(3u);
  }
  if ( this->m_ListLockedRecursionCount )
  {
    Entry->m_Transaction = FxTransactionActionRemove;
    v11 = this->m_TransactionHead.Blink;
    v12 = &Entry->m_TransactionLink;
    if ( v11->Flink == &this->m_TransactionHead )
    {
      v12->Blink = v11;
      v12->Flink = &this->m_TransactionHead;
      v11->Flink = v12;
      this->m_TransactionHead.Blink = v12;
      FxObject::AddRef(
        Entry->m_TransactionedObject,
        Entry,
        423,
        "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
      return v3;
    }
    goto LABEL_7;
  }
  v5 = Entry->m_ListLink.Flink;
  if ( (FxTransactionedEntry *)Entry->m_ListLink.Flink->Blink != Entry )
    goto LABEL_7;
  v6 = Entry->m_ListLink.Blink;
  if ( (FxTransactionedEntry *)v6->Flink != Entry )
    goto LABEL_7;
  v6->Flink = v5;
  v5->Blink = v6;
  Entry->m_ListLink.Blink = &Entry->m_ListLink;
  Entry->m_ListLink.Flink = &Entry->m_ListLink;
  ((void (__fastcall *)(FxTransactionedList *, FxTransactionedEntry *, __int64, __int64))this->EntryRemoved)(
    this,
    Entry,
    a3,
    3LL);
  return 1;
}
