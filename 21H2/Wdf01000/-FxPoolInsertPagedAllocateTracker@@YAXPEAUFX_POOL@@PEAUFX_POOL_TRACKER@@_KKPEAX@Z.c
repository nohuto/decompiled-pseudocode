/*
 * XREFs of ?FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0054CE0
 * Callers:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C0054E20 (-InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolInsertPagedAllocateTracker(
        FX_POOL *Pool,
        FX_POOL_TRACKER *Tracker,
        unsigned __int64 Size,
        unsigned int Tag,
        void *Caller)
{
  _LIST_ENTRY *Blink; // rcx
  unsigned __int64 PagedBytes; // rdx
  unsigned int v10; // eax

  Tracker->Pool = Pool;
  Tracker->CallersAddress = Caller;
  Tracker->Tag = Tag;
  Tracker->PoolType = PagedPool;
  Tracker->Size = Size;
  ExAcquireFastMutex(&Pool->PagedLock.m_Lock);
  Blink = Pool->PagedHead.Blink;
  if ( Blink->Flink != &Pool->PagedHead )
    __fastfail(3u);
  Tracker->Link.Flink = &Pool->PagedHead;
  Tracker->Link.Blink = Blink;
  Blink->Flink = &Tracker->Link;
  Pool->PagedHead.Blink = &Tracker->Link;
  Pool->PagedBytes += Size;
  PagedBytes = Pool->PagedBytes;
  v10 = Pool->PagedAllocations + 1;
  Pool->PagedAllocations = v10;
  if ( PagedBytes > Pool->PeakPagedBytes )
    Pool->PeakPagedBytes = PagedBytes;
  if ( v10 > Pool->PeakPagedAllocations )
    Pool->PeakPagedAllocations = v10;
  ExReleaseFastMutex(&Pool->PagedLock.m_Lock);
}
