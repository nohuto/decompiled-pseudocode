/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180044698
 * Callers:
 *     ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x180044614 (-FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180070928 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1801A9AF0 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800446D4 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

struct _LIST_ENTRY *__fastcall CCommandBatch::`scalar deleting destructor'(struct _LIST_ENTRY *this)
{
  CDataStreamWriter *v2; // rcx

  CDataStreamWriter::FreeBlocks((CDataStreamWriter *)this, this);
  DefaultHeap::Free(this[2].Flink);
  CDataStreamWriter::FreeBlocks(v2, this + 1);
  DefaultHeap::Free(this);
  return this;
}
