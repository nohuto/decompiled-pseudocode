/*
 * XREFs of ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C005591C
 * Callers:
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0053D50 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0053E20 (-Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0054210 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C001CA80 (memset.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C00515A8 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 */

FX_POOL **__fastcall FxLookasideList::InitObjectAlloc(FxLookasideList *this, FX_POOL_TRACKER *Alloc)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FX_POOL_TRACKER *v5; // rdi
  void *Caller; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  memset(Alloc, 0, this->m_MemoryObjectSize);
  if ( m_Globals->FxPoolTrackingOn )
  {
    v5 = Alloc + 1;
    Alloc[1].Link.Flink = &Alloc->Link;
    Alloc[1].Link.Blink = &m_Globals->Linkage;
    FxPoolInsertNonPagedAllocateTracker(
      &m_Globals->FxPoolFrameworks,
      Alloc,
      this->m_BufferSize,
      this->m_PoolTag,
      Caller);
  }
  else
  {
    v5 = Alloc;
    Alloc->Link.Flink = &Alloc->Link;
    Alloc->Link.Blink = &m_Globals->Linkage;
  }
  return &v5->Pool;
}
