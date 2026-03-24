/*
 * XREFs of ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18003771C
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x18003721C (--1CRenderData@@MEAA@XZ.c)
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800372E0 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18003779C (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CRenderData::DestroyRenderData(struct _LIST_ENTRY *this)
{
  __int64 v2; // rsi
  __int64 Blink_low; // rbp
  struct _LIST_ENTRY *Flink; // rbx

  if ( LODWORD(this[9].Blink) )
  {
    v2 = 0LL;
    Blink_low = LODWORD(this[9].Blink);
    do
    {
      Flink = this[8].Flink;
      CResource::UnRegisterNotifierInternal((CResource *)this, *(struct CResource **)((char *)&Flink->Flink + v2));
      *(struct _LIST_ENTRY **)((char *)&Flink->Flink + v2) = 0LL;
      v2 += 8LL;
      --Blink_low;
    }
    while ( Blink_low );
  }
  LODWORD(this[9].Blink) = 0;
  CDataStreamWriter::Reset(this + 4);
  BYTE1(this[16].Blink) = 1;
}
