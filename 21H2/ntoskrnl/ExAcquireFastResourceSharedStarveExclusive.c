/*
 * XREFs of ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14063CD9C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExpWaitForResource @ 0x140231990 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x1402464C0 (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x1402597A8 (ExpPrepareToWaitForResourceShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14039C474 (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireFastResourceSharedStarveExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  unsigned __int64 v4; // r14
  unsigned __int8 v7; // cl
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v10; // r8
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // bp
  unsigned __int64 *SparePtr; // rax
  ULONG_PTR *v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v31; // r8
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v39[6]; // [rsp+48h] [rbp-60h] BYREF

  v4 = 0LL;
  memset(v39, 0, 48);
  v7 = (a3 == 0) + 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > v7 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v7, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v10->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v11 != v10 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v11, 0LL);
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 )
    KeBugCheckEx(0x1C6u, 2uLL, a2, v12, 0LL);
  *(_BYTE *)(a2 + 17) &= ~4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v13 + 1)) & 4;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    SparePtr = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
    if ( SparePtr != &CurrentThread[1].Spare19 )
    {
      while ( SparePtr[3] != BugCheckParameter2 )
      {
        SparePtr = (unsigned __int64 *)*SparePtr;
        if ( SparePtr == &CurrentThread[1].Spare19 )
          goto LABEL_24;
      }
      if ( SparePtr )
      {
        v15 = (ULONG_PTR *)SparePtr[6];
        v16 = SparePtr + 5;
        if ( (_QWORD *)*v15 == v16 )
        {
          *(_QWORD *)a2 = v16;
          v17 = 1;
          *(_QWORD *)(a2 + 8) = v15;
          *v15 = a2;
          v16[1] = a2;
          goto LABEL_17;
        }
LABEL_56:
        __fastfail(3u);
      }
    }
  }
LABEL_24:
  v20 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v4 = v20;
  if ( v20 )
    *(_BYTE *)(a2 + 16) = (2 * *(_BYTE *)(v20 + 16)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v17 = ExpTryAcquireResourceSharedStarveExclusive(BugCheckParameter2);
  if ( v17 )
  {
    v23 = *(_QWORD **)(BugCheckParameter2 + 56);
    v24 = (_QWORD *)(a2 + 56);
    if ( *v23 != BugCheckParameter2 + 48 )
      goto LABEL_56;
    *v24 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v23;
    *v23 = v24;
    *(_QWORD *)(BugCheckParameter2 + 56) = v24;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v25, 0LL, a2);
LABEL_17:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && v13 <= 0xFu && v29 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (v13 + 1));
          v33 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    goto LABEL_19;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_17;
  }
  if ( v4 )
    KeAbPreWait((__int64 *)v4, v21, v22);
  v26 = *(_QWORD **)(BugCheckParameter2 + 56);
  v27 = (_QWORD *)(a2 + 56);
  if ( *v26 != BugCheckParameter2 + 48 )
    goto LABEL_56;
  *(_QWORD *)(a2 + 64) = v26;
  *v27 = BugCheckParameter2 + 48;
  *v26 = v27;
  *(_QWORD *)(BugCheckParameter2 + 56) = v27;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, (__int64)CurrentThread, (__int64)v39);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v28, 0LL, a2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && v13 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v33 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v39, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v4 )
    KeAbPreAcquire(BugCheckParameter2, v4);
  v17 = 1;
LABEL_19:
  if ( v4 )
  {
    if ( v17 )
      *(_BYTE *)(v4 + 18) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v4);
  }
  return v17;
}
