/*
 * XREFs of ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800443E8
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x180043DBC (--1CRenderData@@MEAA@XZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18004433C (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x18004437C (-FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18014E920 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
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
