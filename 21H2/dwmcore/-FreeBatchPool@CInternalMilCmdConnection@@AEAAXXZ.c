/*
 * XREFs of ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x180044614
 * Callers:
 *     ?ClearBatchCaches@CInternalMilCmdConnection@@UEAA_NK@Z @ 0x1800DD500 (-ClearBatchCaches@CInternalMilCmdConnection@@UEAA_NK@Z.c)
 *     ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x180193A30 (--1CInternalMilCmdConnection@@UEAA@XZ.c)
 * Callees:
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180044698 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

void __fastcall CInternalMilCmdConnection::FreeBatchPool(union _SLIST_HEADER *this)
{
  unsigned int v1; // edx
  PSLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *v3; // rcx

  v2 = InterlockedFlushSList(this + 10);
  while ( v2 )
  {
    v3 = (struct _LIST_ENTRY *)&v2[-4];
    v2 = v2->Next;
    if ( v3 )
      CCommandBatch::`scalar deleting destructor'(v3, v1);
  }
}
