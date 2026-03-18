/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00E3FBC
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00E3CAC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DC194 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02DD85C (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C00E3628 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C00E40A4 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C01031E4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02DBEB8 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

bool __fastcall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        const void *a3)
{
  int i; // eax
  int inserted; // edi
  bool v8; // zf
  char v10; // al

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  }
  inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  if ( inserted == 2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this, 0LL);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 7);
    if ( *((_DWORD *)this + 6) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
    NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedDecrement((volatile signed __int32 *)this + 7);
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_9;
  }
  v8 = inserted == 1;
  if ( inserted != 1 )
    return !v8;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 7);
  if ( *((_DWORD *)this + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
  v10 = NSInstrumentation::CPointerHashTable::Resize(this);
  _InterlockedDecrement((volatile signed __int32 *)this + 7);
  if ( v10 )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    while ( 1 )
    {
      KeLeaveCriticalRegion();
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
      if ( !*((_DWORD *)this + 7) )
        break;
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(this, 0LL);
      ExReleasePushLockSharedEx(this, 0LL);
    }
    inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
LABEL_9:
    v8 = inserted == 1;
    return !v8;
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  return 0;
}
