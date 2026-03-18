/*
 * XREFs of ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180044658
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800440DC (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x180044574 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 * Callees:
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800446D4 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::Reset(struct _LIST_ENTRY *this)
{
  CDataStreamWriter::FreeBlocks((CDataStreamWriter *)this, this);
  DefaultHeap::Free(this[2].Flink);
  this->Blink = this;
  this[2].Flink = 0LL;
  this[2].Blink = 0LL;
  this[3].Flink = 0LL;
  LODWORD(this[3].Blink) = 0;
  this->Flink = this;
}
