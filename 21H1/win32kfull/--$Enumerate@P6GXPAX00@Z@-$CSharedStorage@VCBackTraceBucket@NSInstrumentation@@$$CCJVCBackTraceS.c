/*
 * XREFs of ??$Enumerate@P6GXPAX00@Z@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0x24A072
 * Callers:
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z @ 0x249C82 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     ?WriteBackTraceDumpBufferCallback@NSInstrumentation@@YGXPAX00@Z @ 0x24A5E1 (-WriteBackTraceDumpBufferCallback@NSInstrumentation@@YGXPAX00@Z.c)
 */

void __thiscall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Enumerate<void (__stdcall *)(void *,void *,void *)>(
        NSInstrumentation::CPrioritizedWriterLock *this,
        int a2,
        void *a3)
{
  volatile signed __int32 *v4; // edi
  unsigned int i; // ebx
  int v6; // edi
  int *v7; // edi
  void *v8; // [esp+0h] [ebp-10h]
  int v9; // [esp+Ch] [ebp-4h]

  v4 = (volatile signed __int32 *)((char *)this + 12);
  while ( 1 )
  {
    _InterlockedIncrement(v4);
    if ( !*((_DWORD *)this + 4) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0);
    ExReleasePushLockSharedEx(this, 0);
    KeLeaveCriticalRegion();
  }
  for ( i = 0; i < *((_DWORD *)this + 5); ++i )
  {
    v6 = *((_DWORD *)this + 8) + 8 * i;
    v9 = v6;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v6, 0);
    v7 = *(int **)(v6 + 4);
    if ( v7 )
    {
      while ( 1 )
      {
        v7 = (int *)*v7;
        if ( !v7 )
          break;
        NSInstrumentation::WriteBackTraceDumpBufferCallback((NSInstrumentation *)v7, v7 + 2, a3, v8);
      }
    }
    ExReleasePushLockSharedEx(v9, 0);
    KeLeaveCriticalRegion();
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
}
