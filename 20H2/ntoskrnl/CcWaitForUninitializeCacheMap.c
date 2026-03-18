/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x1403154B0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     CcWriteBehind @ 0x14024A910 (CcWriteBehind.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     CcFreeWorkQueueEntry @ 0x14029EB6C (CcFreeWorkQueueEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r12
  unsigned __int64 v3; // rdi
  __int64 Partition; // r13
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // eax
  unsigned __int8 OldIrql; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int8 v22; // bl
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  unsigned __int8 v27; // bl
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-A0h] BYREF
  __int16 Object; // [rsp+50h] [rbp-98h] BYREF
  char v35; // [rsp+52h] [rbp-96h]
  char v36; // [rsp+53h] [rbp-95h]
  int v37; // [rsp+54h] [rbp-94h]
  _QWORD v38[2]; // [rsp+58h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  __int128 v41; // [rsp+98h] [rbp-50h] BYREF
  char v43; // [rsp+F8h] [rbp+10h]
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+20h]

  v33 = 0LL;
  v36 = 0;
  v43 = 0;
  v2 = 0;
  v3 = 0LL;
  v41 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v32, 0, sizeof(v32));
  memset(&v39, 0, sizeof(v39));
  Partition = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v35 = 6;
    v37 = 0;
    v38[1] = v38;
    v38[0] = v38;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      Partition = CcGetPartition(*(_QWORD **)(v6 + 8));
      v32.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v32.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v32, (volatile __int64 *)(Partition + 128));
      v5 = 1;
      if ( *(_QWORD *)(v7 + 224) == v7 + 224 )
      {
        v8 = *(_DWORD *)(v7 + 152);
        if ( (v8 & 0x100) == 0 )
        {
          v43 = 1;
          *(_DWORD *)(v7 + 152) = v8 | 0x10000;
          v33 = *(_QWORD *)(v7 + 272);
          *(_QWORD *)(v7 + 272) = (char *)&v33 + 1;
          v9 = *(_DWORD *)(v7 + 152);
          if ( (v9 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v7 + 496) )
            {
              v39.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
              v39.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock((__int64)&v39, (volatile __int64 *)(Partition + 192));
              v11 = *(_QWORD *)(v7 + 496);
              if ( v11 )
              {
                v3 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
                v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
                v13 = *(_QWORD **)((v11 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v12 + 8) != v3 || *v13 != v3 )
                  __fastfail(3u);
                *v13 = v12;
                *(_QWORD *)(v12 + 8) = v13;
                *(_QWORD *)(v3 + 8) = 0LL;
                *(_QWORD *)v3 = 0LL;
                *(_QWORD *)(v7 + 496) = 0LL;
                v2 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v39);
            }
          }
          else
          {
            *(_DWORD *)(v7 + 152) = v9 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
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
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      *((_QWORD *)&v41 + 1) = v3;
      CcWriteBehind(v7, (__int64)&v41);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v3);
    if ( v43 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v32);
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v19 )
        {
          v20 = (_QWORD *)(v19 + 272);
          v21 = *(_QWORD *)(v19 + 272);
          if ( v21 )
          {
            while ( (__int64 *)v21 != (__int64 *)((char *)&v33 + 1) )
            {
              v20 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
              v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v21 )
                goto LABEL_37;
            }
            *v20 = v33;
          }
LABEL_37:
          *(_DWORD *)(v19 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
          v22 = v32.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v23 = KeGetCurrentIrql();
              if ( v23 <= 0xFu && v32.OldIrql <= 0xFu && v23 >= 2u )
              {
                v24 = KeGetCurrentPrcb();
                v25 = v24->SchedulerAssist;
                v26 = ~(unsigned __int16)(-1LL << (v32.OldIrql + 1));
                v18 = (v26 & v25[5]) == 0;
                v25[5] &= v26;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick(v24);
              }
            }
          }
          __writecr8(v22);
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
          v27 = v32.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v28 = KeGetCurrentIrql();
              if ( v28 <= 0xFu && v32.OldIrql <= 0xFu && v28 >= 2u )
              {
                v29 = KeGetCurrentPrcb();
                v30 = v29->SchedulerAssist;
                v31 = ~(unsigned __int16)(-1LL << (v32.OldIrql + 1));
                v18 = (v31 & v30[5]) == 0;
                v30[5] &= v31;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick(v29);
              }
            }
          }
          __writecr8(v27);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
