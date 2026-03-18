/*
 * XREFs of ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A2AF
 * Callers:
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QAEPAXPAVCBackTrace@2@PAI@Z @ 0x24A130 (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QAEPAXPAVCBackTrace@2@PAI@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     ?ComputeHash@CBackTrace@NSInstrumentation@@QBEKXZ @ 0x24A15D (-ComputeHash@CBackTrace@NSInstrumentation@@QBEKXZ.c)
 *     ?Insert@CBackTraceBucket@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@KQBVCBackTrace@2@@Z @ 0x24A37A (-Insert@CBackTraceBucket@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@KQBVCBackTrace@2@@Z.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__thiscall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
        NSInstrumentation::CPrioritizedWriterLock *this,
        NSInstrumentation::CBackTrace *a2)
{
  volatile signed __int32 *v3; // edi
  int v4; // ebx
  NSInstrumentation::CBackTraceBucket *PoolWithTag; // eax
  struct NSInstrumentation::CBackTraceStorageUnit *v6; // edi
  unsigned int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

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
  v8 = NSInstrumentation::CBackTrace::ComputeHash(a2);
  v4 = *((_DWORD *)this + 8) + 8 * (v8 % *((_DWORD *)this + 5));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0);
  PoolWithTag = *(NSInstrumentation::CBackTraceBucket **)(v4 + 4);
  v6 = 0;
  if ( PoolWithTag )
    goto LABEL_7;
  v9 = *((_DWORD *)this + 7);
  PoolWithTag = (NSInstrumentation::CBackTraceBucket *)ExAllocatePoolWithTag(PagedPoolSession, 8u, 0x31497355u);
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = 0;
    *((_DWORD *)PoolWithTag + 1) = v9;
    ++*((_DWORD *)this + 6);
    *(_DWORD *)(v4 + 4) = PoolWithTag;
LABEL_7:
    v6 = NSInstrumentation::CBackTraceBucket::Insert(PoolWithTag, v8, a2);
  }
  ExReleasePushLockExclusiveEx(v4, 0);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v6;
}
