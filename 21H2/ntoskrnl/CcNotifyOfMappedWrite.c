/*
 * XREFs of CcNotifyOfMappedWrite @ 0x1402D1EDC
 * Callers:
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x140300E80 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140301520 (CcAllocateWorkQueueEntry.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     CcAcquireByteRangeForWrite @ 0x14031AC90 (CcAcquireByteRangeForWrite.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcCanIWriteStreamEx @ 0x14031E220 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 Partition; // r13
  char v6; // dl
  char v7; // r8
  __int64 v8; // rdi
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // r14d
  unsigned __int64 v14; // rbx
  int v16; // eax
  unsigned __int64 v17; // r14
  int v18; // eax
  KSPIN_LOCK *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rdx
  unsigned __int8 v22; // r10
  signed __int64 v23; // rax
  unsigned __int8 v24; // r10
  unsigned int v25; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r11
  _DWORD *v41; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r11
  _DWORD *v45; // r9
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  struct _KPRCB *v51; // rcx
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // edx
  ULONG_PTR v56; // [rsp+40h] [rbp-29h] BYREF
  __int64 v57; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR v58; // [rsp+50h] [rbp-19h] BYREF
  __int64 v59; // [rsp+58h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v60; // [rsp+60h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v62; // [rsp+D0h] [rbp+67h]
  unsigned __int8 v63; // [rsp+D0h] [rbp+67h]
  unsigned int i; // [rsp+E8h] [rbp+7Fh] BYREF

  v57 = 0LL;
  v56 = 0LL;
  v59 = 0LL;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v60, 0, sizeof(v60));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 && (*(_DWORD *)(v8 + 152) & 0x100) == 0 )
  {
    Partition = CcGetPartition(v8, v6, v7);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v60);
    ++*(_DWORD *)(v8 + 4);
    ++*(_DWORD *)(v8 + 536);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v60);
    OldIrql = v60.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v60.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (v60.OldIrql + 1));
          v30 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v10 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v30 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(v10);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v60);
    CcDecrementOpenCount(v8);
    if ( (*(_DWORD *)(v8 + 152) & 0x20) != 0 || *(_DWORD *)(v8 + 516) )
      goto LABEL_26;
    if ( *(_DWORD *)(v8 + 112) )
    {
      v11 = *(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (*(_DWORD *)(v11 + 0x50) & 0x8000) == 0
        && (unsigned __int8)CcCanIWriteStreamEx(Partition, v11, 0x1000000, 0, 8, 0LL) )
      {
        v13 = 0;
        if ( *(_BYTE *)(Partition + 964) )
        {
          LOBYTE(v12) = 1;
          CcScheduleLazyWriteScan(Partition, v12, 0LL);
        }
        goto LABEL_12;
      }
      v23 = *(_QWORD *)(v8 + 40);
      if ( a2 > v23 && *(_QWORD *)(v8 + 48) > v23 )
      {
        v16 = *(_DWORD *)(v8 + 112);
        *(_DWORD *)(v8 + 192) = v16;
        *(_DWORD *)(Partition + 496) += v16;
        *(_DWORD *)(Partition + 656) += *(_DWORD *)(v8 + 192);
        *(_DWORD *)(v8 + 152) |= 0x20u;
        ++*(_DWORD *)(v8 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v60);
        v17 = v60.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v35 = KeGetCurrentIrql();
            if ( v35 <= 0xFu && v60.OldIrql <= 0xFu && v35 >= 2u )
            {
              v36 = KeGetCurrentPrcb();
              v37 = v36->SchedulerAssist;
              v38 = ~(unsigned __int16)(-1LL << (v60.OldIrql + 1));
              v30 = (v38 & v37[5]) == 0;
              v37[5] &= v38;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(v36);
            }
          }
        }
        __writecr8(v17);
        v18 = CcAllocateWorkQueueEntry(Partition, &v57);
        v19 = (KSPIN_LOCK *)(Partition + 128);
        if ( v18 >= 0 )
        {
          v20 = v57;
          *(_BYTE *)(v57 + 120) = 2;
          *(_QWORD *)(v20 + 16) = v8;
          KeAcquireInStackQueuedSpinLock(v19, &v60);
          --*(_DWORD *)(v8 + 112);
          if ( (*(_DWORD *)(v8 + 152) & 0x10000) != 0 )
          {
            v21 = Partition + 224;
            *(_QWORD *)(v8 + 496) = v20 | 1;
          }
          else
          {
            *(_QWORD *)(v8 + 496) = v20;
            v21 = Partition + 256;
          }
          CcPostWorkQueue(v20, v21);
LABEL_26:
          v13 = 0;
          goto LABEL_12;
        }
        KeAcquireInStackQueuedSpinLock(v19, &v60);
        *(_DWORD *)(v8 + 152) &= ~0x20u;
        --*(_DWORD *)(v8 + 112);
      }
    }
    v13 = 2;
    goto LABEL_12;
  }
  v13 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v22 = LockHandle.OldIrql;
  v62 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v39 = KeGetCurrentIrql();
      if ( v39 <= 0xFu && LockHandle.OldIrql <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v30 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v30 )
        {
          KiRemoveSystemWorkPriorityKick(v40);
          v22 = v62;
        }
      }
    }
  }
  __writecr8(v22);
LABEL_12:
  if ( !a3 && v13 == 2 )
    v13 = 1;
  if ( v13 > 1 )
  {
    *(_DWORD *)(v8 + 152) |= 0x400400u;
    ++*(_DWORD *)(v8 + 4);
    ++*(_DWORD *)(v8 + 536);
    ++*(_DWORD *)(v8 + 516);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v60);
    v24 = v60.OldIrql;
    v63 = v60.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && v60.OldIrql <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << (v60.OldIrql + 1));
          v30 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v30 )
          {
            KiRemoveSystemWorkPriorityKick(v44);
            v24 = v63;
          }
        }
      }
    }
    __writecr8(v24);
    v25 = a3;
    v58 = a2;
    for ( i = a3; v25; v58 = v56 )
    {
      if ( !*(_QWORD *)(v8 + 8) && (*(_DWORD *)(v8 + 152) & 4) == 0 )
        break;
      if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                               v8,
                               (unsigned int)&v58,
                               v25,
                               0,
                               (__int64)&v56,
                               (__int64)&i,
                               (__int64)&v59,
                               0) )
        break;
      v56 += i;
      v25 = a3 + a2 - v56;
      i = v25;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v60);
    if ( !*(_DWORD *)(v8 + 4) )
      KeBugCheckEx(0x34u, 0x12B2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v8 + 152) &= ~0x400000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v60);
    v14 = v60.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_18;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_18;
    v47 = KeGetCurrentIrql();
    if ( v47 > 0xFu )
      goto LABEL_18;
    if ( v60.OldIrql > 0xFu )
      goto LABEL_18;
    if ( v47 < 2u )
      goto LABEL_18;
    v48 = KeGetCurrentPrcb();
    v49 = v48->SchedulerAssist;
    v50 = ~(unsigned __int16)(-1LL << (v60.OldIrql + 1));
    v30 = (v50 & v49[5]) == 0;
    v49[5] &= v50;
    if ( !v30 )
      goto LABEL_18;
    v51 = v48;
    goto LABEL_87;
  }
  if ( Partition )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v60);
    v14 = v60.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_18;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_18;
    v52 = KeGetCurrentIrql();
    if ( v52 > 0xFu )
      goto LABEL_18;
    if ( v60.OldIrql > 0xFu )
      goto LABEL_18;
    if ( v52 < 2u )
      goto LABEL_18;
    v53 = KeGetCurrentPrcb();
    v54 = v53->SchedulerAssist;
    v55 = ~(unsigned __int16)(-1LL << (v60.OldIrql + 1));
    v30 = (v55 & v54[5]) == 0;
    v54[5] &= v55;
    if ( !v30 )
      goto LABEL_18;
    v51 = v53;
LABEL_87:
    KiRemoveSystemWorkPriorityKick(v51);
LABEL_18:
    __writecr8(v14);
  }
  return v13;
}
