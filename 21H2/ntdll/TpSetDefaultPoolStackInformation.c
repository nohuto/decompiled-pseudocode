/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x180070A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     TpSetPoolStackInformation @ 0x180070B60 (TpSetPoolStackInformation.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007110C (TpPoolReferenceExistingGlobalPool.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(SIZE_T *a1)
{
  PTP_POOL_STACK_INFORMATION Heap; // rax
  SIZE_T v3; // rcx
  _TP_POOL *v4; // rax
  NTSTATUS v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+40h] [rbp+8h]

  v7 = 0;
  v6 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !TppPoolpGlobalPoolStackSize
    || TppPoolpGlobalPoolStackSize->StackCommit < a1[1]
    || TppPoolpGlobalPoolStackSize->StackReserve < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    Heap = TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (PTP_POOL_STACK_INFORMATION)RtlAllocateHeap(
                                               NtCurrentPeb()->ProcessHeap,
                                               (TppHeapTag + 786432) | 8,
                                               0x10uLL),
          (TppPoolpGlobalPoolStackSize = Heap) != 0LL) )
    {
      v3 = a1[1];
      if ( Heap->StackCommit < v3 )
      {
        Heap->StackCommit = v3;
        v7 = 1;
      }
      if ( Heap->StackReserve < *a1 )
      {
        Heap->StackReserve = *a1;
        v7 = 1;
      }
    }
    else
    {
      v6 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v7 && v6 >= 0 )
  {
    v4 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool();
    if ( v4 )
    {
      v6 = TpSetPoolStackInformation(v4, TppPoolpGlobalPoolStackSize);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v6;
}
