/*
 * XREFs of ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x180039B84
 * Callers:
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180037EB0 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x180039B18 (-FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x180093434 (--1CRenderData@@MEAA@XZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1801523A0 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::FreeBlocks(CDataStreamWriter *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rcx

  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v4 = Flink;
    Flink = Flink->Flink;
    operator delete(v4);
  }
}
