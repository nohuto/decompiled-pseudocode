/*
 * XREFs of ?Enumerate@?$CSortedVector@PAXPAX@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0x249D10
 * Callers:
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z @ 0x249C82 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z.c)
 *     ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QAEXXZ @ 0x249D67 (-FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QAEXXZ.c)
 * Callees:
 *     ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0 (-AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 */

void __thiscall NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
        int this,
        void (__stdcall *a2)(int, _DWORD, int),
        int a3)
{
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx

  NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive((NSInstrumentation::CPrioritizedWriterLock *)this);
  if ( *(_DWORD *)(this + 24) )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(this + 28);
      v7 = *(_DWORD *)(v6 + v5);
      if ( v7 )
      {
        a2(v7, *(_DWORD *)(v6 + v5 + 4), a3);
        ++v4;
      }
      v5 += 8;
    }
    while ( v4 < *(_DWORD *)(this + 24) );
  }
  _InterlockedDecrement((volatile signed __int32 *)(this + 16));
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
}
