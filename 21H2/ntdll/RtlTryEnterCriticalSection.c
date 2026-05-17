/*
 * XREFs of RtlTryEnterCriticalSection @ 0x1800207E0
 * Callers:
 *     RtlpFlushHeap @ 0x180007180 (RtlpFlushHeap.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlTryAcquirePebLock @ 0x18007C5C0 (RtlTryAcquirePebLock.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800CDD80 (LdrpTryAcquireLoaderLock.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2894 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTryEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  __int64 result; // rax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = UniqueThread;
    result = 1LL;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else if ( *(void **)(a1 + 16) == UniqueThread )
  {
    ++*(_DWORD *)(a1 + 12);
    return 1LL;
  }
  else
  {
    return 0LL;
  }
  return result;
}
