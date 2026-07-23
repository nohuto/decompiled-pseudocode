/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x180054870
 * Callers:
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlWakeConditionVariable @ 0x180054A60 (RtlWakeConditionVariable.c)
 *     ZwDuplicateObject @ 0x18009D590 (ZwDuplicateObject.c)
 */

void __fastcall TppPoolUpdateTrimmedWorker(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rsi
  _QWORD *Heap; // rbx
  _QWORD *v4; // rcx
  unsigned int v5; // ebx
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_RTL_SRWLOCK *)(a1 + 72);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    goto LABEL_2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x18uLL);
  if ( !Heap )
    goto LABEL_2;
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)0xFFFFFFFFFFFFFFFELL,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
LABEL_2:
    RtlReleaseSRWLockExclusive(v1);
    return;
  }
  Heap[2] = TargetHandle;
  v4 = *(_QWORD **)(a1 + 464);
  if ( *v4 != a1 + 456 )
    __fastfail(3u);
  Heap[1] = v4;
  *Heap = a1 + 456;
  *v4 = Heap;
  *(_QWORD *)(a1 + 464) = Heap;
  v5 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v5;
  RtlReleaseSRWLockExclusive(v1);
  if ( ((v5 ^ (v5 >> 11)) & 0xFFE) == 0 )
    RtlWakeConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 448));
}
