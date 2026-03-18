/*
 * XREFs of ExAcquireFastResourceExclusive @ 0x14038E760
 * Callers:
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038DEF4 (ExpFastResourceLegacyAcquireExclusive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     ExpWaitForResource @ 0x140217F70 (ExpWaitForResource.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x140223870 (ExpTryAcquireResourceExclusive.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x14031705C (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14038F1B8 (ExpFindFastOwnerEntryForThread.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14038F53C (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  ULONG_PTR v6; // rdi
  unsigned __int8 v7; // r8
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // r14
  _QWORD *v18; // r9
  _QWORD *v19; // r8
  __int64 v20; // rdx
  unsigned __int8 v21; // r11
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  __int64 FastOwnerEntryForThread; // rax
  ULONG_PTR *v27; // rcx
  __int64 v28; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v40[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v41; // [rsp+B0h] [rbp+30h]

  v6 = 0LL;
  v7 = 2 - (a3 != 0);
  memset(v40, 0, sizeof(v40));
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v41 = (__int64)CurrentThread;
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
  *(_BYTE *)(a2 + 17) |= 4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v13 + 1)) & 4;
  }
  if ( *(char *)(BugCheckParameter2 + 26) < 0 )
  {
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v27 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v28 = FastOwnerEntryForThread + 40;
      if ( *v27 == v28 )
      {
        *(_QWORD *)a2 = v28;
        v17 = 1;
        *(_QWORD *)(a2 + 8) = v27;
        *v27 = a2;
        *(_QWORD *)(v28 + 8) = a2;
LABEL_18:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && v13 <= 0xFu && v30 >= v21 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v32 = CurrentPrcb->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (v13 + 1));
              v34 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v13);
        goto LABEL_20;
      }
LABEL_54:
      __fastfail(3u);
    }
  }
  v14 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v6 = v14;
  if ( v14 )
    *(_BYTE *)(a2 + 16) = (2 * ((v14 - *(_QWORD *)(v14 - 16LL * *(unsigned __int8 *)(v14 + 24) + 800)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v17 = ExpTryAcquireResourceExclusive(BugCheckParameter2);
  if ( v17 )
  {
    v18 = *(_QWORD **)(BugCheckParameter2 + 56);
    v19 = (_QWORD *)(a2 + 56);
    if ( *v18 != BugCheckParameter2 + 48 )
      goto LABEL_54;
    *v19 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v18;
    *v18 = v19;
    *(_QWORD *)(BugCheckParameter2 + 56) = v19;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpAddFastOwnerEntryToThreadList(v41, v20, 0LL, a2);
LABEL_17:
    v21 = 2;
    goto LABEL_18;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_BYTE *)(a2 + 16) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_17;
  }
  if ( v6 )
    KeAbPreWait(v6, v15, v16);
  v23 = *(_QWORD **)(BugCheckParameter2 + 56);
  v24 = (_QWORD *)(a2 + 56);
  if ( *v23 != BugCheckParameter2 + 48 )
    goto LABEL_54;
  *(_QWORD *)(a2 + 64) = v23;
  *v24 = BugCheckParameter2 + 48;
  *v23 = v24;
  *(_QWORD *)(BugCheckParameter2 + 56) = v24;
  *(_BYTE *)(a2 + 19) = 1;
  ExpPrepareToWaitForResourceExclusive(BugCheckParameter2, v41, (__int64)v40);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(v41, v25, 0LL, a2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && v13 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v34 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v40, 0x10224u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v6 )
    KeAbPreAcquire(BugCheckParameter2, v6, 0LL);
  v17 = 1;
LABEL_20:
  if ( v6 )
  {
    if ( v17 )
      *(_BYTE *)(v6 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v6);
  }
  return v17;
}
