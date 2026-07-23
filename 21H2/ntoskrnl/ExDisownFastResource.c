/*
 * XREFs of ExDisownFastResource @ 0x14038F870
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14038EC98 (ExpRotateFastOwnerEntrySublistHead.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14038FB34 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14038FB8C (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int64 *CurrentThread; // r13
  unsigned int v5; // r12d
  char v6; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v8; // rcx
  ULONG_PTR v9; // r9
  unsigned __int8 v10; // r15
  unsigned __int64 *i; // rsi
  __int64 v12; // r8
  _QWORD *v13; // r14
  volatile __int64 *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  ULONG_PTR *v21; // rax
  __int64 v22; // rcx
  LONG_PTR result; // rax
  _QWORD *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  ULONG_PTR *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  ULONG_PTR *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned __int8 v43; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v45; // r8
  int v46; // eax
  bool v47; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v50; // [rsp+A8h] [rbp+48h]

  *(_QWORD *)&v49.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = (unsigned __int64 *)KeGetCurrentThread();
  v5 = 0;
  v50 = 0;
  v6 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v8 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (v8->MiscFlags & 0x400) == 0 && !v8->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v9 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v9 != v8 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v9, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  v10 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v10 + 1)) & 4;
  }
  if ( *(char *)(BugCheckParameter2 + 26) < 0 && (!*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40) )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  v49.LockQueue.Lock = CurrentThread + 199;
  v49.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v49, (volatile __int64 *)CurrentThread + 199);
  for ( i = (unsigned __int64 *)CurrentThread[200]; ; i = (unsigned __int64 *)*i )
  {
    if ( i == CurrentThread + 200 )
    {
      v12 = 0LL;
      goto LABEL_32;
    }
    if ( i[3] == BugCheckParameter2 )
      break;
  }
  v12 = 0LL;
  if ( !i )
  {
LABEL_32:
    if ( *(_BYTE *)(a2 + 18) )
    {
      v24 = (_QWORD *)(a2 + 40);
      if ( (_QWORD *)*v24 == v24 )
      {
        v25 = *(unsigned __int8 *)(a2 + 16);
        v6 = 1;
        *(_BYTE *)(a2 + 18) = 0;
        v26 = *(_QWORD *)a2;
        v50 = v25;
        v27 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v27 != a2 )
          goto LABEL_39;
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        *v24 = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      else
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
        ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 0);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v41 = *(_QWORD *)a2;
        v6 = 1;
        v42 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v42 != a2 )
          goto LABEL_39;
        *v42 = v41;
        *(_QWORD *)(v41 + 8) = v42;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
      }
    }
    else
    {
      v37 = *(_QWORD *)a2;
      v38 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_39;
      if ( *v38 != a2 )
        goto LABEL_39;
      *v38 = v37;
      *(_QWORD *)(v37 + 8) = v38;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
      ++*(_DWORD *)(BugCheckParameter2 + 64);
      v39 = *(_QWORD **)(BugCheckParameter2 + 56);
      v40 = (_QWORD *)(a2 + 56);
      if ( *v39 != BugCheckParameter2 + 48 )
        goto LABEL_39;
      *v40 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v39;
      *v39 = v40;
      *(_QWORD *)(BugCheckParameter2 + 56) = v40;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v6 = 1;
    }
    LOBYTE(v12) = 1;
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v26, v12, a2);
    goto LABEL_23;
  }
  if ( *(_BYTE *)(a2 + 18) )
  {
    v13 = (_QWORD *)(a2 + 40);
    LockHandle.LockQueue.Next = 0LL;
    v14 = (volatile __int64 *)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
    if ( (_QWORD *)*v13 == v13 )
    {
      KxAcquireQueuedSpinLock((__int64)&LockHandle, v14);
      --*(_DWORD *)(BugCheckParameter2 + 64);
      v15 = (_QWORD *)(a2 + 56);
      v16 = *(_QWORD *)(a2 + 56);
      v17 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v16 + 8) == a2 + 56 && (_QWORD *)*v17 == v15 )
      {
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *v15 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        *(_BYTE *)(a2 + 18) = 0;
        v18 = *(_QWORD *)a2;
        v19 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v19 == a2 )
        {
          *v19 = v18;
          v20 = i + 5;
          *(_QWORD *)(v18 + 8) = v19;
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *v13 = 0LL;
          *(_QWORD *)(a2 + 48) = 0LL;
          v5 = *(unsigned __int8 *)(a2 + 16);
          *(_BYTE *)(a2 + 16) = 0;
          v21 = (ULONG_PTR *)v20[1];
          if ( (_QWORD *)*v21 == v20 )
          {
            v6 = 0;
            *(_QWORD *)a2 = v20;
            *(_QWORD *)(a2 + 8) = v21;
            *v21 = a2;
            v20[1] = a2;
            goto LABEL_23;
          }
        }
      }
LABEL_39:
      __fastfail(3u);
    }
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v14);
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v33 = *(_QWORD *)a2;
    v34 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
      goto LABEL_39;
    if ( *v34 != a2 )
      goto LABEL_39;
    *v34 = v33;
    v35 = i + 5;
    *(_QWORD *)(v33 + 8) = v34;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    v36 = (ULONG_PTR *)v35[1];
    if ( (_QWORD *)*v36 != v35 )
      goto LABEL_39;
    *(_QWORD *)a2 = v35;
    v6 = 0;
    *(_QWORD *)(a2 + 8) = v36;
    *v36 = a2;
    v35[1] = a2;
  }
  else
  {
    v29 = *(_QWORD *)a2;
    v30 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
      goto LABEL_39;
    if ( *v30 != a2 )
      goto LABEL_39;
    *v30 = v29;
    v31 = i + 5;
    *(_QWORD *)(v29 + 8) = v30;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    v32 = (ULONG_PTR *)v31[1];
    if ( (_QWORD *)*v32 != v31 )
      goto LABEL_39;
    *(_QWORD *)a2 = v31;
    *(_QWORD *)(a2 + 8) = v32;
    *v32 = a2;
    v31[1] = a2;
  }
LABEL_23:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
  if ( v50 )
    KeAbMarkCrossThreadReleasable(v22, v50);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v43 = KeGetCurrentIrql();
      if ( v43 <= 0xFu && v10 <= 0xFu && v43 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v45 = CurrentPrcb->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v47 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v47 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = v10;
  __writecr8(v10);
  if ( v6 )
    result = ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  if ( v5 )
    return KeAbPostReleaseEx(BugCheckParameter2, v5);
  return result;
}
