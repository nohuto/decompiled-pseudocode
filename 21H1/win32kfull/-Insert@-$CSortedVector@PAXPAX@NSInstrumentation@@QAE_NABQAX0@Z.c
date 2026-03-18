/*
 * XREFs of ?Insert@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z @ 0x249EE0
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 * Callees:
 *     ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0 (-AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     ?ReAllocate@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@AAE_NI@Z @ 0x1FCAF8 (-ReAllocate@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@AAE_NI@Z.c)
 *     ?LowerBound@?$CSortedVector@PAXPAX@NSInstrumentation@@QBEIABQAX@Z @ 0x24A000 (-LowerBound@-$CSortedVector@PAXPAX@NSInstrumentation@@QBEIABQAX@Z.c)
 */

char __thiscall NSInstrumentation::CSortedVector<void *,void *>::Insert(int this, _DWORD *a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  int v5; // edi
  int v6; // edx
  int v7; // eax
  char v8; // bl
  int v9; // ecx
  unsigned int v11; // [esp+Ch] [ebp-4h]

  NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive((NSInstrumentation::CPrioritizedWriterLock *)this);
  v4 = NSInstrumentation::CSortedVector<void *,void *>::LowerBound(a2);
  v11 = *(_DWORD *)(this + 24);
  v5 = 8 * v4;
  if ( v4 < v11 )
  {
    v6 = *(_DWORD *)(this + 28);
    if ( *(_DWORD *)(v6 + 8 * v4) == *a2 )
    {
      *(_DWORD *)(v6 + v5 + 4) = *a3;
LABEL_8:
      v8 = 1;
      goto LABEL_9;
    }
  }
  v7 = *(_DWORD *)(this + 20);
  if ( v11 != v7 || NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::ReAllocate(this, 2 * v7) )
  {
    memmove(
      (void *)(v5 + *(_DWORD *)(this + 28) + 8),
      (const void *)(v5 + *(_DWORD *)(this + 28)),
      8 * (*(_DWORD *)(this + 24) - v4));
    v9 = *(_DWORD *)(this + 28);
    *(_DWORD *)(v9 + 8 * v4) = *a2;
    *(_DWORD *)(v9 + v5 + 4) = *a3;
    ++*(_DWORD *)(this + 24);
    goto LABEL_8;
  }
  v8 = 0;
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)(this + 16));
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
  return v8;
}
