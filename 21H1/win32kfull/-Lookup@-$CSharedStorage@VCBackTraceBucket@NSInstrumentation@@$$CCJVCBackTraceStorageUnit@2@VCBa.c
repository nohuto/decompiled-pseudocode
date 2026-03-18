/*
 * XREFs of ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A3E8
 * Callers:
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QAEPAXPAVCBackTrace@2@PAI@Z @ 0x24A130 (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QAEPAXPAVCBackTrace@2@PAI@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     ?ComputeHash@CBackTrace@NSInstrumentation@@QBEKXZ @ 0x24A15D (-ComputeHash@CBackTrace@NSInstrumentation@@QBEKXZ.c)
 *     ?Lookup@CBackTraceBucket@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@K@Z @ 0x24A48A (-Lookup@CBackTraceBucket@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@K@Z.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__thiscall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
        NSInstrumentation::CPrioritizedWriterLock *this,
        NSInstrumentation::CBackTrace *Buf2)
{
  volatile signed __int32 *v3; // edi
  int v4; // edi
  NSInstrumentation::CBackTraceBucket *v5; // ecx
  struct NSInstrumentation::CBackTraceStorageUnit *v6; // edi
  int v8; // [esp+8h] [ebp-8h]
  unsigned int v9; // [esp+Ch] [ebp-4h]

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
  v9 = NSInstrumentation::CBackTrace::ComputeHash(Buf2);
  v4 = *((_DWORD *)this + 8) + 8 * (v9 % *((_DWORD *)this + 5));
  v8 = v4;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0);
  v5 = *(NSInstrumentation::CBackTraceBucket **)(v4 + 4);
  if ( v5 )
    v6 = NSInstrumentation::CBackTraceBucket::Lookup(v5, Buf2, v9);
  else
    v6 = 0;
  ExReleasePushLockSharedEx(v8, 0);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v6;
}
