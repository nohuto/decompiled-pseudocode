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

LOGICAL __cdecl RtlTryEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // edx

  v1 = NtCurrentTeb();
  if ( _interlockedbittestandreset(&CriticalSection->LockCount, 0) )
  {
    CriticalSection->OwningThread = v1->ClientId.UniqueThread;
    CriticalSection->RecursionCount = 1;
    return 1;
  }
  else if ( CriticalSection->OwningThread == v1->ClientId.UniqueThread )
  {
    ++CriticalSection->RecursionCount;
    return 1;
  }
  else
  {
    return 0;
  }
}
