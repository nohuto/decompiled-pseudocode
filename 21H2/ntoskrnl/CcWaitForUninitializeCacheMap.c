/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x1402B87C0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140706F10 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcWriteBehind @ 0x1402F6160 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x1402F6CBC (CcFreeWorkQueueEntry.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r12
  unsigned __int64 v3; // rdi
  __int64 Partition; // r13
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // ecx
  int v11; // eax
  unsigned __int8 OldIrql; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // edx
  bool v20; // zf
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // bl
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // bl
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-A0h] BYREF
  __int16 Object; // [rsp+50h] [rbp-98h] BYREF
  char v37; // [rsp+52h] [rbp-96h]
  char v38; // [rsp+53h] [rbp-95h]
  int v39; // [rsp+54h] [rbp-94h]
  _QWORD v40[2]; // [rsp+58h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v41; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  __int128 v43; // [rsp+98h] [rbp-50h] BYREF
  char v45; // [rsp+F8h] [rbp+10h]
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+20h]

  v35 = 0LL;
  v38 = 0;
  v45 = 0;
  v2 = 0;
  v3 = 0LL;
  v43 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v34, 0, sizeof(v34));
  memset(&v41, 0, sizeof(v41));
  Partition = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v37 = 6;
    v39 = 0;
    v40[1] = v40;
    v40[0] = v40;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      Partition = CcGetPartition(*(_QWORD *)(v6 + 8));
      v34.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v34.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&v34, Partition + 128, v8);
      v5 = 1;
      if ( *(_QWORD *)(v7 + 224) == v7 + 224 )
      {
        v10 = *(_DWORD *)(v7 + 152);
        if ( (v10 & 0x100) == 0 )
        {
          v45 = 1;
          *(_DWORD *)(v7 + 152) = v10 | 0x10000;
          v35 = *(_QWORD *)(v7 + 272);
          *(_QWORD *)(v7 + 272) = (char *)&v35 + 1;
          v11 = *(_DWORD *)(v7 + 152);
          if ( (v11 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v7 + 496) )
            {
              v41.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
              v41.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock(&v41, Partition + 192, v9);
              v13 = *(_QWORD *)(v7 + 496);
              if ( v13 )
              {
                v3 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
                v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
                v15 = *(_QWORD **)((v13 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v14 + 8) != v3 || *v15 != v3 )
                  __fastfail(3u);
                *v15 = v14;
                *(_QWORD *)(v14 + 8) = v15;
                *(_QWORD *)(v3 + 8) = 0LL;
                *(_QWORD *)v3 = 0LL;
                *(_QWORD *)(v7 + 496) = 0LL;
                v2 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v41);
            }
          }
          else
          {
            *(_DWORD *)(v7 + 152) = v11 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
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
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      *((_QWORD *)&v43 + 1) = v3;
      CcWriteBehind(v7, &v43);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v3);
    if ( v45 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v34);
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v21 )
        {
          v22 = (_QWORD *)(v21 + 272);
          v23 = *(_QWORD *)(v21 + 272);
          if ( v23 )
          {
            while ( (__int64 *)v23 != (__int64 *)((char *)&v35 + 1) )
            {
              v22 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFEuLL);
              v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v23 )
                goto LABEL_37;
            }
            *v22 = v35;
          }
LABEL_37:
          *(_DWORD *)(v21 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
          v24 = v34.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v25 = KeGetCurrentIrql();
              if ( v25 <= 0xFu && v34.OldIrql <= 0xFu && v25 >= 2u )
              {
                v26 = KeGetCurrentPrcb();
                v27 = v26->SchedulerAssist;
                v28 = ~(unsigned __int16)(-1LL << (v34.OldIrql + 1));
                v20 = (v28 & v27[5]) == 0;
                v27[5] &= v28;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick(v26);
              }
            }
          }
          __writecr8(v24);
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
          v29 = v34.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v30 = KeGetCurrentIrql();
              if ( v30 <= 0xFu && v34.OldIrql <= 0xFu && v30 >= 2u )
              {
                v31 = KeGetCurrentPrcb();
                v32 = v31->SchedulerAssist;
                v33 = ~(unsigned __int16)(-1LL << (v34.OldIrql + 1));
                v20 = (v33 & v32[5]) == 0;
                v32[5] &= v33;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick(v31);
              }
            }
          }
          __writecr8(v29);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
