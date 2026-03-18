/*
 * XREFs of ExDisownFastResource @ 0x14039C100
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14039C41C (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14039C474 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14039CEC8 (ExpRotateFastOwnerEntrySublistHead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  char v2; // r12
  unsigned __int64 *CurrentThread; // r13
  unsigned int v6; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v8; // rcx
  ULONG_PTR v9; // r9
  unsigned __int8 v10; // r15
  __int64 v11; // r8
  unsigned __int64 *v12; // r14
  _QWORD *v13; // r15
  volatile __int64 *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  ULONG_PTR *v21; // rax
  LONG_PTR result; // rax
  _DWORD *SchedulerAssist; // r9
  _QWORD *v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // r14
  ULONG_PTR *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned __int8 v43; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v45; // r8
  int v46; // eax
  bool v47; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 v50; // [rsp+90h] [rbp+30h]

  *(_QWORD *)&v49.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  CurrentThread = (unsigned __int64 *)KeGetCurrentThread();
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
  v50 = v10;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v10 + 1)) & 4;
  }
  if ( *(char *)(BugCheckParameter2 + 26) < 0 && (!*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40) )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  v49.LockQueue.Lock = CurrentThread + 209;
  v49.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v49, (volatile __int64 *)CurrentThread + 209);
  v12 = (unsigned __int64 *)CurrentThread[210];
  if ( v12 != CurrentThread + 210 )
  {
    while ( v12[3] != BugCheckParameter2 )
    {
      v12 = (unsigned __int64 *)*v12;
      if ( v12 == CurrentThread + 210 )
        goto LABEL_32;
    }
    if ( v12 )
    {
      if ( *(_BYTE *)(a2 + 18) )
      {
        v13 = (_QWORD *)(a2 + 40);
        v14 = (volatile __int64 *)(BugCheckParameter2 + 96);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
        if ( (_QWORD *)*v13 == v13 )
        {
          LockHandle.LockQueue.Next = 0LL;
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
              v20 = v12 + 5;
              *(_QWORD *)(v18 + 8) = v19;
              *(_QWORD *)a2 = 0LL;
              *(_QWORD *)(a2 + 8) = 0LL;
              *v13 = 0LL;
              *(_QWORD *)(a2 + 48) = 0LL;
              v6 = *(unsigned __int8 *)(a2 + 16);
              *(_BYTE *)(a2 + 16) = 0;
              v21 = (ULONG_PTR *)v20[1];
              if ( (_QWORD *)*v21 == v20 )
              {
LABEL_21:
                *(_QWORD *)a2 = v20;
                *(_QWORD *)(a2 + 8) = v21;
                *v21 = a2;
                v20[1] = a2;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
                v10 = v50;
                goto LABEL_22;
              }
            }
          }
        }
        else
        {
          LockHandle.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, v14);
          LOBYTE(v33) = 1;
          ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, v33);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v34 = *(_QWORD *)a2;
          v35 = *(_QWORD **)(a2 + 8);
          if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v35 == a2 )
          {
            *v35 = v34;
            v20 = v12 + 5;
            *(_QWORD *)(v34 + 8) = v35;
            *(_QWORD *)a2 = 0LL;
            *(_QWORD *)(a2 + 8) = 0LL;
            v21 = (ULONG_PTR *)v20[1];
            if ( (_QWORD *)*v21 == v20 )
              goto LABEL_21;
          }
        }
LABEL_38:
        __fastfail(3u);
      }
      v29 = *(_QWORD *)a2;
      v30 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_38;
      if ( *v30 != a2 )
        goto LABEL_38;
      *v30 = v29;
      v31 = v12 + 5;
      *(_QWORD *)(v29 + 8) = v30;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v32 = (ULONG_PTR *)v31[1];
      if ( (_QWORD *)*v32 != v31 )
        goto LABEL_38;
      *(_QWORD *)a2 = v31;
      *(_QWORD *)(a2 + 8) = v32;
      *v32 = a2;
      v31[1] = a2;
LABEL_64:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
      goto LABEL_22;
    }
  }
LABEL_32:
  if ( !*(_BYTE *)(a2 + 18) )
  {
    v36 = *(_QWORD *)a2;
    v37 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
      goto LABEL_38;
    if ( *v37 != a2 )
      goto LABEL_38;
    *v37 = v36;
    *(_QWORD *)(v36 + 8) = v37;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
    ++*(_DWORD *)(BugCheckParameter2 + 64);
    v38 = *(_QWORD **)(BugCheckParameter2 + 56);
    v39 = (_QWORD *)(a2 + 56);
    if ( *v38 != BugCheckParameter2 + 48 )
      goto LABEL_38;
    *v39 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v38;
    *v38 = v39;
    *(_QWORD *)(BugCheckParameter2 + 56) = v39;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v2 = 1;
    goto LABEL_63;
  }
  v24 = (_QWORD *)(a2 + 40);
  if ( (_QWORD *)*v24 != v24 )
  {
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v41 = *(_QWORD *)a2;
    v2 = 1;
    v42 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v42 != a2 )
      goto LABEL_38;
    *v42 = v41;
    *(_QWORD *)(v41 + 8) = v42;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_63:
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v40, 1LL, a2);
    goto LABEL_64;
  }
  v25 = *(unsigned __int8 *)(a2 + 16);
  *(_BYTE *)(a2 + 18) = 0;
  v26 = *(_QWORD *)a2;
  v27 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v27 != a2 )
    goto LABEL_38;
  *v27 = v26;
  *(_QWORD *)(v26 + 8) = v27;
  LOBYTE(v11) = 1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v24 = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v26, v11, a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
  v2 = 1;
  if ( (_BYTE)v25 )
    KeAbMarkCrossThreadReleasable(v28, v25);
LABEL_22:
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
  if ( v2 )
    result = ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  if ( v6 )
    return KeAbPostReleaseEx(BugCheckParameter2, v6);
  return result;
}
