/*
 * XREFs of ExAcquireFastResourceShared @ 0x14038BE10
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x140209E00 (SepMandatoryIntegrityCheck.c)
 *     SeSecurityAttributePresent @ 0x140259CA0 (SeSecurityAttributePresent.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402E9570 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402EDF30 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForResource @ 0x140267490 (ExpWaitForResource.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14032080C (ExpPrepareToWaitForResourceShared.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14035A260 (KeAbPreWait.c)
 *     ExpTryAcquireResourceShared @ 0x14038C154 (ExpTryAcquireResourceShared.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14038C188 (ExpFindFastOwnerEntryForThread.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14038C50C (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  ULONG_PTR v6; // rsi
  unsigned __int8 v7; // r8
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r14
  __int64 FastOwnerEntryForThread; // rax
  unsigned __int8 v15; // r11
  __int64 v16; // rax
  char v17; // r15
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  ULONG_PTR *v20; // rax
  __int64 v21; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  ULONG_PTR *v26; // rcx
  __int64 v27; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v31; // r8
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v39[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v40; // [rsp+B0h] [rbp+30h]

  v6 = 0LL;
  v7 = 2 - (a3 != 0);
  memset(v39, 0, sizeof(v39));
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v40 = (__int64)CurrentThread;
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
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v26 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v27 = FastOwnerEntryForThread + 40;
      if ( *v26 == v27 )
      {
        *(_QWORD *)a2 = v27;
        v17 = 1;
        *(_QWORD *)(a2 + 8) = v26;
        *v26 = a2;
        *(_QWORD *)(v27 + 8) = a2;
LABEL_20:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && v13 <= 0xFu && v29 >= v15 )
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
        goto LABEL_22;
      }
      goto LABEL_55;
    }
  }
  v16 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v6 = v16;
  if ( v16 )
    *(_BYTE *)(a2 + 16) = (2 * ((v16 - *(_QWORD *)(v16 - 16LL * *(unsigned __int8 *)(v16 + 24) + 800)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v17 = ExpTryAcquireResourceShared(BugCheckParameter2);
  if ( v17 )
  {
    v18 = *(_QWORD **)(BugCheckParameter2 + 56);
    v19 = (_QWORD *)(a2 + 56);
    if ( *v18 == BugCheckParameter2 + 48 )
    {
      *v19 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v18;
      *v18 = v19;
      *(_QWORD *)(BugCheckParameter2 + 56) = v19;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      *(_BYTE *)(a2 + 18) = 1;
      *(_QWORD *)(a2 + 48) = a2 + 40;
      *(_QWORD *)(a2 + 40) = a2 + 40;
      v20 = (ULONG_PTR *)(v40 + 1576);
      v21 = *(_QWORD *)(v40 + 1576);
      if ( *(_QWORD *)(v21 + 8) == v40 + 1576 )
      {
        *(_QWORD *)a2 = v21;
        *(_QWORD *)(a2 + 8) = v20;
        *(_QWORD *)(v21 + 8) = a2;
        *v20 = a2;
LABEL_19:
        v15 = 2;
        goto LABEL_20;
      }
    }
    goto LABEL_55;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_BYTE *)(a2 + 16) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_19;
  }
  if ( v6 )
    KeAbPreWait(v6);
  v23 = *(_QWORD **)(BugCheckParameter2 + 56);
  v24 = (_QWORD *)(a2 + 56);
  if ( *v23 != BugCheckParameter2 + 48 )
LABEL_55:
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v23;
  *v24 = BugCheckParameter2 + 48;
  *v23 = v24;
  *(_QWORD *)(BugCheckParameter2 + 56) = v24;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, v40, (__int64)v39);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(v40, v25, 0LL, a2);
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
  if ( v6 )
    KeAbPreAcquire(BugCheckParameter2, v6, 0);
  v17 = 1;
LABEL_22:
  if ( v6 )
  {
    if ( v17 )
      *(_BYTE *)(v6 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v6);
  }
  return v17;
}
