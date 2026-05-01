/*
 * XREFs of RmpClientWnfSubscriptionWorker @ 0x180007F60
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x18000AB24 (memcpy_0.c)
 */

__int64 __fastcall RmpClientWnfSubscriptionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Src,
        size_t Size)
{
  _QWORD *Heap; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax

  if ( !Src )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)&RmpClientWnfMessagesReceived);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(Size + 20));
  v8 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 4) = Size;
    memcpy_0((char *)Heap + 20, Src, (unsigned int)Size);
    v9 = a4 + 16;
    RtlAcquireSRWLockExclusive(a4 + 32);
    if ( !*(_QWORD *)(a4 + 16) || !*(_QWORD *)(a4 + 24) )
      __int2c();
    v10 = *(_QWORD **)(a4 + 24);
    if ( *v10 != v9 )
      __fastfail(3u);
    *v8 = v9;
    v8[1] = v10;
    *v10 = v8;
    *(_QWORD *)(a4 + 24) = v8;
    v11 = *(_DWORD *)(a4 + 64);
    if ( (v11 & 1) == 0 )
    {
      v12 = *(_QWORD *)(a4 + 56);
      *(_DWORD *)(a4 + 64) = v11 | 1;
      TpPostWork(v12);
    }
    RtlReleaseSRWLockExclusive(a4 + 32);
    return 0LL;
  }
  result = 3221225495LL;
  _InterlockedIncrement((volatile signed __int32 *)&RmpClientWnfMessagesDropped);
  return result;
}
