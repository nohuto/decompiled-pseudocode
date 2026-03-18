/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x1403443D8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcFreeWorkQueueEntry @ 0x1402C458C (CcFreeWorkQueueEntry.c)
 *     CcWriteBehind @ 0x1402C5514 (CcWriteBehind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r12
  unsigned __int64 v3; // rdi
  __int64 Partition; // r13
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 OldIrql; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v21; // edx
  bool v22; // zf
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // bl
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int8 v31; // bl
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-A0h] BYREF
  __int16 Object; // [rsp+50h] [rbp-98h] BYREF
  char v39; // [rsp+52h] [rbp-96h]
  char v40; // [rsp+53h] [rbp-95h]
  int v41; // [rsp+54h] [rbp-94h]
  _QWORD v42[2]; // [rsp+58h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  __int128 v45; // [rsp+98h] [rbp-50h] BYREF
  char v47; // [rsp+F8h] [rbp+10h]
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+20h]

  v37 = 0LL;
  v40 = 0;
  v47 = 0;
  v2 = 0;
  v3 = 0LL;
  v45 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v36, 0, sizeof(v36));
  memset(&v43, 0, sizeof(v43));
  Partition = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v39 = 6;
    v41 = 0;
    v42[1] = v42;
    v42[0] = v42;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v9 = *(_QWORD *)(a1 + 40);
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      Partition = CcGetPartition(*(_QWORD **)(v9 + 8), v6, v7, v8);
      v36.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v36.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v36, (volatile __int64 *)(Partition + 128));
      v5 = 1;
      if ( *(_QWORD *)(v10 + 224) == v10 + 224 )
      {
        v11 = *(_DWORD *)(v10 + 152);
        if ( (v11 & 0x100) == 0 )
        {
          v47 = 1;
          *(_DWORD *)(v10 + 152) = v11 | 0x10000;
          v37 = *(_QWORD *)(v10 + 272);
          *(_QWORD *)(v10 + 272) = (char *)&v37 + 1;
          v12 = *(_DWORD *)(v10 + 152);
          if ( (v12 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v10 + 496) )
            {
              v43.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
              v43.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock((__int64)&v43, (volatile __int64 *)(Partition + 192));
              v16 = *(_QWORD *)(v10 + 496);
              if ( v16 )
              {
                v3 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
                v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFEuLL);
                v18 = *(_QWORD **)((v16 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v17 + 8) != v3 || *v18 != v3 )
                  __fastfail(3u);
                *v18 = v17;
                *(_QWORD *)(v17 + 8) = v18;
                *(_QWORD *)(v3 + 8) = 0LL;
                *(_QWORD *)v3 = 0LL;
                *(_QWORD *)(v10 + 496) = 0LL;
                v2 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v43);
            }
          }
          else
          {
            *(_DWORD *)(v10 + 152) = v12 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
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
          v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          v13 = (unsigned int)v21 & SchedulerAssist[5];
          SchedulerAssist[5] = v13;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      *((_QWORD *)&v45 + 1) = v3;
      CcWriteBehind(v10, (__int64)&v45, v13, SchedulerAssist);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v3);
    if ( v47 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v36);
        v23 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v23 )
        {
          v24 = (_QWORD *)(v23 + 272);
          v25 = *(_QWORD *)(v23 + 272);
          if ( v25 )
          {
            while ( (__int64 *)v25 != (__int64 *)((char *)&v37 + 1) )
            {
              v24 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFEuLL);
              v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v25 )
                goto LABEL_37;
            }
            *v24 = v37;
          }
LABEL_37:
          *(_DWORD *)(v23 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
          v26 = v36.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v27 = KeGetCurrentIrql();
              if ( v27 <= 0xFu && v36.OldIrql <= 0xFu && v27 >= 2u )
              {
                v28 = KeGetCurrentPrcb();
                v29 = v28->SchedulerAssist;
                v30 = ~(unsigned __int16)(-1LL << (v36.OldIrql + 1));
                v22 = (v30 & v29[5]) == 0;
                v29[5] &= v30;
                if ( v22 )
                  KiRemoveSystemWorkPriorityKick(v28);
              }
            }
          }
          __writecr8(v26);
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
          v31 = v36.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v32 = KeGetCurrentIrql();
              if ( v32 <= 0xFu && v36.OldIrql <= 0xFu && v32 >= 2u )
              {
                v33 = KeGetCurrentPrcb();
                v34 = v33->SchedulerAssist;
                v35 = ~(unsigned __int16)(-1LL << (v36.OldIrql + 1));
                v22 = (v35 & v34[5]) == 0;
                v34[5] &= v35;
                if ( v22 )
                  KiRemoveSystemWorkPriorityKick(v33);
              }
            }
          }
          __writecr8(v31);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
