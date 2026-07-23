/*
 * XREFs of MiDeleteCachedSubsection @ 0x140528FEC
 * Callers:
 *     MiRemoveUnusedSegments @ 0x14052A93C (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x14022A08C (MiInsertUnusedSubsection.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x140302834 (MiDeleteControlArea.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiReduceUnusedSubsectionCount @ 0x1403038E0 (MiReduceUnusedSubsectionCount.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 *     MiDecrementModifiedWriteCount @ 0x140362158 (MiDecrementModifiedWriteCount.c)
 *     MiInsertUnusedSegment @ 0x1403622B0 (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x14037EE7C (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiIsSubsectionClean @ 0x140529E74 (MiIsSubsectionClean.c)
 *     MiPreventControlAreaDelete @ 0x14052A19C (MiPreventControlAreaDelete.c)
 *     MiPurgeSubsection @ 0x14052A4F0 (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14063BE14 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14063BFF4 (FsRtlAcquireFileForCcFlushEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  volatile LONG *v1; // rbp
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  _QWORD **v5; // r15
  unsigned __int64 v6; // r14
  _QWORD *i; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  __int64 inserted; // rdi
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  int v27; // ebx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  int IsSubsectionClean; // eax
  int v33; // r15d
  KIRQL v34; // al
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  struct _FILE_OBJECT *v40; // r12
  unsigned __int8 v41; // cl
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int64 v45; // r14
  signed __int64 v46; // rax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  KIRQL v51; // al
  __int64 v52; // r8
  int v53; // ecx
  unsigned __int64 v54; // r14
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  BOOL v63; // r12d
  KIRQL v64; // al
  int v65; // eax
  unsigned int v66; // ecx
  _QWORD *v67; // rdi
  unsigned __int8 v68; // cl
  struct _KPRCB *v69; // r9
  _DWORD *v70; // r8
  int v71; // eax
  __int64 v72; // r12
  _QWORD *v73; // rdi
  unsigned __int8 v74; // al
  char v75; // cl
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r9
  int v78; // eax
  _DWORD *v79; // r8
  signed __int64 v80; // [rsp+40h] [rbp-68h]
  __int128 v81[6]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v83; // [rsp+B8h] [rbp+10h]
  PVOID P; // [rsp+C0h] [rbp+18h]
  ULONG_PTR v85; // [rsp+C8h] [rbp+20h]

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = 1LL;
  v81[0] = 0LL;
  v4 = 1LL;
  v5 = (_QWORD **)(a1 + 1720);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v4 = (ULONG_PTR)(i - 10);
    v3 = *(i - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v3 + 72)) )
      break;
  }
  if ( i == v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = 3221226021LL;
LABEL_25:
    __writecr8(v6);
    return result;
  }
  v14 = (_QWORD *)(v4 + 80);
  v15 = *(_QWORD *)(v4 + 80);
  v16 = *(_QWORD **)(v4 + 88);
  if ( *(_QWORD *)(v15 + 8) != v4 + 80 || (_QWORD *)*v16 != v14 )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  *(_WORD *)(v4 + 34) &= ~8u;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *v14 = v14;
  MiReduceUnusedSubsectionCount((_DWORD *)v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v17 = *(_DWORD *)(v3 + 56);
  if ( (v17 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
      }
    }
    result = 3221225587LL;
    goto LABEL_25;
  }
  if ( (v17 & 8) != 0 )
  {
    if ( *(int *)(v4 + 52) < 0 )
    {
      inserted = MiInsertUnusedSubsection((_QWORD *)v4);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v12 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
      }
      __writecr8(v6);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      return 3221225504LL;
    }
    v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  if ( *(_QWORD *)(v4 + 96) )
    KeBugCheckEx(0x1Au, 0x42004uLL, v4, 0LL, 0LL);
  *(_QWORD *)(v4 + 96) = 1LL;
  *(_WORD *)(v4 + 32) &= ~1u;
  MiRemoveUnusedSegment(v3);
  *(_DWORD *)(v3 + 56) |= 0x100u;
  P = *(PVOID *)(v4 + 8);
  if ( v27 == 1 )
  {
    ++*(_DWORD *)(v3 + 76);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v29);
        }
      }
    }
    __writecr8(v6);
    IsSubsectionClean = MiIsSubsectionClean(v4);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v34 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        *(_DWORD *)(v4 + 52) |= 0x80000000;
        v35 = v34;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = v37->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
              v12 = (v39 & v38[5]) == 0;
              v38[5] &= v39;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick((__int64)v37);
            }
          }
        }
        __writecr8(v35);
      }
      v33 = -1073741792;
    }
    else
    {
      v33 = 0;
    }
  }
  else
  {
    v40 = (struct _FILE_OBJECT *)MiPreventControlAreaDelete(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v42);
        }
      }
    }
    __writecr8(v6);
    v85 = *(_QWORD *)(v4 + 8);
    v83 = v85 - 8 + 8LL * *(unsigned int *)(v4 + 44);
    v33 = FsRtlAcquireFileForCcFlushEx(v40);
    v45 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v46 = _InterlockedDecrement64((volatile signed __int64 *)(v3 + 112));
    v80 = v46;
    *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) + 1688LL) = 0LL;
    if ( v33 < 0 || (*(_DWORD *)(v3 + 56) & 1) != 0 )
    {
      if ( v46 )
        ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v55 = KeGetCurrentIrql();
          if ( v55 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v55 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v57 = v56->SchedulerAssist;
            v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
            v12 = (v58 & v57[5]) == 0;
            v57[5] &= v58;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v56);
          }
        }
      }
      __writecr8(v45);
      if ( v33 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(v40);
        v33 = -1073741431;
      }
      if ( !v80 )
      {
        MiDeleteControlArea((PVOID)v3);
        ObfDereferenceObjectWithTag(v40, 0x746C6644u);
        return (unsigned int)v33;
      }
    }
    else
    {
      ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = v48->SchedulerAssist;
            v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
            v12 = (v50 & v49[5]) == 0;
            v49[5] &= v50;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v48);
          }
        }
      }
      __writecr8(v45);
      KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
      v33 = MiFlushSectionInternal(v85, v83, (__int64 *)v4, v4, 0LL, 2u, (unsigned int *)v81);
      KeGetCurrentThread()[1].TrapFrame = 0LL;
      FsRtlReleaseFileForCcFlush(v40);
    }
    MiDereferenceControlAreaFile(v3, (unsigned __int64)v40);
  }
  v51 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v53 = *(_DWORD *)(v3 + 56);
  v54 = v51;
  if ( (v53 & 1) != 0 )
  {
    *(_DWORD *)(v3 + 56) = v53 & 0xFFFFFEFF;
    goto LABEL_110;
  }
  if ( v33 < 0 )
    goto LABEL_108;
  if ( *(_QWORD *)(v4 + 96) != 1LL || (*(_BYTE *)(v4 + 32) & 1) != 0 )
  {
    v33 = -1073741823;
LABEL_108:
    v65 = 1;
    goto LABEL_109;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v59 = KeGetCurrentIrql();
      if ( v59 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v59 >= 2u )
      {
        v60 = KeGetCurrentPrcb();
        v61 = v60->SchedulerAssist;
        v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
        v12 = (v62 & v61[5]) == 0;
        v61[5] &= v62;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v60);
      }
    }
  }
  __writecr8(v54);
  v63 = MiPurgeSubsection(v4) == 0;
  v64 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v53 = *(_DWORD *)(v3 + 56);
  LOBYTE(v54) = v64;
  v65 = v63;
LABEL_109:
  v66 = v53 & 0xFFFFFEFF;
  *(_DWORD *)(v3 + 56) = v66;
  if ( (v66 & 1) == 0 )
  {
    v72 = 0LL;
    if ( v65 == 1 || *(_QWORD *)(v4 + 96) != 1LL || *(_DWORD *)(v4 + 104) || (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      v33 = -1073741823;
      v72 = MiDecrementSubsectionViewCount((_QWORD *)v4, 0LL, v52);
      if ( !*(_QWORD *)(v4 + 96) )
        v72 += MiInsertUnusedSubsection((_QWORD *)v4);
      P = 0LL;
    }
    else
    {
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v4 + 112), 0);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    v73 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1);
    if ( *(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v74 = KeGetCurrentIrql();
          if ( v74 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v74 >= 2u )
          {
            v75 = v54 + 1;
            goto LABEL_142;
          }
        }
      }
    }
    else
    {
      if ( !*(_QWORD *)(v3 + 32) )
      {
        MiDestroySection(v3, v54, 0LL);
        goto LABEL_146;
      }
      v72 += MiInsertUnusedSegment(v3);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v76 = KeGetCurrentIrql();
          if ( v76 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v76 >= 2u )
          {
            v75 = v54 + 1;
LABEL_142:
            v77 = KeGetCurrentPrcb();
            v78 = ~(unsigned __int16)(-1LL << v75);
            v79 = v77->SchedulerAssist;
            v12 = (v78 & v79[5]) == 0;
            v79[5] &= v78;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v77);
          }
        }
      }
    }
    __writecr8((unsigned __int8)v54);
LABEL_146:
    if ( v73 )
      MiReleaseControlAreaWaiters(v73);
    if ( v72 )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, v72);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v33;
  }
LABEL_110:
  MiDecrementSubsectionViewCount((_QWORD *)v4, 0LL, v52);
  v67 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v68 = KeGetCurrentIrql();
      if ( v68 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v68 >= 2u )
      {
        v69 = KeGetCurrentPrcb();
        v70 = v69->SchedulerAssist;
        v71 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
        v12 = (v71 & v70[5]) == 0;
        v70[5] &= v71;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v69);
      }
    }
  }
  __writecr8((unsigned __int8)v54);
  if ( v67 )
    MiReleaseControlAreaWaiters(v67);
  return 3221225473LL;
}
