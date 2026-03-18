/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x180098A6C
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x180098800 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x180098F08 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x180099034 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A624 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
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
  CRenderData::DestroyRenderData((CRenderData *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(&this[8]);
  CDataStreamWriter::FreeBlocks(v4, this + 4);
  operator delete(this[6].Flink);
  CDataStreamWriter::FreeBlocks(v5, this + 5);
  CResource::~CResource((CResource *)this);
}
