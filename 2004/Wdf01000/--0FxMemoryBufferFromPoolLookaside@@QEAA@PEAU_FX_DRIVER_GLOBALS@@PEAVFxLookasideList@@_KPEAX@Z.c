/*
 * XREFs of ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C0056054
 * Callers:
 *     ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C00546F0 (-Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0054AE0 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x1C0055F7C (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 */

void __fastcall FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(
        FxMemoryBufferFromPoolLookaside *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxLookasideList *Lookaside,
        unsigned __int64 BufferSize,
        void *Buffer)
{
  FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(this, FxDriverGlobals, Lookaside, BufferSize);
  this->FxMemoryBufferFromLookaside::FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromPoolLookaside_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `FxObject'};
  this->FxMemoryBufferFromLookaside::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `IFxMemory'};
  this->m_Pool = Buffer;
}
