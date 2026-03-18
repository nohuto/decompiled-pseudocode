/*
 * XREFs of CcIncrementWriteBehindPriority @ 0x140376BFC
 * Callers:
 *     CcLazyWriteScan @ 0x140275670 (CcLazyWriteScan.c)
 *     CcLazyWriteScanVolume @ 0x140538E4C (CcLazyWriteScanVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall CcIncrementWriteBehindPriority(__int64 a1)
{
  __int64 v1; // r14
  _QWORD *v2; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned __int64 *v12; // rdx
  _QWORD *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 528);
  v2 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = *(_DWORD *)(a1 + 552);
  if ( v4 == -1 )
    v4 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v5 = v4 % CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter == 1 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 592) + 8 * v5 + 64);
  else
    v6 = *(_QWORD *)(v1 + 8 * v5 + 80);
  v7 = *(_QWORD *)(a1 + 496);
  v8 = *(_QWORD *)(v6 + 16);
  if ( v7 && (v7 & 1) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 768);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v1 + 768));
    v9 = *(_QWORD *)(a1 + 496);
    if ( !v9 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return;
    }
    *(_QWORD *)(a1 + 496) = v9 | 1;
    v10 = *(_QWORD *)v9;
    v11 = *(_QWORD **)(v9 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) == v9 && *v11 == v9 )
    {
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)v9 = 0LL;
      v12 = *(unsigned __int64 **)(v6 + 80);
      if ( *v12 == v6 + 72 )
      {
        *(_QWORD *)v9 = v6 + 72;
        *(_QWORD *)(v9 + 8) = v12;
        *v12 = v9;
        *(_QWORD *)(v6 + 80) = v9;
        if ( *(_BYTE *)(v6 + 196)
          || (v13 = (_QWORD *)(v6 + 56), v14 = *(__int64 **)(v6 + 56), v14 == (__int64 *)(v6 + 56)) )
        {
LABEL_23:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v2 )
          {
            *v2 = 0LL;
            ExQueueWorkItemToPartition((ULONG_PTR)v2, 0, *(_DWORD *)(v6 + 24), *(_QWORD *)(v1 + 8));
          }
          return;
        }
        v2 = *(_QWORD **)(v6 + 56);
        v15 = *v14;
        if ( (_QWORD *)v2[1] == v13 && *(_QWORD **)(v15 + 8) == v2 )
        {
          *v13 = v15;
          *(_QWORD *)(v15 + 8) = v13;
          ++*(_DWORD *)(v6 + 48);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v1 + 1232)) <= 1 )
            __fastfail(0xEu);
          if ( v8 && _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8)) <= 1 )
            __fastfail(0xEu);
          goto LABEL_23;
        }
      }
    }
    __fastfail(3u);
  }
}
