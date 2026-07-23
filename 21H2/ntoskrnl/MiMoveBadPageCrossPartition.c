/*
 * XREFs of MiMoveBadPageCrossPartition @ 0x14054F22C
 * Callers:
 *     MiMoveLargeFreePage @ 0x140556E00 (MiMoveLargeFreePage.c)
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 */

__int64 __fastcall MiMoveBadPageCrossPartition(__int64 a1, __int64 a2, ULONG_PTR *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v5 = MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *((unsigned int *)v5 + 2);
  LockHandle.LockQueue.Next = 0LL;
  v8 = 4544 * v7;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(4544 * v7 + v6 + 4328);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  --*(_QWORD *)(v8 + v6 + 4352);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = a3[2];
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + v9 + 4328);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  v10 = 1LL;
  ++*(_QWORD *)(v8 + v9 + 4352);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiAcquireNonPagedResources(a3, 1uLL, 0LL, 1u);
  MiReturnCommit(a2, 1LL);
  result = (__int64)&MiSystemPartition;
  if ( (ULONG_PTR *)a2 != &MiSystemPartition )
    goto LABEL_11;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_11;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_7:
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v10 = (int)result + 1LL;
      }
    }
    if ( !v10 )
      return result;
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 7168), v10);
    return result;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + 1,
                             CachedResidentAvailable);
    v14 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v14 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = (int)result + 1LL;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        continue;
    }
    goto LABEL_7;
  }
}
