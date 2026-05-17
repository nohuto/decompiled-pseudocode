/*
 * XREFs of _RtlTryEnterCriticalSection@4 @ 0x4B2E0960
 * Callers:
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlTryAcquirePebLock@0 @ 0x4B2E0940 (_RtlTryAcquirePebLock@0.c)
 *     _LdrpTryAcquireLoaderLock@0 @ 0x4B32E68D (_LdrpTryAcquireLoaderLock@0.c)
 *     _RtlLockHeapManagerForCloning@0 @ 0x4B356BD9 (_RtlLockHeapManagerForCloning@0.c)
 *     _RtlpFlushHeap@4 @ 0x4B35D672 (_RtlpFlushHeap@4.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlTryEnterCriticalSection(int a1)
{
  struct _TEB *v1; // edx

  v1 = NtCurrentTeb();
  if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4), 0) )
  {
    *(_DWORD *)(a1 + 12) = v1->ClientId.UniqueThread;
    *(_DWORD *)(a1 + 8) = 1;
    return 1;
  }
  else if ( *(void **)(a1 + 12) == v1->ClientId.UniqueThread )
  {
    ++*(_DWORD *)(a1 + 8);
    return 1;
  }
  else
  {
    return 0;
  }
}
