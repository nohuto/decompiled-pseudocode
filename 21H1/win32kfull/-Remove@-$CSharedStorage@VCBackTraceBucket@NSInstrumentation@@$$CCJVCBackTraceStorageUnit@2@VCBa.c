/*
 * XREFs of ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4
 * Callers:
 *     _Win32FreePoolImpl@4 @ 0x832A0 (_Win32FreePoolImpl@4.c)
 *     _Win32FreeToPagedLookasideListImpl@8 @ 0x92054 (_Win32FreeToPagedLookasideListImpl@8.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30EE (-Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 *     ?CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CGXPAX00@Z @ 0x249C07 (-CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CGXPAX00@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX0@Z @ 0x249D9A (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX0@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     ?Remove@CBackTraceBucket@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A558 (-Remove@CBackTraceBucket@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z.c)
 */

bool __thiscall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        NSInstrumentation::CPrioritizedWriterLock *this,
        struct NSInstrumentation::CBackTraceStorageUnit *a2)
{
  volatile signed __int32 *v3; // edi
  int v4; // edi
  NSInstrumentation::CBackTraceBucket *v5; // ecx
  bool v6; // bl

  v3 = (volatile signed __int32 *)((char *)this + 12);
  while ( 1 )
  {
    _InterlockedIncrement(v3);
    if ( !*((_DWORD *)this + 4) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0);
    ExReleasePushLockSharedEx(this, 0);
    KeLeaveCriticalRegion();
  }
  v4 = *((_DWORD *)this + 8) + 8 * (*((_DWORD *)a2 + 1) % *((_DWORD *)this + 5));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0);
  v5 = *(NSInstrumentation::CBackTraceBucket **)(v4 + 4);
  if ( v5 )
    v6 = NSInstrumentation::CBackTraceBucket::Remove(v5, a2);
  else
    v6 = 0;
  ExReleasePushLockExclusiveEx(v4, 0);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v6;
}
