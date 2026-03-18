/*
 * XREFs of ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02DD1E8
 * Callers:
 *     Win32FreeToPagedLookasideListImpl @ 0x1C00E6400 (Win32FreeToPagedLookasideListImpl.c)
 *     Win32FreePoolImpl @ 0x1C00E72E0 (Win32FreePoolImpl.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012398C (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DC194 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DC234 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAX00@Z @ 0x1C02DC490 (-CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAX00@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C02DC6DC (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C01031E4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Remove@CBackTraceBucket@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02DD2E8 (-Remove@CBackTraceBucket@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z.c)
 */

bool __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        NSInstrumentation::CPrioritizedWriterLock *this,
        struct NSInstrumentation::CBackTraceStorageUnit *a2)
{
  int v4; // eax
  bool v5; // di
  unsigned __int64 v6; // rsi
  NSInstrumentation::CBackTraceBucket *v7; // rcx

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v4 = *((_DWORD *)this + 7);
  v5 = 0;
  while ( v4 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v4 = *((_DWORD *)this + 7);
  }
  v6 = *((_QWORD *)this + 6) + 16 * (*((_QWORD *)a2 + 1) % (unsigned __int64)*((unsigned int *)this + 8));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  v7 = *(NSInstrumentation::CBackTraceBucket **)(v6 + 8);
  if ( v7 )
    v5 = NSInstrumentation::CBackTraceBucket::Remove(v7, a2);
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
