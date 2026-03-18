/*
 * XREFs of ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0069688
 * Callers:
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0002374 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007B50 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0038D36 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolInsertNonPagedAllocateTracker(
        FX_POOL *Pool,
        FX_POOL_TRACKER *Tracker,
        unsigned __int64 Size,
        unsigned int Tag,
        void *Caller)
{
  KIRQL v8; // r9
  _LIST_ENTRY *Blink; // rdx
  unsigned __int64 NonPagedBytes; // rdx
  unsigned int v11; // eax

  Tracker->PoolType = ExDefaultNonPagedPoolType;
  Tracker->Pool = Pool;
  Tracker->CallersAddress = Caller;
  Tracker->Tag = Tag;
  Tracker->Size = Size;
  v8 = KeAcquireSpinLockRaiseToDpc(&Pool->NonPagedLock.m_Lock);
  Blink = Pool->NonPagedHead.Blink;
  if ( Blink->Flink != &Pool->NonPagedHead )
    __fastfail(3u);
  Tracker->Link.Flink = &Pool->NonPagedHead;
  Tracker->Link.Blink = Blink;
  Blink->Flink = &Tracker->Link;
  Pool->NonPagedHead.Blink = &Tracker->Link;
  Pool->NonPagedBytes += Size;
  NonPagedBytes = Pool->NonPagedBytes;
  v11 = Pool->NonPagedAllocations + 1;
  Pool->NonPagedAllocations = v11;
  if ( NonPagedBytes > Pool->PeakNonPagedBytes )
    Pool->PeakNonPagedBytes = NonPagedBytes;
  if ( v11 > Pool->PeakNonPagedAllocations )
    Pool->PeakNonPagedAllocations = v11;
  KeReleaseSpinLock(&Pool->NonPagedLock.m_Lock, v8);
}
