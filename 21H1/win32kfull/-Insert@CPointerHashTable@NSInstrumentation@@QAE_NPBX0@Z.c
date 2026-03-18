/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z @ 0x8D01C
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4 (-ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SG_NPAX0@Z @ 0x24A90E (-UpdateKernelmodeAllocation@UmfdAllocation@@SG_NPAX0@Z.c)
 * Callees:
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AAE?AW4EInsertResult@12@PBX0@Z @ 0x8D08E (-InsertInternal@CPointerHashTable@NSInstrumentation@@AAE-AW4EInsertResult@12@PBX0@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0 (-AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AAE_NXZ @ 0xED024 (-Resize@CPointerHashTable@NSInstrumentation@@AAE_NXZ.c)
 */

bool __thiscall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        const void *a3)
{
  volatile signed __int32 *v4; // edi
  volatile signed __int32 *v5; // ebx
  int inserted; // edi
  bool v7; // zf
  bool v9; // al

  v4 = (volatile signed __int32 *)((char *)this + 12);
  _InterlockedIncrement((volatile signed __int32 *)this + 3);
  v5 = (volatile signed __int32 *)((char *)this + 16);
  while ( *v5 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0);
    ExReleasePushLockSharedEx(this, 0);
    KeLeaveCriticalRegion();
    _InterlockedIncrement(v4);
  }
  inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  if ( inserted == 2 )
  {
    NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive(this);
    NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedDecrement(v5);
    ExReleasePushLockExclusiveEx(this, 0);
    KeLeaveCriticalRegion();
LABEL_7:
    v7 = inserted == 1;
    return !v7;
  }
  v7 = inserted == 1;
  if ( inserted != 1 )
    return !v7;
  NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive(this);
  v9 = NSInstrumentation::CPointerHashTable::Resize(this);
  _InterlockedDecrement(v5);
  if ( v9 )
  {
    ExReleasePushLockExclusiveEx(this, 0);
    while ( 1 )
    {
      KeLeaveCriticalRegion();
      _InterlockedIncrement((volatile signed __int32 *)this + 3);
      if ( !*v5 )
        break;
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(this, 0);
      ExReleasePushLockSharedEx(this, 0);
    }
    inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    goto LABEL_7;
  }
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
  return 0;
}
