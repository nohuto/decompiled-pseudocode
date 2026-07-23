/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x1402369D0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcWriteBehind @ 0x140300EB0 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r12
  unsigned __int64 v3; // rdi
  __int64 Partition; // r13
  char v5; // si
  char v6; // dl
  char v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  int v15; // eax
  unsigned __int8 OldIrql; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // edx
  bool v24; // zf
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int8 v28; // bl
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int8 v33; // bl
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-A0h] BYREF
  __int16 Object; // [rsp+50h] [rbp-98h] BYREF
  char v41; // [rsp+52h] [rbp-96h]
  char v42; // [rsp+53h] [rbp-95h]
  int v43; // [rsp+54h] [rbp-94h]
  _QWORD v44[2]; // [rsp+58h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  __int128 v47; // [rsp+98h] [rbp-50h] BYREF
  char v49; // [rsp+F8h] [rbp+10h]
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+20h]

  v39 = 0LL;
  v42 = 0;
  v49 = 0;
  v2 = 0;
  v3 = 0LL;
  v47 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v38, 0, sizeof(v38));
  memset(&v45, 0, sizeof(v45));
  Partition = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v41 = 6;
    v43 = 0;
    v44[1] = v44;
    v44[0] = v44;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v8 = *(_QWORD *)(a1 + 40);
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
    {
      Partition = CcGetPartition(*(_QWORD *)(v8 + 8), v6, v7);
      v38.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v38.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&v38, Partition + 128, v10, v11);
      v5 = 1;
      if ( *(_QWORD *)(v9 + 224) == v9 + 224 )
      {
        v14 = *(_DWORD *)(v9 + 152);
        if ( (v14 & 0x100) == 0 )
        {
          v49 = 1;
          *(_DWORD *)(v9 + 152) = v14 | 0x10000;
          v39 = *(_QWORD *)(v9 + 272);
          *(_QWORD *)(v9 + 272) = (char *)&v39 + 1;
          v15 = *(_DWORD *)(v9 + 152);
          if ( (v15 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v9 + 496) )
            {
              v45.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
              v45.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock(&v45, Partition + 192, v12, v13);
              v17 = *(_QWORD *)(v9 + 496);
              if ( v17 )
              {
                v3 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
                v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFEuLL);
                v19 = *(_QWORD **)((v17 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v18 + 8) != v3 || *v19 != v3 )
                  __fastfail(3u);
                *v19 = v18;
                *(_QWORD *)(v18 + 8) = v19;
                *(_QWORD *)(v3 + 8) = 0LL;
                *(_QWORD *)v3 = 0LL;
                *(_QWORD *)(v9 + 496) = 0LL;
                v2 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v45);
            }
          }
          else
          {
            *(_DWORD *)(v9 + 152) = v15 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v38);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      *((_QWORD *)&v47 + 1) = v3;
      CcWriteBehind(v9, &v47);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v3);
    if ( v49 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v38);
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v25 )
        {
          v26 = (_QWORD *)(v25 + 272);
          v27 = *(_QWORD *)(v25 + 272);
          if ( v27 )
          {
            while ( (__int64 *)v27 != (__int64 *)((char *)&v39 + 1) )
            {
              v26 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFEuLL);
              v27 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v27 )
                goto LABEL_37;
            }
            *v26 = v39;
          }
LABEL_37:
          *(_DWORD *)(v25 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v38);
          v28 = v38.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v29 = KeGetCurrentIrql();
              if ( v29 <= 0xFu && v38.OldIrql <= 0xFu && v29 >= 2u )
              {
                v30 = KeGetCurrentPrcb();
                v31 = v30->SchedulerAssist;
                v32 = ~(unsigned __int16)(-1LL << (v38.OldIrql + 1));
                v24 = (v32 & v31[5]) == 0;
                v31[5] &= v32;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
          }
          __writecr8(v28);
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v38);
          v33 = v38.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v34 = KeGetCurrentIrql();
              if ( v34 <= 0xFu && v38.OldIrql <= 0xFu && v34 >= 2u )
              {
                v35 = KeGetCurrentPrcb();
                v36 = v35->SchedulerAssist;
                v37 = ~(unsigned __int16)(-1LL << (v38.OldIrql + 1));
                v24 = (v37 & v36[5]) == 0;
                v36[5] &= v37;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick(v35);
              }
            }
          }
          __writecr8(v33);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
