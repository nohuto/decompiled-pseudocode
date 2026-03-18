/*
 * XREFs of ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0014B44
 * Callers:
 *     imp_WdfCollectionRemoveItem @ 0x1C0014890 (imp_WdfCollectionRemoveItem.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0021C84 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     imp_WdfCmResourceListGetDescriptor @ 0x1C00310F0 (imp_WdfCmResourceListGetDescriptor.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x1C0031F80 (imp_WdfIoResourceListGetDescriptor.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0034A84 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C0034C30 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1C0034D60 (imp_WdfIoResourceListUpdateDescriptor.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY **__fastcall FxCollectionInternal::FindEntry(FxCollectionInternal *this, unsigned int Index)
{
  int v2; // r8d
  _LIST_ENTRY *p_m_ListHead; // rcx
  _LIST_ENTRY *Flink; // rax

  if ( Index < this->m_Count )
  {
    v2 = 0;
    p_m_ListHead = &this->m_ListHead;
    Flink = p_m_ListHead->Flink;
    while ( Flink != p_m_ListHead )
    {
      if ( v2 == Index )
        return &Flink[-1].Blink;
      Flink = Flink->Flink;
      ++v2;
    }
  }
  return 0LL;
}
