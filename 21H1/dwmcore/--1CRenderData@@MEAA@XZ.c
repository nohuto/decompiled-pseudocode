/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x180093434
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x1800933F0 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x180036E98 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x180039B84 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180097A38 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CRenderData::~CRenderData(struct _LIST_ENTRY *this)
{
  __int64 Flink_high; // rdx
  __int64 Blink_low; // rcx
  CDataStreamWriter *v4; // rcx
  CDataStreamWriter *v5; // rcx

  this->Flink = (struct _LIST_ENTRY *)&CRenderData::`vftable';
  *(struct _LIST_ENTRY **)((char *)&this[3].Blink + SHIDWORD(this[3].Blink->Flink)) = (struct _LIST_ENTRY *)&CSystemMemoryBitmap::`vftable'{for `IUnknown'};
  *(struct _LIST_ENTRY **)((char *)&this[3].Blink + SLODWORD(this[3].Blink->Blink)) = (struct _LIST_ENTRY *)&CRenderData::`vftable'{for `IContent'};
  Flink_high = SHIDWORD(this[3].Blink->Flink);
  *(_DWORD *)((char *)&this[3].Flink + Flink_high + 4) = Flink_high - 224;
  Blink_low = SLODWORD(this[3].Blink->Blink);
  *(_DWORD *)((char *)&this[3].Flink + Blink_low + 4) = Blink_low - 240;
  CRenderData::DestroyRenderData(this);
  DynArrayImpl<1>::~DynArrayImpl<1>(&this[8]);
  CDataStreamWriter::FreeBlocks(v4, this + 4);
  operator delete(this[6].Flink);
  CDataStreamWriter::FreeBlocks(v5, this + 5);
  CResource::~CResource((CResource *)this);
}
