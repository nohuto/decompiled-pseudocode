/*
 * XREFs of ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18004433C
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x180043E80 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800442BC (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 * Callees:
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800443E8 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::Reset(struct _LIST_ENTRY *this)
{
  CDataStreamWriter::FreeBlocks((CDataStreamWriter *)this, this);
  operator delete(this[2].Flink);
  this->Blink = this;
  this[2].Flink = 0LL;
  this[2].Blink = 0LL;
  this[3].Flink = 0LL;
  LODWORD(this[3].Blink) = 0;
  this->Flink = this;
}
