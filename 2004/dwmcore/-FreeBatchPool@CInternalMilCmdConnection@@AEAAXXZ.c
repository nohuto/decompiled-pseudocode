/*
 * XREFs of ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x180098FC8
 * Callers:
 *     ?ClearCaches@CInternalMilCmdConnection@@UEAA_NK@Z @ 0x1800C4440 (-ClearCaches@CInternalMilCmdConnection@@UEAA_NK@Z.c)
 *     ??1CInternalMilCmdConnection@@EEAA@XZ @ 0x1801507E8 (--1CInternalMilCmdConnection@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x180099034 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CInternalMilCmdConnection::FreeBatchPool(union _SLIST_HEADER *this)
{
  CDataStreamWriter *v1; // rcx
  PSLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *v3; // rdi
  CDataStreamWriter *v4; // rcx

  v2 = InterlockedFlushSList(this + 12);
  while ( v2 )
  {
    v3 = (struct _LIST_ENTRY *)&v2[-4];
    v2 = v2->Next;
    if ( v3 )
    {
      CDataStreamWriter::FreeBlocks(v1, v3);
      operator delete(v3[2].Flink);
      CDataStreamWriter::FreeBlocks(v4, v3 + 1);
      operator delete(v3);
    }
  }
}
