/*
 * XREFs of CcNotifyOfMappedWrite @ 0x140295F24
 * Callers:
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcScheduleLazyWriteScan @ 0x1402418E0 (CcScheduleLazyWriteScan.c)
 *     CcPostWorkQueue @ 0x14024A8E0 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x14024AF80 (CcAllocateWorkQueueEntry.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402950F0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcAcquireByteRangeForWrite @ 0x140297520 (CcAcquireByteRangeForWrite.c)
 *     CcDecrementOpenCount @ 0x14029A71C (CcDecrementOpenCount.c)
 *     CcCanIWriteStreamEx @ 0x14029AAB0 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 Partition; // r13
  __int64 v6; // rdi
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned int v10; // r14d
  unsigned __int64 v11; // rbx
  int v13; // eax
  unsigned __int64 v14; // r14
  int WorkQueueEntry; // eax
  KSPIN_LOCK *v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned __int8 v19; // r10
  signed __int64 v20; // rax
  unsigned __int8 v21; // r10
  unsigned int v22; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r11
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r11
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  struct _KPRCB *v48; // rcx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // edx
  ULONG_PTR v53; // [rsp+40h] [rbp-29h] BYREF
  __int64 v54; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR v55; // [rsp+50h] [rbp-19h] BYREF
  __int64 v56; // [rsp+58h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v57; // [rsp+60h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v59; // [rsp+D0h] [rbp+67h]
  unsigned __int8 v60; // [rsp+D0h] [rbp+67h]
  unsigned int i; // [rsp+E8h] [rbp+7Fh] BYREF

  v54 = 0LL;
  v53 = 0LL;
  v56 = 0LL;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v57, 0, sizeof(v57));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 && (*(_DWORD *)(v6 + 152) & 0x100) == 0 )
  {
    Partition = CcGetPartition(v6);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v57);
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 536);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
    OldIrql = v57.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v57.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
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
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8(v8);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v57);
    CcDecrementOpenCount(v6);
    if ( (*(_DWORD *)(v6 + 152) & 0x20) != 0 || *(_DWORD *)(v6 + 516) )
      goto LABEL_26;
    if ( *(_DWORD *)(v6 + 112) )
    {
      v9 = *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (*(_DWORD *)(v9 + 0x50) & 0x8000) == 0
        && (unsigned __int8)CcCanIWriteStreamEx(Partition, v9, 0x1000000, 0, 8, 0LL) )
      {
        v10 = 0;
        if ( *(_BYTE *)(Partition + 964) )
          CcScheduleLazyWriteScan(Partition, 1, 0);
        goto LABEL_12;
      }
      v20 = *(_QWORD *)(v6 + 40);
      if ( a2 > v20 && *(_QWORD *)(v6 + 48) > v20 )
      {
        v13 = *(_DWORD *)(v6 + 112);
        *(_DWORD *)(v6 + 192) = v13;
        *(_DWORD *)(Partition + 496) += v13;
        *(_DWORD *)(Partition + 656) += *(_DWORD *)(v6 + 192);
        *(_DWORD *)(v6 + 152) |= 0x20u;
        ++*(_DWORD *)(v6 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
        v14 = v57.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && v57.OldIrql <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
              v27 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
        }
        __writecr8(v14);
        WorkQueueEntry = CcAllocateWorkQueueEntry(Partition, (PSLIST_ENTRY *)&v54);
        v16 = (KSPIN_LOCK *)(Partition + 128);
        if ( WorkQueueEntry >= 0 )
        {
          v17 = v54;
          *(_BYTE *)(v54 + 120) = 2;
          *(_QWORD *)(v17 + 16) = v6;
          KeAcquireInStackQueuedSpinLock(v16, &v57);
          --*(_DWORD *)(v6 + 112);
          if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
          {
            v18 = Partition + 224;
            *(_QWORD *)(v6 + 496) = v17 | 1;
          }
          else
          {
            *(_QWORD *)(v6 + 496) = v17;
            v18 = Partition + 256;
          }
          CcPostWorkQueue(v17, v18);
LABEL_26:
          v10 = 0;
          goto LABEL_12;
        }
        KeAcquireInStackQueuedSpinLock(v16, &v57);
        *(_DWORD *)(v6 + 152) &= ~0x20u;
        --*(_DWORD *)(v6 + 112);
      }
    }
    v10 = 2;
    goto LABEL_12;
  }
  v10 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v19 = LockHandle.OldIrql;
  v59 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v27 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v27 )
        {
          KiRemoveSystemWorkPriorityKick(v37);
          v19 = v59;
        }
      }
    }
  }
  __writecr8(v19);
LABEL_12:
  if ( !a3 && v10 == 2 )
    v10 = 1;
  if ( v10 > 1 )
  {
    *(_DWORD *)(v6 + 152) |= 0x400400u;
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 536);
    ++*(_DWORD *)(v6 + 516);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
    v21 = v57.OldIrql;
    v60 = v57.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && v57.OldIrql <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
          v27 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v27 )
          {
            KiRemoveSystemWorkPriorityKick(v41);
            v21 = v60;
          }
        }
      }
    }
    __writecr8(v21);
    v22 = a3;
    v55 = a2;
    for ( i = a3; v22; v55 = v53 )
    {
      if ( !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
        break;
      if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                               v6,
                               (unsigned int)&v55,
                               v22,
                               0,
                               (__int64)&v53,
                               (__int64)&i,
                               (__int64)&v56,
                               0) )
        break;
      v53 += i;
      v22 = a3 + a2 - v53;
      i = v22;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v57);
    if ( !*(_DWORD *)(v6 + 4) )
      KeBugCheckEx(0x34u, 0x129AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v6 + 152) &= ~0x400000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
    v11 = v57.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_18;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_18;
    v44 = KeGetCurrentIrql();
    if ( v44 > 0xFu )
      goto LABEL_18;
    if ( v57.OldIrql > 0xFu )
      goto LABEL_18;
    if ( v44 < 2u )
      goto LABEL_18;
    v45 = KeGetCurrentPrcb();
    v46 = v45->SchedulerAssist;
    v47 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
    v27 = (v47 & v46[5]) == 0;
    v46[5] &= v47;
    if ( !v27 )
      goto LABEL_18;
    v48 = v45;
    goto LABEL_87;
  }
  if ( Partition )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
    v11 = v57.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_18;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_18;
    v49 = KeGetCurrentIrql();
    if ( v49 > 0xFu )
      goto LABEL_18;
    if ( v57.OldIrql > 0xFu )
      goto LABEL_18;
    if ( v49 < 2u )
      goto LABEL_18;
    v50 = KeGetCurrentPrcb();
    v51 = v50->SchedulerAssist;
    v52 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
    v27 = (v52 & v51[5]) == 0;
    v51[5] &= v52;
    if ( !v27 )
      goto LABEL_18;
    v48 = v50;
LABEL_87:
    KiRemoveSystemWorkPriorityKick(v48);
LABEL_18:
    __writecr8(v11);
  }
  return v10;
}
