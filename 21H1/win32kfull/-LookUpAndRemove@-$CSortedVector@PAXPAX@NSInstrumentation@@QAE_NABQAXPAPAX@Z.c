/*
 * XREFs of ?LookUpAndRemove@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z @ 0x249F8E
 * Callers:
 *     _Win32FreePoolImpl@4 @ 0x832A0 (_Win32FreePoolImpl@4.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30EE (-Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z.c)
 * Callees:
 *     ?RemoveEntry@?$CSortedVector@PAXPAX@NSInstrumentation@@AAEXI@Z @ 0xCDFCA (-RemoveEntry@-$CSortedVector@PAXPAX@NSInstrumentation@@AAEXI@Z.c)
 *     ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0 (-AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     ?LowerBound@?$CSortedVector@PAXPAX@NSInstrumentation@@QBEIABQAX@Z @ 0x24A000 (-LowerBound@-$CSortedVector@PAXPAX@NSInstrumentation@@QBEIABQAX@Z.c)
 */

char __thiscall NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(int this, _DWORD *a2, _DWORD *a3)
{
  unsigned int v4; // edi
  char v5; // bl
  unsigned int v6; // eax
  _DWORD *v7; // edx

  NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive((NSInstrumentation::CPrioritizedWriterLock *)this);
  v4 = *(_DWORD *)(this + 24);
  v5 = 0;
  if ( v4 )
  {
    v6 = NSInstrumentation::CSortedVector<void *,void *>::LowerBound(a2);
    if ( v6 >= v4 || (v7 = (_DWORD *)(*(_DWORD *)(this + 28) + 8 * v6), *v7 != *a2) )
      v7 = 0;
    if ( v7 )
    {
      *a3 = v7[1];
      NSInstrumentation::CSortedVector<void *,void *>::RemoveEntry(
        (_DWORD *)this,
        ((int)v7 - *(_DWORD *)(this + 28)) >> 3);
      v5 = 1;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(this + 16));
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
  return v5;
}
