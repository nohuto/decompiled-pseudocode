/*
 * XREFs of ??1FxTransactionedList@@QEAA@XZ @ 0x1C002BAA0
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0020990 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C002B720 (--1FxDevice@@UEAA@XZ.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C0083258 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C0087B3C (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTransactionedList::~FxTransactionedList(FxTransactionedList *this)
{
  bool v1; // zf
  _LIST_ENTRY *p_m_ListHead; // rdi
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *v6; // rax
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_TransactionHead; // rbx
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // rax

  v1 = this->m_DeleteOnRemove == 0;
  this->__vftable = (FxTransactionedList_vtbl *)FxTransactionedList::`vftable';
  if ( !v1 )
  {
    p_m_ListHead = &this->m_ListHead;
    while ( 1 )
    {
      Flink = p_m_ListHead->Flink;
      if ( p_m_ListHead->Flink == p_m_ListHead )
        break;
      if ( Flink->Blink != p_m_ListHead || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_17:
        __fastfail(3u);
      p_m_ListHead->Flink = v5;
      v5->Blink = p_m_ListHead;
      v1 = LODWORD(Flink[2].Flink) == 3;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      if ( v1 )
      {
        v6 = Flink + 1;
        v7 = Flink[1].Flink;
        if ( v7->Blink != &Flink[1] )
          goto LABEL_17;
        Blink = Flink[1].Blink;
        if ( Blink->Flink != v6 )
          goto LABEL_17;
        Blink->Flink = v7;
        v7->Blink = Blink;
        Flink[1].Blink = Flink + 1;
        v6->Flink = v6;
        ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))Flink[2].Blink->Flink[1].Flink)(
          Flink[2].Blink,
          Flink,
          90LL,
          "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
      }
      ((void (__fastcall *)(_LIST_ENTRY *))Flink[2].Blink->Flink[3].Flink)(Flink[2].Blink);
    }
    p_m_TransactionHead = &this->m_TransactionHead;
    while ( 1 )
    {
      v10 = p_m_TransactionHead->Flink;
      if ( p_m_TransactionHead->Flink == p_m_TransactionHead )
        break;
      if ( v10->Blink != p_m_TransactionHead )
        goto LABEL_17;
      v11 = v10->Flink;
      if ( v10->Flink->Blink != v10 )
        goto LABEL_17;
      p_m_TransactionHead->Flink = v11;
      v11->Blink = p_m_TransactionHead;
      v10->Blink = v10;
      v10->Flink = v10;
      ((void (__fastcall *)(_LIST_ENTRY *))v10[1].Blink->Flink[3].Flink)(v10[1].Blink);
    }
  }
}
