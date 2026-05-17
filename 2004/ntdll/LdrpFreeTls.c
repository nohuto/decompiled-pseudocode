/*
 * XREFs of LdrpFreeTls @ 0x1800703B8
 * Callers:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpFreeTls(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct _TEB *v4; // rbx
  void *ProcessHeap; // rbp
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  void **v8; // rdi
  __int64 v9; // rsi

  v4 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v4->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&LdrpActiveThreadCount);
    *p_ThreadLocalStoragePointer = 0LL;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( ThreadLocalStoragePointer && ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
  {
    v8 = ThreadLocalStoragePointer - 2;
    if ( *((_DWORD *)ThreadLocalStoragePointer - 4) )
    {
      v9 = *(unsigned int *)v8;
      do
      {
        if ( *ThreadLocalStoragePointer )
          RtlFreeHeap((__int64)ProcessHeap, 0, *((_QWORD *)*ThreadLocalStoragePointer - 1));
        ++ThreadLocalStoragePointer;
        --v9;
      }
      while ( v9 );
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v8);
  }
  return LdrpCleanupThreadTlsData();
}
