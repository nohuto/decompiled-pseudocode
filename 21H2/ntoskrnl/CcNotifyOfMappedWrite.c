/*
 * XREFs of CcNotifyOfMappedWrite @ 0x14022D68C
 * Callers:
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022D600 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcPostWorkQueue @ 0x1402F6130 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1402F67D0 (CcAllocateWorkQueueEntry.c)
 *     CcScheduleLazyWriteScan @ 0x1402F6D5C (CcScheduleLazyWriteScan.c)
 *     CcAcquireByteRangeForWrite @ 0x14030FF40 (CcAcquireByteRangeForWrite.c)
 *     CcDecrementOpenCount @ 0x14031313C (CcDecrementOpenCount.c)
 *     CcCanIWriteStreamEx @ 0x1403134D0 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 Partition; // r13
  __int64 v6; // rdi
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // r14d
  unsigned __int64 v12; // rbx
  int v14; // eax
  unsigned __int64 v15; // r14
  int v16; // eax
  KSPIN_LOCK *v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  unsigned __int8 v20; // r10
  signed __int64 v21; // rax
  unsigned __int8 v22; // r10
  unsigned int v23; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r11
  _DWORD *v39; // r9
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r11
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  struct _KPRCB *v49; // rcx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // edx
  ULONG_PTR v54; // [rsp+40h] [rbp-29h] BYREF
  __int64 v55; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR v56; // [rsp+50h] [rbp-19h] BYREF
  __int64 v57; // [rsp+58h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v58; // [rsp+60h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v60; // [rsp+D0h] [rbp+67h]
  unsigned __int8 v61; // [rsp+D0h] [rbp+67h]
  unsigned int i; // [rsp+E8h] [rbp+7Fh] BYREF

  v55 = 0LL;
  v54 = 0LL;
  v57 = 0LL;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v58, 0, sizeof(v58));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 && (*(_DWORD *)(v6 + 152) & 0x100) == 0 )
  {
    Partition = CcGetPartition(v6);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v58);
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 536);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v58);
    OldIrql = v58.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v58.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (v58.OldIrql + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v8 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v28 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8(v8);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v58);
    CcDecrementOpenCount(v6);
    if ( (*(_DWORD *)(v6 + 152) & 0x20) != 0 || *(_DWORD *)(v6 + 516) )
      goto LABEL_26;
    if ( *(_DWORD *)(v6 + 112) )
    {
      v9 = *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (*(_DWORD *)(v9 + 0x50) & 0x8000) == 0
        && (unsigned __int8)CcCanIWriteStreamEx(Partition, v9, 0x1000000, 0, 8, 0LL) )
      {
        v11 = 0;
        if ( *(_BYTE *)(Partition + 964) )
        {
          LOBYTE(v10) = 1;
          CcScheduleLazyWriteScan(Partition, v10, 0LL);
        }
        goto LABEL_12;
      }
      v21 = *(_QWORD *)(v6 + 40);
      if ( a2 > v21 && *(_QWORD *)(v6 + 48) > v21 )
      {
        v14 = *(_DWORD *)(v6 + 112);
        *(_DWORD *)(v6 + 192) = v14;
        *(_DWORD *)(Partition + 496) += v14;
        *(_DWORD *)(Partition + 656) += *(_DWORD *)(v6 + 192);
        *(_DWORD *)(v6 + 152) |= 0x20u;
        ++*(_DWORD *)(v6 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v58);
        v15 = v58.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && v58.OldIrql <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = v34->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << (v58.OldIrql + 1));
              v28 = (v36 & v35[5]) == 0;
              v35[5] &= v36;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
        }
        __writecr8(v15);
        v16 = CcAllocateWorkQueueEntry(Partition, &v55);
        v17 = (KSPIN_LOCK *)(Partition + 128);
        if ( v16 >= 0 )
        {
          v18 = v55;
          *(_BYTE *)(v55 + 120) = 2;
          *(_QWORD *)(v18 + 16) = v6;
          KeAcquireInStackQueuedSpinLock(v17, &v58);
          --*(_DWORD *)(v6 + 112);
          if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
          {
            v19 = Partition + 224;
            *(_QWORD *)(v6 + 496) = v18 | 1;
          }
          else
          {
            *(_QWORD *)(v6 + 496) = v18;
            v19 = Partition + 256;
          }
          CcPostWorkQueue(v18, v19);
LABEL_26:
          v11 = 0;
          goto LABEL_12;
        }
        KeAcquireInStackQueuedSpinLock(v17, &v58);
        *(_DWORD *)(v6 + 152) &= ~0x20u;
        --*(_DWORD *)(v6 + 112);
      }
    }
    v11 = 2;
    goto LABEL_12;
  }
  v11 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v20 = LockHandle.OldIrql;
  v60 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v37 = KeGetCurrentIrql();
      if ( v37 <= 0xFu && LockHandle.OldIrql <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v28 = (v40 & v39[5]) == 0;
        v39[5] &= v40;
        if ( v28 )
        {
          KiRemoveSystemWorkPriorityKick(v38);
          v20 = v60;
        }
      }
    }
  }
  __writecr8(v20);
LABEL_12:
  if ( !a3 && v11 == 2 )
    v11 = 1;
  if ( v11 > 1 )
  {
    *(_DWORD *)(v6 + 152) |= 0x400400u;
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 536);
    ++*(_DWORD *)(v6 + 516);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v58);
    v22 = v58.OldIrql;
    v61 = v58.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && v58.OldIrql <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (v58.OldIrql + 1));
          v28 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v28 )
          {
            KiRemoveSystemWorkPriorityKick(v42);
            v22 = v61;
          }
        }
      }
    }
    __writecr8(v22);
    v23 = a3;
    v56 = a2;
    for ( i = a3; v23; v56 = v54 )
    {
      if ( !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
        break;
      if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                               v6,
                               (unsigned int)&v56,
                               v23,
                               0,
                               (__int64)&v54,
                               (__int64)&i,
                               (__int64)&v57,
                               0) )
        break;
      v54 += i;
      v23 = a3 + a2 - v54;
      i = v23;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v58);
    if ( !*(_DWORD *)(v6 + 4) )
      KeBugCheckEx(0x34u, 0x12B2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v6 + 152) &= ~0x400000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v58);
    v12 = v58.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_18;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_18;
    v45 = KeGetCurrentIrql();
    if ( v45 > 0xFu )
      goto LABEL_18;
    if ( v58.OldIrql > 0xFu )
      goto LABEL_18;
    if ( v45 < 2u )
      goto LABEL_18;
    v46 = KeGetCurrentPrcb();
    v47 = v46->SchedulerAssist;
    v48 = ~(unsigned __int16)(-1LL << (v58.OldIrql + 1));
    v28 = (v48 & v47[5]) == 0;
    v47[5] &= v48;
    if ( !v28 )
      goto LABEL_18;
    v49 = v46;
    goto LABEL_87;
  }
  if ( Partition )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v58);
    v12 = v58.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_18;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_18;
    v50 = KeGetCurrentIrql();
    if ( v50 > 0xFu )
      goto LABEL_18;
    if ( v58.OldIrql > 0xFu )
      goto LABEL_18;
    if ( v50 < 2u )
      goto LABEL_18;
    v51 = KeGetCurrentPrcb();
    v52 = v51->SchedulerAssist;
    v53 = ~(unsigned __int16)(-1LL << (v58.OldIrql + 1));
    v28 = (v53 & v52[5]) == 0;
    v52[5] &= v53;
    if ( !v28 )
      goto LABEL_18;
    v49 = v51;
LABEL_87:
    KiRemoveSystemWorkPriorityKick(v49);
LABEL_18:
    __writecr8(v12);
  }
  return v11;
}
